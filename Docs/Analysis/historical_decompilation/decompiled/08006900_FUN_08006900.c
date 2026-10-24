
/* WARNING: Control flow encountered bad instruction data */

void FUN_08006900(void)

{
  undefined4 *unaff_r9;
  undefined4 unaff_r11;
  bool in_ZR;
  
  if (in_ZR) {
    *unaff_r9 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

