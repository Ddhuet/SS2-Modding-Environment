
void FUN_0805df24(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint local_4c;
  uint local_48;
  
  *(undefined1 *)(param_1 + 0x30) = 1;
  puVar5 = DAT_0805df60;
  *DAT_0805df60 = 0;
  puVar5[1] = 0;
  while( true ) {
    uVar14 = (uint)*(byte *)(param_1 + 0x30);
    if (uVar14 < 6) break;
    bVar1 = *(byte *)(param_1 + 0x30);
    if ((bVar1 != 5) && (bVar1 != 0)) {
      uVar14 = (uint)*(ushort *)(param_1 + 0x28) - (local_4c >> 1) & 0xffff;
      uVar9 = ((uint)*(ushort *)(param_1 + 0x28) + (local_4c >> 1) & 0xffff) + (local_4c & 1);
      uVar18 = uVar9 & 0xffff;
      uVar10 = (uint)*(ushort *)(param_1 + 0x2a) - (local_48 >> 1) & 0xffff;
      uVar11 = (local_48 & 1) + ((uint)*(ushort *)(param_1 + 0x2a) + (local_48 >> 1) & 0xffff);
      uVar12 = uVar11 & 0xffff;
      iVar13 = FUN_0800c5e8();
      iVar6 = DAT_0805e2c8;
      if (iVar13 == 0) {
        iVar15 = uVar14 - 1;
        iVar17 = uVar10 - 1;
        iVar20 = iVar17 * 0x40;
        sVar2 = (short)DAT_0805e2cc;
        *(short *)(iVar15 * 2 + iVar20 + DAT_0805e2c8) = sVar2;
        iVar19 = (uVar12 + 1) * 0x40;
        *(short *)(iVar15 * 2 + iVar19 + iVar6) = (short)DAT_0805e2d0;
        iVar16 = uVar18 + 1;
        iVar13 = iVar16 * 2;
        *(short *)(iVar13 + iVar20 + iVar6) = sVar2 + 2;
        *(short *)(iVar13 + iVar19 + iVar6) = (short)DAT_0805e2d4;
        uVar8 = DAT_0805e2dc;
        uVar7 = DAT_0805e2d8;
        iVar13 = DAT_0805e2c8;
        uVar3 = DAT_0805e2e0;
        uVar4 = DAT_0805e2e4;
        for (; DAT_0805e2c8 = iVar13, DAT_0805e2e0 = uVar3, DAT_0805e2e4 = uVar4, uVar14 <= uVar18;
            uVar14 = uVar14 + 1 & 0xffff) {
          *(short *)(uVar14 * 2 + iVar20 + iVar6) = (short)uVar7;
          *(short *)(uVar14 * 2 + iVar19 + iVar6) = (short)uVar8;
          iVar13 = DAT_0805e2c8;
          uVar3 = DAT_0805e2e0;
          uVar4 = DAT_0805e2e4;
        }
        if (uVar10 <= uVar12) {
          do {
            *(short *)(iVar15 * 2 + uVar10 * 0x40 + iVar13) = (short)uVar3;
            *(short *)(iVar16 * 2 + uVar10 * 0x40 + iVar13) = (short)uVar4;
            uVar10 = uVar10 + 1 & 0xffff;
          } while (uVar10 <= uVar12);
        }
        iVar6 = DAT_0805e2e8;
        *(ushort *)(DAT_0805e2e8 + 0x32) =
             ((short)iVar15 * 8 + 3) * 0x100 | ((short)uVar9 + 2) * 8 - 3U;
        *(ushort *)(iVar6 + 0x36) = ((short)iVar17 * 8 + 3) * 0x100 | ((short)uVar11 + 2) * 8 - 3U;
        FUN_0801a23c(~(uint)(*(ushort *)(param_1 + 0x2e) >> 1) + (uint)*(ushort *)(param_1 + 0x2a),
                     *(ushort *)(param_1 + 0x2e) + 3);
      }
    }
    FUN_080003f0();
  }
                    /* WARNING: Could not recover jumptable at 0x0805df5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar14 * 4 + DAT_0805df64))();
  return;
}

