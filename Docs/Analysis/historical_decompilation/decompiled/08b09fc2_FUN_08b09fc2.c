
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b09fc2(void)

{
  undefined1 *unaff_r4;
  undefined1 unaff_r5;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (!in_ZR) {
    unaff_r5 = 0;
  }
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG) {
    *unaff_r4 = unaff_r5;
    unaff_r4[-0x544] = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

