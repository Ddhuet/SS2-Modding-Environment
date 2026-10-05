
/* WARNING: Control flow encountered bad instruction data */

void FUN_08225e36(void)

{
  undefined1 unaff_r6;
  undefined1 *in_r12;
  undefined1 *extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    func_0x0704ec86();
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    if ((bool)in_ZR) {
      in_r12 = (undefined1 *)0x67fffffd;
      in_NG = false;
    }
    if ((bool)in_NG) {
      software_interrupt(0x3a2a1d);
      *in_r12 = unaff_r6;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

