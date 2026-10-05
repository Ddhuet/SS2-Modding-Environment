
/* WARNING: Control flow encountered bad instruction data */

void FUN_0862b9fc(void)

{
  undefined2 *unaff_r9;
  undefined2 unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *unaff_r9 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

