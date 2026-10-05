
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e466c(void)

{
  int unaff_r5;
  undefined4 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    func_0x07251d88();
  }
  if ((bool)in_ZR) {
    *(undefined4 *)(unaff_r5 + -0xfc2) = unaff_pc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

