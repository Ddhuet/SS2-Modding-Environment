
undefined8 FUN_0805ccc8(int param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_lr;
  undefined4 local_20;
  
  uVar9 = param_1 + 0x204;
  local_20 = 0;
  FUN_080b9a88(&local_20,param_2,DAT_0805cd34);
  uVar8 = 0;
  uVar3 = FUN_080008c8();
  puVar7 = (uint *)(param_1 + 0x3a8);
  do {
    uVar2 = *(ushort *)(uVar9 + 0x1a0);
    if (uVar2 != 0) {
      if ((uVar8 <= (uVar3 & 0xffff)) && ((uVar3 & 0xffff) <= *puVar7)) {
        *param_2 = uVar2;
        param_2[1] = *(ushort *)(uVar9 + 0x1a2);
        if (uVar2 == 9) {
          param_2[2] = (ushort)*(undefined4 *)(param_1 + 0x388);
        }
        break;
      }
      uVar8 = *puVar7 + 1 & 0xffff;
    }
    puVar7 = puVar7 + 2;
    uVar9 = uVar9 + 8;
  } while (uVar9 <= param_1 + 0x214U);
  if (*param_2 == 0) {
    uVar3 = FUN_080008c8();
    puVar6 = (ushort *)(param_1 + 0x58);
    if (3 < *puVar6) {
      *puVar6 = 0;
    }
    uVar8 = (uint)*(byte *)((uint)*puVar6 * 0x154 + DAT_0805cdb0 + 0x7c);
    uVar9 = FUN_08002164();
    if (uVar9 == 2) {
      uVar8 = uVar8 + 0x15;
    }
    else if (uVar9 < 3) {
      if (uVar9 == 1) {
        uVar8 = uVar8 + 0x10;
      }
    }
    else if (uVar9 == 3) {
      uVar8 = uVar8 + 0x1a;
    }
    else if (uVar9 == 4) {
      uVar8 = uVar8 + 0x20;
    }
    if (uVar8 <= (uVar3 & 0xff)) {
      iVar5 = 0;
      goto LAB_0805ce50;
    }
    iVar4 = FUN_0800c780();
    if (iVar4 == 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x78);
LAB_0805ce04:
      iVar4 = FUN_0805cba4(param_2,uVar3,0);
      iVar5 = iVar4;
    }
    else {
      if (*(ushort *)(param_1 + 0x78) != 0) {
        uVar3 = *(ushort *)(param_1 + 0x78) + 0x32;
        goto LAB_0805ce04;
      }
      iVar5 = 0;
    }
    uVar2 = *param_2;
    if (uVar2 == 9) {
      param_2[2] = (ushort)*(undefined4 *)(param_1 + 0x388);
      iVar5 = iVar4;
      goto LAB_0805ce50;
    }
    if (uVar2 != 10) {
      if (10 < uVar2) {
        iVar5 = 0;
        *param_2 = 0;
      }
      goto LAB_0805ce50;
    }
    bVar1 = *(byte *)(DAT_0805ce3c + param_1);
    iVar5 = iVar4;
    if ((bVar1 & 1) != 0) goto LAB_0805ce50;
  }
  else if ((*param_2 != 10) || (bVar1 = *(byte *)(DAT_0805cd68 + param_1), (bVar1 & 1) != 0)) {
    iVar5 = 1;
    goto LAB_0805ce50;
  }
  *param_2 = bVar1 & 1;
  param_2[1] = bVar1 & 1;
  iVar5 = 0;
LAB_0805ce50:
  return CONCAT44(unaff_lr,iVar5);
}

