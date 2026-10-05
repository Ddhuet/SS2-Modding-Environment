
/* WARNING: Control flow encountered bad instruction data */

void FUN_0883836c(void)

{
  char *in_r3;
  char *extraout_r3;
  undefined1 *unaff_r4;
  undefined1 unaff_r5;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    func_0x072e58c4();
    in_r3 = extraout_r3;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG) {
    *unaff_r4 = (char)in_r3;
  }
  else {
    *unaff_r4 = unaff_r5;
    *in_r3 = (char)unaff_r4 + -0x54;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

