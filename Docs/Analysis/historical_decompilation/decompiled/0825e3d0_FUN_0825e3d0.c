
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825e3d0(void)

{
  undefined4 in_r3;
  int unaff_r4;
  undefined4 unaff_r8;
  int unaff_r10;
  int unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr11;
  
  if (in_NG != (bool)in_OV) {
    coprocessor_load(5,in_cr11,unaff_r8);
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    software_interrupt(0xcac5c0);
  }
  UnsignedSaturate(unaff_r4 >> 0x15,0);
  UnsignedDoesSaturate(unaff_r4 >> 0x15,0);
                    /* WARNING: Could not recover jumptable at 0x0825e3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_ZR) {
    (*(code *)(-0x4ffffffd - (unaff_r10 + (uint)!in_CY)))();
    return;
  }
  if (in_CY) {
    in_r3 = *(undefined4 *)(unaff_lr + -8);
  }
  if (in_NG) {
    coprocessor_moveto(0xc,2,1,in_r3,in_cr5,in_cr2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

