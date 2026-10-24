
undefined8 FUN_0800ac18(uint param_1,int param_2,int param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_lr;
  undefined8 uVar11;
  uint local_54 [9];
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  
  local_30 = param_2 >> 0xb;
  iVar6 = param_3 + 0x200 >> 0xb;
  if ((param_4 & 1) != 0) {
    iVar7 = *(int *)(DAT_0800ac90 + 0x6c);
    iVar2 = -1;
    do {
      iVar9 = local_30 + iVar2;
      iVar5 = -1;
      iVar2 = iVar2 + 1;
      local_24 = iVar2 * 4;
      do {
        iVar3 = iVar6 + iVar5;
        if ((((iVar9 < 1) || (iVar3 < 1)) || ((int)(uint)*DAT_0800ac94 <= iVar9)) ||
           ((int)(uint)*(ushort *)(DAT_0800ac90 + 0x76) <= iVar3)) {
          local_54[(iVar5 + 1) * 3 + iVar2] = 1;
        }
        else {
          local_54[(iVar5 + 1) * 3 + iVar2] =
               (*(uint *)(iVar7 + (iVar9 + (uint)*DAT_0800ac94 * iVar3) * 2) & 0xfff) >> 8;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
    } while (iVar2 < 2);
    goto LAB_0800adb6;
  }
  if (*(short *)(DAT_0800acec + 0x8c) == 8) {
    sVar1 = *(short *)(DAT_0800acec + 0x90);
    if (sVar1 == 0x12) {
      uVar10 = 0x5a;
    }
    else {
      if ((sVar1 != 2) && (sVar1 != 0xc)) goto LAB_0800acfc;
      uVar10 = 0x3c;
    }
  }
  else {
LAB_0800acfc:
    uVar10 = (uint)*(ushort *)(DAT_0800acec + 0x78);
  }
  iVar7 = *(int *)(DAT_0800acec + 0x68);
  iVar2 = -1;
  local_2c = param_4 & 2;
  local_28 = param_4 & 4;
  do {
    iVar9 = local_30 + iVar2;
    iVar5 = -1;
    iVar2 = iVar2 + 1;
    do {
      iVar3 = iVar6 + iVar5;
      if (((iVar9 < 1) || (iVar3 < 1)) ||
         (((int)uVar10 <= iVar9 || ((int)(uint)*DAT_0800ad50 <= iVar3)))) {
        uVar4 = 1;
LAB_0800ada8:
        local_54[(iVar5 + 1) * 3 + iVar2] = uVar4;
      }
      else {
        puVar8 = (uint *)(iVar7 + (iVar9 + iVar3 * uVar10) * 2);
        uVar4 = (*puVar8 & 0xfff) >> 8;
        local_54[(iVar5 + 1) * 3 + iVar2] = uVar4;
        if ((local_2c != 0) && ((char)*puVar8 == '\x01')) {
          local_54[(iVar5 + 1) * 3 + iVar2] = uVar4 | 1;
        }
        if ((local_28 != 0) && ((*puVar8 & 0x1000) != 0)) {
          uVar4 = 0;
          goto LAB_0800ada8;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
  } while (iVar2 < 2);
LAB_0800adb6:
  if (local_54[4] < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x0800adc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (**(code **)(local_54[4] * 4 + DAT_0800adc8))();
    return uVar11;
  }
  return CONCAT44(unaff_lr,(param_1 & 0xff) + 1);
}

