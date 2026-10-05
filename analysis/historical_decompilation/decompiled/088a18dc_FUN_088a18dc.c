
/* WARNING: Control flow encountered bad instruction data */

void FUN_088a18dc(void)

{
  undefined4 in_r3;
  undefined4 *unaff_r7;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (!in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY && !in_ZR) {
    if (in_NG) {
      *unaff_r7 = in_r3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

