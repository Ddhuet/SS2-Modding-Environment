# 案例四：从BL补丁追到调用图

## Patch定义

`money_drop_control.json` 在 `0x0805CCEA` 写4字节：

```text
before: A3 F7 ED FD
after : 00 F0 DB FE
```

文件偏移为 `0x0005CCEA`。这是Thumb-1双半字BL，不应作为普通四字节常量解释。

## 解码调用目标

以指令地址加4作为PC基准，对两个11位半字段组合并做23位符号扩展：

```text
原目标：0x080008C8  RNG32
新目标：0x0805DAA4  bag_money_count
```

这把一个“字节替换”提升为可审查语义：原路径调用随机数，新路径调用背包金钱统计。函数索引和历史伪代码可用于检查两个目标，但当前基准字节仍以patch definition和ROM实读为准。

## 必查风险

- 两个目标是否都是Thumb入口；
- 调用点期望的参数寄存器是否与新函数一致；
- 返回值宽度和含义是否可被后续比较正确消费；
- 新调用是否引入未预期的副作用或性能开销；
- “控制掉落”的实际规则是什么，不能仅由函数名推断。

这也是为什么 `mode: unknown` 的机器定义仍需代码审计：前后字节和构建可以确认，但ABI兼容性不是JSON自动证明的。

## 可复现只读命令

```text
python tools/disassemble_rom.py <ROM> --address 0x0805CCE0 --length 32 --mode thumb
python tools/find_thumb_bl_references.py <ROM> --target 0x080008C8
python tools/find_thumb_bl_references.py <ROM> --target 0x0805DAA4
```
