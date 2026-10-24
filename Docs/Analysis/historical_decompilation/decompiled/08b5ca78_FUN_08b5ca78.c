
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b5ca78(void)

{
  undefined1 in_r3;
  undefined1 extraout_r3;
  undefined1 *unaff_r5;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0720a7d4();
    in_r3 = extraout_r3;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_OV) {
      *unaff_r5 = in_r3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

