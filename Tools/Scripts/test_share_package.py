"""Self-test with tiny temporary files; never reads or writes a game ROM."""

from __future__ import annotations

import json
import os
import subprocess
import sys
import tempfile
from pathlib import Path

from apply_simple_patch import load_and_validate_definition


def run(*args: str) -> subprocess.CompletedProcess[str]:
    environment = os.environ.copy()
    environment["PYTHONUTF8"] = "1"
    return subprocess.run(
        [sys.executable, *args],
        text=True,
        encoding="utf-8",
        capture_output=True,
        check=False,
        env=environment,
    )


def require(condition: bool, message: str) -> None:
    if not condition:
        raise RuntimeError(message)


def main() -> int:
    tools = Path(__file__).resolve().parent
    share = tools.parent
    with tempfile.TemporaryDirectory(prefix="GBA 分享 测试 ") as temporary:
        root = Path(temporary)
        small = root / "测试 小文件.bin"
        small.write_bytes(b"123456789")
        verify = run(str(tools / "verify_rom.py"), str(small), "--report-only")
        require(verify.returncode == 0, verify.stderr)
        identity = json.loads(verify.stdout)
        require(identity["crc32"] == "CBF43926" and identity["result"] == "MISMATCH", "CRC/refusal report failed")

        bad_output = root / "不应生成.gba"
        apply_bad = run(
            str(tools / "apply_simple_patch.py"),
            str(small),
            str(share / "patches" / "examples" / "patch-template.json"),
            str(bad_output),
        )
        require(apply_bad.returncode != 0 and not bad_output.exists(), "Mismatched input was not safely rejected")

        existing_output = root / "已有 输出.gba"
        existing_output.write_bytes(b"KEEP")
        apply_existing = run(
            str(tools / "apply_simple_patch.py"),
            str(small),
            str(share / "patches" / "examples" / "patch-template.json"),
            str(existing_output),
        )
        require(apply_existing.returncode != 0 and existing_output.read_bytes() == b"KEEP", "Existing output was modified")

        same = run(
            str(tools / "apply_simple_patch.py"),
            str(small),
            str(share / "patches" / "examples" / "patch-template.json"),
            str(small),
        )
        require(same.returncode != 0 and small.read_bytes() == b"123456789", "Input overwrite protection failed")

        definition = root / "新 定义.json"
        created = run(str(tools / "new_patch_definition.py"), str(definition), "--id", "test_only", "--name", "中文 路径测试")
        require(created.returncode == 0 and definition.exists(), created.stderr)
        created_again = run(str(tools / "new_patch_definition.py"), str(definition), "--id", "test_only", "--name", "不能覆盖")
        require(created_again.returncode != 0, "Existing definition overwrite was not rejected")

        template = json.loads((share / "patches" / "examples" / "patch-template.json").read_text(encoding="utf-8"))
        template["writes"] = [
            {"address": "0x08000000", "offset": "0x00000000", "before_hex": "00", "after_hex": "00"}
        ]
        no_effect = root / "无效果.json"
        no_effect.write_text(json.dumps(template), encoding="utf-8")
        try:
            load_and_validate_definition(no_effect)
        except ValueError:
            pass
        else:
            raise RuntimeError("No-effect write was not rejected")

        changed = root / "差异 文件.bin"
        changed.write_bytes(b"12X456789")
        report = root / "差异 报告.json"
        compared = run(str(tools / "compare_rom.py"), str(small), str(changed), "--report", str(report))
        require(compared.returncode == 0 and report.exists(), compared.stderr)
        data = json.loads(report.read_text(encoding="utf-8"))
        require(data["changed_ranges"] == 1 and data["ranges"][0]["offset"] == "0x00000002", "Compare failed")

    print("PASS: CRC32 reference vector")
    print("PASS: mismatched ROM refusal and failed-output cleanup")
    print("PASS: input overwrite refusal")
    print("PASS: existing output/definition refusal")
    print("PASS: Chinese and space paths")
    print("PASS: compact difference report")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
