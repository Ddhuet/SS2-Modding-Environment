
undefined4 FUN_080215cc(uint param_1,uint param_2)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  undefined4 auStack_68 [2];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined2 uStack_34;
  undefined2 uStack_32;
  short sStack_30;
  short sStack_2e;
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  
  uStack_2c = param_2;
  FUN_08065784(auStack_68,DAT_08021620,1,0xffffffff,0);
  FUN_08000af0(0x17,uStack_5c,2);
  uStack_4c = 7;
  uStack_4b = 8;
  iStack_28 = (DAT_08021624 & param_1) << 8;
  iStack_24 = ((int)param_1 >> 0x10) << 8;
  uStack_34 = 0;
  uStack_32 = 0;
  sVar2 = 0;
  while ((iVar4 = FUN_0800c4c8(), iVar4 == 0 && (sVar2 == 0))) {
    iVar4 = FUN_0800c5e8();
    if ((iVar4 == 0) &&
       ((iVar4 = FUN_0800c6dc(), iVar4 == 0 &&
        (iVar3 = FUN_0800c61c(), iVar4 = iStack_28, iVar3 == 0)))) {
      iVar3 = iStack_24 >> 8;
      uVar1 = FUN_0800b5ac(iStack_28 >> 8,iVar3,0);
      sVar2 = FUN_0806599c(auStack_68,1,&uStack_34,&uStack_32,0);
      FUN_0800b570((int)(short)((uint)iVar4 >> 8),iVar3,&sStack_30,&sStack_2e,0x10,0);
      FUN_08007378((int)sStack_30,sStack_2e + 1,1,uStack_34,uVar1,&uStack_4c,uStack_60,auStack_68[0]
                  );
    }
    FUN_080003f0();
  }
  *DAT_080216e4 = *DAT_080216e4 & ~(1 << (uStack_2c & 0xff));
  return unaff_lr;
}

