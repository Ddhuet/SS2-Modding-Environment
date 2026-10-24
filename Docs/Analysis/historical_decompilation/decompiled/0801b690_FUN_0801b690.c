
/* WARNING: Removing unreachable block (ram,0x0801c3cc) */
/* WARNING: Removing unreachable block (ram,0x0801c3e8) */

undefined4 FUN_0801b690(int param_1,short *param_2,short *param_3,short *param_4,undefined4 param_5)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  ushort *puVar17;
  short *psVar18;
  undefined4 unaff_lr;
  short local_50;
  int local_48;
  int local_44;
  undefined4 local_38;
  
  iVar15 = *DAT_0801b6d4;
  if ((param_2 == (short *)0x0) || (*param_2 != 2)) {
    iVar13 = iVar15 + (uint)*(ushort *)(iVar15 + 0x70) * 0x10;
    if ((*(char *)(iVar13 + 0x81) != '\0') && (*(char *)(iVar13 + 0x80) == '\0')) {
      uVar8 = *(ushort *)(iVar13 + 0x7a);
      goto LAB_0801b6e4;
    }
    iVar13 = 0;
  }
  else {
    uVar8 = param_2[1];
LAB_0801b6e4:
    iVar13 = FUN_08006d98(uVar8 | 0xb0000);
  }
  if ((param_2 == (short *)0x0) || (*param_2 != 3)) {
    if ((*(char *)(*DAT_0801b71c + DAT_0801b720) != '\0') &&
       (*(char *)(*DAT_0801b71c + 0x120) == '\0')) {
      uVar8 = *(ushort *)(iVar15 + 0x11a);
      goto LAB_0801b732;
    }
    local_44 = 0;
  }
  else {
    uVar8 = param_2[1];
LAB_0801b732:
    local_44 = FUN_08006d98(uVar8 | 0xc0000);
  }
  if ((param_2 == (short *)0x0) || (*param_2 != 4)) {
    if ((*(char *)(*DAT_0801b768 + DAT_0801b76c) != '\0') &&
       (*(char *)(*DAT_0801b768 + 0x110) == '\0')) {
      uVar8 = *(ushort *)(iVar15 + 0x10a);
      goto LAB_0801b77e;
    }
    iVar9 = 0;
  }
  else {
    uVar8 = param_2[1];
LAB_0801b77e:
    iVar9 = FUN_08006d98(uVar8 | 0xd0000);
  }
  if ((param_2 == (short *)0x0) || (*param_2 != 5)) {
    if ((*(char *)(*DAT_0801b7b4 + DAT_0801b7b8) != '\0') &&
       (*(char *)(*DAT_0801b7b4 + 0x130) == '\0')) {
      uVar8 = *(ushort *)(iVar15 + 0x12a);
      goto LAB_0801b7ca;
    }
    iVar10 = 0;
  }
  else {
    uVar8 = param_2[1];
LAB_0801b7ca:
    iVar10 = FUN_08006d98(uVar8 | 0xe0000);
  }
  if ((param_2 == (short *)0x0) || (*param_2 != 6)) {
    if (*(char *)(*DAT_0801b7f8 + DAT_0801b7fc) != '\0') {
      uVar8 = *(ushort *)(iVar15 + 0x14a);
      goto LAB_0801b80e;
    }
    local_48 = 0;
  }
  else {
    uVar8 = param_2[1];
LAB_0801b80e:
    local_48 = FUN_08006d98(uVar8 | 0xf0000);
  }
  if ((param_2 == (short *)0x0) || (*param_2 != 7)) {
    if (*(char *)(*DAT_0801b83c + DAT_0801b840) != '\0') {
      uVar8 = *(ushort *)(iVar15 + 0x13a);
      goto LAB_0801b852;
    }
    local_38 = 0;
  }
  else {
    uVar8 = param_2[1];
LAB_0801b852:
    local_38 = FUN_08006d98(uVar8 | 0x110000);
  }
  piVar2 = DAT_0801b924;
  iVar15 = *DAT_0801b924;
  uVar14 = *(undefined4 *)(iVar15 + 0x1c);
  uVar16 = *(undefined4 *)(iVar15 + 0x20);
  *(undefined4 *)param_3 = *(undefined4 *)(iVar15 + 0x18);
  *(undefined4 *)(param_3 + 2) = uVar14;
  *(undefined4 *)(param_3 + 4) = uVar16;
  uVar14 = *(undefined4 *)(iVar15 + 0x28);
  uVar16 = *(undefined4 *)(iVar15 + 0x2c);
  *(undefined4 *)(param_3 + 6) = *(undefined4 *)(iVar15 + 0x24);
  *(undefined4 *)(param_3 + 8) = uVar14;
  *(undefined4 *)(param_3 + 10) = uVar16;
  uVar14 = *(undefined4 *)(iVar15 + 0x34);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(iVar15 + 0x30);
  *(undefined4 *)(param_3 + 0xe) = uVar14;
  iVar15 = *piVar2;
  param_3[4] = *(short *)((uint)*(ushort *)(iVar15 + 0x10) * 0x20 + DAT_0801b928 + 8);
  *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(iVar15 + 0x10);
  *(char *)(param_1 + 0x6e) = (char)*(undefined2 *)(iVar15 + 0x12);
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0xff;
  *(undefined1 *)((int)param_4 + 0x1f) = 3;
  *(byte *)(param_4 + 0x10) = 3;
  *(undefined1 *)((int)param_4 + 0x1d) = 0;
  *(undefined1 *)(param_4 + 0xf) = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  *(undefined1 *)(param_4 + 9) = 0;
  *(undefined1 *)((int)param_4 + 0x13) = 0;
  *(undefined1 *)(param_4 + 10) = 0;
  *(undefined1 *)((int)param_4 + 0x15) = 0;
  *(undefined1 *)((int)param_4 + 0x11) = 0;
  *(undefined1 *)((int)param_4 + 0xf) = 0;
  *(undefined1 *)(param_4 + 0xb) = 0;
  *(undefined1 *)((int)param_4 + 0x17) = 0;
  *(undefined1 *)(param_4 + 0xc) = 0;
  *(undefined1 *)((int)param_4 + 0x19) = 10;
  *(undefined1 *)((int)param_4 + 0x1b) = 100;
  *(undefined1 *)(param_4 + 0xe) = 0;
  *(undefined1 *)(param_4 + 0xd) = 0;
  *(undefined1 *)((int)param_4 + 0x21) = 0;
  param_4[0x12] = 0;
  param_4[0x13] = 0;
  param_4[0x14] = 0;
  param_4[0x15] = 0;
  param_4[0x16] = 0;
  param_4[0x17] = 0;
  local_50 = 0;
  if (iVar13 != 0) {
    if ((param_2 == (short *)0x0) || (*param_2 != 2)) {
      iVar15 = *piVar2;
      iVar15 = iVar15 + (uint)*(ushort *)(iVar15 + 0x70) * 0x10;
      if ((*(char *)(iVar15 + 0x81) == '\0') ||
         (uVar11 = (uint)*(ushort *)(iVar15 + 0x7c), uVar11 == 0)) goto LAB_0801b944;
LAB_0801b934:
      iVar15 = FUN_08006d98(uVar11 - 1 | 0x130000);
    }
    else {
      uVar11 = (uint)(ushort)param_2[2];
      if (uVar11 != 0) goto LAB_0801b934;
LAB_0801b944:
      iVar15 = 0;
    }
    param_4[3] = (ushort)*(byte *)(iVar13 + 0x17c);
    FUN_0801ae64(iVar13 + 0x188,param_3,param_4);
    FUN_0801ae64(iVar15 + 0x178,param_3,param_4);
  }
  if (local_44 != 0) {
    if ((param_2 == (short *)0x0) || (*param_2 != 3)) {
      if ((*(char *)(*DAT_0801b99c + DAT_0801b9a0) == '\0') ||
         (uVar11 = (uint)*(ushort *)(*DAT_0801b99c + 0x11c), uVar11 == 0)) goto LAB_0801b9bc;
LAB_0801b9ac:
      iVar15 = FUN_08006d98(uVar11 - 1 | 0x130000);
    }
    else {
      uVar11 = (uint)(ushort)param_2[2];
      if (uVar11 != 0) goto LAB_0801b9ac;
LAB_0801b9bc:
      iVar15 = 0;
    }
    FUN_0801ae64(local_44 + 0x180,param_3,param_4);
    FUN_0801ae64(iVar15 + 0x178,param_3,param_4);
  }
  if (iVar9 != 0) {
    if ((param_2 == (short *)0x0) || (*param_2 != 4)) {
      if ((*(char *)(*DAT_0801ba0c + DAT_0801ba10) == '\0') ||
         (uVar11 = (uint)*(ushort *)(*DAT_0801ba0c + 0x10c), uVar11 == 0)) goto LAB_0801ba2c;
LAB_0801ba1c:
      iVar15 = FUN_08006d98(uVar11 - 1 | 0x130000);
    }
    else {
      uVar11 = (uint)(ushort)param_2[2];
      if (uVar11 != 0) goto LAB_0801ba1c;
LAB_0801ba2c:
      iVar15 = 0;
    }
    FUN_0801ae64(iVar9 + 0x180,param_3,param_4);
    FUN_0801ae64(iVar15 + 0x178,param_3,param_4);
  }
  if (iVar10 != 0) {
    if ((param_2 == (short *)0x0) || (*param_2 != 5)) {
      if ((*(char *)(*DAT_0801ba7c + DAT_0801ba80) == '\0') ||
         (uVar11 = (uint)*(ushort *)(*DAT_0801ba7c + 300), uVar11 == 0)) goto LAB_0801ba9c;
LAB_0801ba8c:
      iVar15 = FUN_08006d98(uVar11 - 1 | 0x130000);
    }
    else {
      uVar11 = (uint)(ushort)param_2[2];
      if (uVar11 != 0) goto LAB_0801ba8c;
LAB_0801ba9c:
      iVar15 = 0;
    }
    FUN_0801ae64(iVar10 + 0x184,param_3,param_4);
    FUN_0801ae64(iVar15 + 0x178,param_3,param_4);
    if (*(int *)(iVar10 + 0x17c) != 0) {
      cVar5 = *(char *)((int)param_4 + 0x15);
      FUN_0801dc54();
      cVar3 = FUN_0801dc54();
      if (cVar3 == '\0') {
        uVar14 = 3;
LAB_0801baee:
        cVar5 = FUN_0801deb0(param_5,uVar14);
        cVar5 = cVar5 << 3;
      }
      else if (cVar3 == '\x03') {
        uVar14 = 2;
        goto LAB_0801baee;
      }
      *(char *)(param_4 + 0xb) = cVar5 + (char)param_4[0xb];
    }
  }
  if (local_48 != 0) {
    FUN_0801ae64(local_48 + 0x178,param_3,param_4);
  }
  *(undefined2 *)(param_1 + 0x13a) = 0;
  psVar18 = *(short **)(param_1 + 0x3c);
  uVar8 = 0;
  do {
    if ((-1 < *psVar18) || (*psVar18 == -2)) {
      if ((ushort)psVar18[1] < 4) {
        if (((*(uint *)((uint)(ushort)psVar18[1] * 0x154 + DAT_0801bb7c + 0x38) & 0x2000) == 0) &&
           (uVar11 = (uint)*(ushort *)((uint)(ushort)psVar18[1] * 0x154 + DAT_0801bb7c + 0x12),
           uVar11 < 9)) {
                    /* WARNING: Could not recover jumptable at 0x0801bb7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar14 = (**(code **)(uVar11 * 4 + DAT_0801bb80))();
          return uVar14;
        }
      }
      else if ((ushort)psVar18[2] - 1 < 7) {
                    /* WARNING: Could not recover jumptable at 0x0801bec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar14 = (**(code **)(((ushort)psVar18[2] - 1) * 4 + DAT_0801becc))();
        return uVar14;
      }
    }
    uVar8 = uVar8 + 1;
    psVar18 = psVar18 + 0x14;
  } while (uVar8 < 8);
  iVar15 = FUN_0801b4b8(iVar13,local_44,iVar9,iVar10,local_48,local_38);
  if (iVar15 != 0) {
    FUN_0801ae64(iVar15,param_3,param_4);
  }
  if (iVar13 != 0) {
    sVar7 = *(short *)(iVar13 + 0x176);
    uVar4 = FUN_0801dc54();
    sVar6 = FUN_0801b18c(iVar13,param_5,(int)sVar7,uVar4);
    sVar7 = *param_4;
    *param_4 = sVar6 + sVar7;
    if ((param_2 == (short *)0x0) || (*param_2 != 2)) {
      sVar7 = *param_4 +
              (ushort)*(byte *)(*DAT_0801c028 + (uint)*(ushort *)(*DAT_0801c028 + 0x70) * 0x10 +
                               0x7e);
    }
    else {
      sVar7 = sVar6 + sVar7 + (ushort)*(byte *)(param_2 + 3);
    }
    *param_4 = sVar7;
  }
  *param_4 = *param_3 + *param_4;
  if (local_44 != 0) {
    local_50 = *(short *)(local_44 + 0x174);
    FUN_0801dc54();
    cVar5 = FUN_0801dc54();
    if (cVar5 == '\0') {
      uVar11 = FUN_0801deb0(param_5,4);
      uVar14 = 4;
LAB_0801c04a:
      uVar12 = FUN_0801deb0(param_5,uVar14);
      local_50 = FUN_080ba8a4(((int)local_50 + (uVar11 & 0xffff) * 2) * ((uVar12 & 0xffff) + 10),10)
      ;
    }
    else if (cVar5 == '\x03') {
      uVar11 = FUN_0801deb0(param_5,3);
      uVar14 = 3;
      goto LAB_0801c04a;
    }
    if ((param_2 == (short *)0x0) || (*param_2 != 3)) {
      bVar1 = *(byte *)(*DAT_0801c0c8 + 0x11e);
    }
    else {
      bVar1 = *(byte *)(param_2 + 3);
    }
    local_50 = local_50 + (ushort)bVar1;
  }
  if ((iVar13 != 0) && (*(short *)(iVar13 + 0x174) == 9)) {
    if ((param_2 == (short *)0x0) || (*param_2 != 2)) {
      bVar1 = *(byte *)(*DAT_0801c110 + (uint)*(ushort *)(*DAT_0801c110 + 0x70) * 0x10 + 0x7e);
    }
    else {
      bVar1 = *(byte *)(param_2 + 3);
    }
    local_50 = local_50 + (ushort)bVar1;
  }
  if (iVar9 != 0) {
    sVar7 = *(short *)(iVar9 + 0x174);
    FUN_0801dc54();
    cVar5 = FUN_0801dc54();
    if (cVar5 == '\0') {
      uVar11 = FUN_0801deb0(param_5,4);
      uVar14 = 4;
LAB_0801c132:
      uVar12 = FUN_0801deb0(param_5,uVar14);
      sVar7 = FUN_080ba8a4(((int)sVar7 + (uVar11 & 0xffff) * 2) * ((uVar12 & 0xffff) + 10),10);
    }
    else if (cVar5 == '\x03') {
      uVar11 = FUN_0801deb0(param_5,3);
      uVar14 = 3;
      goto LAB_0801c132;
    }
    if ((param_2 == (short *)0x0) || (*param_2 != 4)) {
      bVar1 = *(byte *)(*DAT_0801c1c8 + 0x10e);
    }
    else {
      bVar1 = *(byte *)(param_2 + 3);
    }
    local_50 = local_50 + sVar7 + (ushort)bVar1;
  }
  if (iVar10 == 0) goto LAB_0801c264;
  if (*(int *)(iVar10 + 0x17c) == 0) {
    sVar7 = *(short *)(iVar10 + 0x174);
    FUN_0801dc54();
    cVar5 = FUN_0801dc54();
    if (cVar5 != '\0') {
      if (cVar5 != '\x03') goto LAB_0801c22e;
      goto LAB_0801c200;
    }
    uVar11 = FUN_0801deb0(param_5,4);
    uVar14 = 4;
LAB_0801c20e:
    uVar12 = FUN_0801deb0(param_5,uVar14);
    sVar7 = FUN_080ba8a4(((int)sVar7 + (uVar11 & 0xffff) * 2) * ((uVar12 & 0xffff) + 10),10);
  }
  else {
    sVar7 = *(short *)(iVar10 + 0x174);
    FUN_0801dc54();
    cVar5 = FUN_0801dc54();
    if (cVar5 == '\0') {
LAB_0801c200:
      uVar11 = FUN_0801deb0(param_5,3);
      uVar14 = 3;
      goto LAB_0801c20e;
    }
    if (cVar5 == '\x03') {
      uVar11 = FUN_0801deb0(param_5,2);
      uVar14 = 2;
      goto LAB_0801c20e;
    }
  }
LAB_0801c22e:
  if ((param_2 == (short *)0x0) || (*param_2 != 5)) {
    bVar1 = *(byte *)(*DAT_0801c2f4 + 0x12e);
  }
  else {
    bVar1 = *(byte *)(param_2 + 3);
  }
  local_50 = local_50 + sVar7 + (ushort)bVar1;
LAB_0801c264:
  param_4[1] = local_50 + param_4[1];
  param_4[0x12] = param_3[10] + param_4[0x12];
  param_4[0x13] = param_3[0xb] + param_4[0x13];
  param_4[0x14] = param_3[0xc] + param_4[0x14];
  param_4[0x15] = param_3[0xd] + param_4[0x15];
  param_4[0x16] = param_3[0xe] + param_4[0x16];
  param_4[0x17] = param_3[0xf] + param_4[0x17];
  if (param_3[3] < 1) {
    param_3[3] = 1;
  }
  if (param_3[2] < 1) {
    param_3[2] = 0;
  }
  param_4[5] = param_3[3] * 3 + param_4[5];
  param_4[4] = param_3[2] * 0x14 + param_4[4];
  uVar11 = FUN_0801dc54();
  if ((uVar11 & 0xff) < 8) {
                    /* WARNING: Could not recover jumptable at 0x0801c2f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar14 = (**(code **)((uVar11 & 0xff) * 4 + DAT_0801c2f8))();
    return uVar14;
  }
  if (iVar13 != 0) {
    sVar7 = FUN_080ba8a4((int)param_3[1],0x14);
    param_4[3] = param_4[3] - sVar7;
    bVar1 = *(byte *)(iVar13 + 0x17c) >> 1;
    if (param_4[3] < (short)(ushort)bVar1) {
      param_4[3] = (ushort)bVar1;
    }
  }
  if (*param_4 < 0) {
    *param_4 = 0;
  }
  if (param_4[1] < 0) {
    param_4[1] = 0;
  }
  if (param_4[2] < 0) {
    param_4[2] = 0;
  }
  if (((param_2 == (short *)0x0) || (*param_2 != 6)) &&
     (puVar17 = (ushort *)(*DAT_0801c538 + 0x70), (ushort)*(byte *)((int)param_4 + 0x1f) <= *puVar17
     )) {
    uVar8 = FUN_080ba93c(*puVar17);
    *puVar17 = uVar8;
  }
  if (((param_2 == (short *)0x0) || (*param_2 != 6)) &&
     (puVar17 = (ushort *)(*DAT_0801c538 + 0x5c), (ushort)*(byte *)(param_4 + 0x10) <= *puVar17)) {
    uVar8 = FUN_080ba93c(*puVar17);
    *puVar17 = uVar8;
  }
  iVar15 = FUN_0801dd8c();
  if (iVar15 != 0) {
    param_3[4] = *(short *)((uint)*(ushort *)(*DAT_0801c538 + 0x10) * 0x20 + DAT_0801c53c + 8);
  }
  if (200 < param_4[0x12]) {
    param_4[0x12] = 200;
  }
  if (200 < param_4[0x13]) {
    param_4[0x13] = 200;
  }
  if (200 < param_4[0x14]) {
    param_4[0x14] = 200;
  }
  if (200 < param_4[0x15]) {
    param_4[0x15] = 200;
  }
  if (200 < param_4[0x16]) {
    param_4[0x16] = 200;
  }
  if (200 < param_4[0x17]) {
    param_4[0x17] = 200;
  }
  if (param_4[0x12] < 0) {
    param_4[0x12] = 0;
  }
  if (param_4[0x13] < 0) {
    param_4[0x13] = 0;
  }
  if (param_4[0x14] < 0) {
    param_4[0x14] = 0;
  }
  if (param_4[0x15] < 0) {
    param_4[0x15] = 0;
  }
  if (param_4[0x16] < 0) {
    param_4[0x16] = 0;
  }
  if (param_4[0x17] < 0) {
    param_4[0x17] = 0;
  }
  if (*param_3 < 0) {
    *param_3 = 0;
  }
  if (param_3[1] < 0) {
    param_3[1] = 0;
  }
  return unaff_lr;
}

