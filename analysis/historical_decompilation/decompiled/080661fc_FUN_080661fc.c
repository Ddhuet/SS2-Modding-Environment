
undefined4 FUN_080661fc(int param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  short sStack_18;
  short sStack_16;
  
  iVar4 = param_1 * 0x154 + DAT_0806627c;
  param_2 = param_2 + -1;
  if (param_2 != -1) {
    iVar3 = iVar4 + 2;
    do {
      iVar1 = FUN_0800c5e8();
      if (iVar1 == 0) {
        puVar2 = *(ushort **)(iVar4 + 0x150);
        FUN_0800b570(*puVar2 >> 4,puVar2[1] & 0xfff,&sStack_18,&sStack_16,0x30,1);
        iVar1 = FUN_0801a1f4(iVar3);
        FUN_0801a33c(iVar3,(int)sStack_18 + iVar1 * -4,sStack_16 + -0x30);
      }
      FUN_080003f0();
      param_2 = param_2 + -1;
    } while (param_2 != -1);
  }
  return unaff_lr;
}

