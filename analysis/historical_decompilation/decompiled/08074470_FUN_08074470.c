
undefined4 FUN_08074470(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_lr;
  undefined4 auStack_74 [2];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  short sStack_3c;
  short sStack_3a;
  uint uStack_38;
  uint uStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  
  FUN_08065784(auStack_74,DAT_08074560,1,0xffffffff,0);
  uStack_58 = 7;
  uStack_57 = 8;
  FUN_08000af0(0x17,uStack_68,2);
  iStack_30 = *(int *)(param_1 + 8);
  uStack_38 = *(uint *)(param_1 + 0x14) >> 8;
  uStack_34 = *(uint *)(param_1 + 0x10) >> 8;
  uStack_2c = *(uint *)(param_1 + 0xc);
  uStack_40 = 0;
  sVar2 = 0;
  uStack_3e = 0;
  iStack_28 = uStack_38 << 0x10;
  iStack_24 = uStack_34 << 0x10;
  do {
    iVar3 = FUN_0800c5e8();
    if ((iVar3 == 0) && (iVar3 = FUN_0800c6dc(), iVar3 == 0)) {
      uVar4 = FUN_0800c61c();
      uVar1 = FUN_0800b5ac(uStack_38,uStack_34,uVar4);
      uVar5 = uStack_2c & 0xffff;
      sVar2 = FUN_0806599c(auStack_74,uVar5,&uStack_40,&uStack_3e,0);
      FUN_0800b570(iStack_28 >> 0x10,iStack_24 >> 0x10,&sStack_3c,&sStack_3a,0x10,0);
      if (iStack_30 == 0) {
        FUN_0806585c(auStack_74,(int)sStack_3c,(int)sStack_3a,uVar5,uStack_40);
      }
      else {
        FUN_08007378((int)sStack_3c,sStack_3a + 1,uVar5,uStack_40,uVar1,&uStack_58,uStack_6c,
                     auStack_74[0]);
      }
    }
    FUN_080003f0();
  } while (sVar2 == 0);
  *DAT_080745a4 = *DAT_080745a4 & ~(1 << (*(uint *)(param_1 + 4) & 0xff));
  return unaff_lr;
}

