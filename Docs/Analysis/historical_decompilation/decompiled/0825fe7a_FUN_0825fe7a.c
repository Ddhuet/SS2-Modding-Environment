
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825fe7a(void)

{
  undefined4 unaff_r8;
  int unaff_lr;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr5;
  
  if (in_OV) {
    coprocessor_movefromRt(0xf,3,3,in_cr5,in_cr5);
  }
  if (in_ZR) {
    software_interrupt(0x29455f);
  }
  if (!in_CY || in_ZR) {
    *(undefined4 *)(unaff_lr + 0x68a) = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

