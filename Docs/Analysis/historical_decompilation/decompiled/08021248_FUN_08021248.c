
undefined4 FUN_08021248(uint param_1,uint param_2)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  ushort *puVar4;
  short sVar5;
  uint uVar6;
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
  FUN_08065784(auStack_64,DAT_080212b4,1,0xffffffff,0);
  uStack_48 = 7;
  uStack_47 = 8;
  FUN_08000af0(0x17,uStack_58,2);
  uStack_30 = 0;
  uStack_2e = 0;
  sVar2 = 0;
  if (param_1 < 4) {
    puVar4 = *(ushort **)(param_1 * 0x154 + DAT_080212b8 + 0x150);
    uStack_24 = (uint)(*puVar4 >> 4);
    uVar6 = puVar4[1] & 0xfff;
  }
  else {
    iVar3 = param_1 * DAT_080212e8 + *DAT_080212e4 + DAT_080212ec;
    uStack_24 = *(int *)(iVar3 + 0x14) >> 8;
    uVar6 = *(int *)(iVar3 + 0x18) >> 8;
  }
  sVar5 = (short)uStack_24;
  while ((iVar3 = FUN_0800c4c8(), iVar3 == 0 && (sVar2 == 0))) {
    sVar2 = FUN_0806599c(auStack_64,0x22,&uStack_30,&uStack_2e,0);
    iVar3 = FUN_0800c5e8();
    if ((iVar3 == 0) &&
       ((iVar3 = FUN_0800c6dc(), iVar3 == 0 && (iVar3 = FUN_0800c61c(), iVar3 == 0)))) {
      FUN_0800b570((int)sVar5,(int)(short)uVar6,&sStack_2c,&sStack_2a,0x10,0);
      uVar1 = FUN_0800b5ac(uStack_24,uVar6,0);
      FUN_08007378((int)sStack_2c,sStack_2a + 1,0x22,uStack_30,uVar1,&uStack_48,uStack_5c,
                   auStack_64[0]);
    }
    FUN_080003f0();
  }
  *DAT_0802139c = *DAT_0802139c & ~(1 << (uStack_28 & 0xff));
  return unaff_lr;
}

