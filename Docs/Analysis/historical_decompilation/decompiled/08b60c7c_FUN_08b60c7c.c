
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b60c7c(void)

{
  undefined1 in_r3;
  undefined1 extraout_r3;
  undefined1 *unaff_r5;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY || in_ZR) {
    func_0x0720e9d8();
    in_r3 = extraout_r3;
  }
  if ((bool)in_OV) {
    *unaff_r5 = in_r3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

