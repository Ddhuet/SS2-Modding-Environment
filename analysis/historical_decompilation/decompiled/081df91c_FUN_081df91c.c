
/* WARNING: Control flow encountered bad instruction data */

void FUN_081df91c(void)

{
  int in_r3;
  int unaff_r9;
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(in_r3 + (unaff_r9 >> 0xb)) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

