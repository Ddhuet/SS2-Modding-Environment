
undefined4 FUN_08020fb4(uint param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_lr;
  undefined4 auStack_64 [2];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  short sStack_2c;
  short sStack_2a;
  uint uStack_28;
  uint uStack_24;
  
  uStack_28 = param_2;
  FUN_08065784(auStack_64,DAT_08021008,1,0xffffffff,0);
  FUN_08000af0(0x17,uStack_58,2);
  uStack_48 = 7;
  uStack_47 = 8;
  uStack_24 = param_1 >> 0x10;
  param_1 = param_1 & DAT_0802100c;
  uStack_30 = 0;
  uStack_2e = 0;
  sVar3 = 0;
  while ((iVar4 = FUN_0800c4c8(), uVar1 = uStack_28, iVar4 == 0 && (sVar3 == 0))) {
    sVar3 = FUN_0806599c(auStack_64,uStack_28 & 0xffff,&uStack_30,&uStack_2e,0);
    iVar4 = FUN_0800c5e8();
    if ((iVar4 == 0) &&
       ((iVar4 = FUN_0800c6dc(), iVar4 == 0 && (iVar4 = FUN_0800c61c(), iVar4 == 0)))) {
      if (param_1 < 4) {
        puVar5 = *(ushort **)(param_1 * 0x154 + DAT_08021070 + 0x150);
        uVar7 = (uint)(*puVar5 >> 4);
        uVar6 = puVar5[1] & 0xfff;
      }
      else {
        iVar4 = DAT_08021114 * param_1 + *DAT_08021110 + DAT_08021118;
        uVar7 = *(int *)(iVar4 + 0x14) >> 8;
        uVar6 = *(int *)(iVar4 + 0x18) >> 8;
      }
      FUN_0800b570((int)(short)uVar7,(int)(short)uVar6,&sStack_2c,&sStack_2a,0x10,0);
      uVar2 = FUN_0800b5ac(uVar7,uVar6,0);
      FUN_08007378((int)sStack_2c,sStack_2a + 1,uVar1 & 0xffff,uStack_30,uVar2,&uStack_48,uStack_5c,
                   auStack_64[0]);
    }
    FUN_080003f0();
  }
  *DAT_0802111c = *DAT_0802111c & ~(1 << (uStack_24 & 0xff));
  return unaff_lr;
}

