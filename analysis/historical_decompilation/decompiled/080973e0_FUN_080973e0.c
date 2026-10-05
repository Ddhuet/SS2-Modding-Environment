
undefined8 FUN_080973e0(int param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined4 unaff_lr;
  undefined2 local_68;
  short local_48;
  short local_46;
  uint local_44;
  undefined2 *local_40;
  undefined2 *local_3c;
  int local_38;
  short *local_34;
  short *local_30;
  int local_2c;
  undefined4 *local_28;
  uint local_24;
  
  *(char *)(param_2 + 7) = (char)(param_4 & 0xffff);
  uVar3 = 0;
  local_30 = &local_46;
  do {
    iVar5 = (int)(short)uVar3;
    puVar6 = (uint *)(param_2[3] + ((param_3 & 0xffff) * 0x10 + iVar5) * 2);
    puVar8 = &local_68 + iVar5;
    *(byte *)puVar8 = (byte)*puVar8 & 0xe0 | (byte)*puVar6 & 0x1f;
    *puVar8 = (ushort)DAT_080974d8 & *puVar8 | (ushort)*puVar6 & 0x3e0;
    *(byte *)((int)&local_68 + iVar5 * 2 + 1) =
         *(byte *)((int)&local_68 + iVar5 * 2 + 1) & 0x83 | (byte)(((*puVar6 & 0x7fff) >> 10) << 2);
    uVar3 = iVar5 + 1U & 0xffff;
  } while ((int)((iVar5 + 1U) * 0x10000) >> 0x10 < 0x10);
  local_44 = 0;
  uVar3 = 0;
  iVar5 = 2;
  local_2c = (param_4 & 0xffff) + 0x10;
  local_38 = param_1 + 0x6c;
  local_28 = param_2 + 7;
  local_40 = (undefined2 *)(param_1 + 0x68);
  local_3c = (undefined2 *)(param_1 + 0x6a);
  local_34 = &local_48;
  uVar7 = 0;
  do {
    uVar3 = ((uVar3 + 1) * 0x10000 & 0xf0000) >> 0x10;
    uVar4 = local_44 + 1 & 0xff;
    if ((local_44 & 1) == 0) {
      local_44 = uVar4;
      FUN_08008b8c(0,0,0,uVar3);
    }
    else {
      local_44 = uVar4;
      FUN_08008b8c(0,0,uVar3,0);
    }
    if (iVar5 == 1) {
      uVar2 = uVar7 + 1;
      cVar1 = FUN_08097134(&local_68,2,uVar2,0x3c);
      if (cVar1 != '\0') {
        uVar2 = 0;
        iVar5 = 0;
      }
    }
    else {
      uVar2 = uVar7;
      if ((iVar5 == 2) && (uVar2 = uVar7 + 1, 0x3c < uVar7)) {
        uVar2 = 0;
        iVar5 = 1;
      }
    }
    FUN_08000af0(local_2c,&local_68,1);
    local_24 = FUN_0800b5ac(*(int *)(param_1 + 0x14) >> 8,*(int *)(param_1 + 0x18) >> 8,0);
    local_24 = local_24 & 0xff;
    FUN_0806599c(param_2,*local_40,local_3c,local_38,1);
    FUN_0800b570((*(int *)(param_1 + 0x14) << 8) >> 0x10,(*(int *)(param_1 + 0x18) << 8) >> 0x10,
                 &local_48,local_30,0,0);
    FUN_0800747c((int)local_48,(int)*local_30,*local_40,*local_3c,local_24,1,0,local_28,param_2[2],
                 *param_2);
    FUN_08000b38();
    FUN_080003f0();
    uVar7 = uVar2;
  } while (iVar5 != 0);
  FUN_08008b8c(0,0,0,0);
  return CONCAT44(unaff_lr,1);
}

