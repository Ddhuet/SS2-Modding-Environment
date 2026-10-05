
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_087a287a(void)

{
  int unaff_r6;
  undefined4 unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  int in_r12;
  int iVar1;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr7;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY || in_ZR) {
    in_r12 = *(int *)(unaff_r9 + (unaff_r10 >> 0x13));
  }
  if (!in_OV) {
    return *(undefined8 *)(unaff_r9 + 4);
  }
  if (in_ZR || in_NG != true) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
    iVar1 = in_r12;
  }
  else {
    coprocessor_storelong(7,in_cr7,unaff_r8);
    coprocessor_storelong(0xc,in_cr12,unaff_r8);
    coprocessor_storelong(0xc,in_cr12,&stack0x00000000);
    coprocessor_storelong(0xc,in_cr12,&stack0x00000000);
    coprocessor_storelong(0xc,in_cr12,&stack0x00000000);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    iVar1 = in_r12 + 0x370;
    coprocessor_load(0xd,in_cr12,in_r12);
    coprocessor_storelong(0xd,in_cr13,iVar1);
    coprocessor_storelong(0xc,in_cr13,iVar1);
    coprocessor_storelong(0xc,in_cr12,iVar1);
    coprocessor_storelong(0xc,in_cr12,iVar1);
    coprocessor_storelong(0xc,in_cr13,&stack0x00000000);
  }
  *(int *)(iVar1 + (iVar1 >> 0x19)) = iVar1;
  SignedSaturate(unaff_r6 >> 0x1a,0x1d);
  SignedDoesSaturate(unaff_r6 >> 0x1a,0x1d);
  if (!in_NG) {
    uRam00000d55 = 0;
    uRam00000a66 = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

