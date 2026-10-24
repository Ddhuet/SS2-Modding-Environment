
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_082e43f8(void)

{
  int unaff_r9;
  bool in_ZR;
  
  if (in_ZR) {
    return *(undefined8 *)(unaff_r9 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

