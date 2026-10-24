
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08a3ff4c(void)

{
  undefined8 *unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    return *unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

