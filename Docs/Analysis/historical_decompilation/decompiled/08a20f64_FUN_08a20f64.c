
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a20f64(void)

{
  char *in_r3;
  char *extraout_r3;
  char *extraout_r3_00;
  int unaff_r6;
  char in_NG;
  char in_OV;
  
  if (!(bool)in_OV) {
    func_0x0778e858();
    in_r3 = extraout_r3;
  }
  if (in_NG != in_OV) {
    func_0x09ff9e1c();
    in_r3 = extraout_r3_00;
  }
  if (in_NG != in_OV) {
    in_r3 = (char *)(uint)*(byte *)(unaff_r6 - ((uint)in_r3 >> 0x15));
  }
  if (!(bool)in_NG) {
    *in_r3 = (char)in_r3 - (char)((uint)in_r3 >> 0x15);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

