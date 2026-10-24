
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f44ca(void)

{
  uint uVar1;
  int extraout_r2;
  int extraout_r2_00;
  int iVar2;
  int extraout_r3;
  int unaff_r4;
  int *unaff_r5;
  int unaff_r6;
  int *unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined1 in_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined8 uVar3;
  
  if (in_NG != in_OV) {
    unaff_r8 = unaff_r8 + 0x2cc;
    coprocessor_load(5,in_cr11,unaff_r8);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uRam081f44d6 = in_r12;
  }
  UnsignedSaturate(unaff_r9 >> 0x1b,1);
  UnsignedDoesSaturate(unaff_r9 >> 0x1b,1);
  uVar3 = func_0x07f7088a();
  uVar1 = (uint)uVar3;
  if ((bool)in_ZR) {
    *unaff_r5 = unaff_r8;
    unaff_r5[-1] = (int)unaff_r7;
    unaff_r5[-2] = unaff_r6;
    unaff_r5[-3] = (int)unaff_r5;
    unaff_r5[-4] = unaff_r4;
    unaff_r5[-5] = extraout_r3;
    unaff_r5[-6] = extraout_r2;
    unaff_r5[-7] = (int)((ulonglong)uVar3 >> 0x20);
  }
  else {
    uVar1 = *(uint *)(extraout_r2 + -0xf0b);
    software_interrupt(0x1d1a17);
  }
  iVar2 = extraout_r2;
  if ((bool)in_CY) {
    *(uint *)(unaff_r4 - (uVar1 >> 2)) = uVar1;
    uVar1 = func_0x08cff19a();
    iVar2 = extraout_r2_00;
  }
  if ((bool)in_CY) {
    *unaff_r7 = iVar2;
    uVar1 = func_0x08c7e59a();
  }
  if ((bool)in_CY) {
    uVar1 = func_0x08c7f1ae();
  }
  if (!(bool)in_CY) {
    coprocessor_load(8,in_cr3,unaff_r10 + -0xd4);
    coprocessor_load(1,in_cr4,0x81f4516);
  }
  if ((bool)in_ZR) {
    coprocessor_load(5,in_cr1,uVar1 - 0x6c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

