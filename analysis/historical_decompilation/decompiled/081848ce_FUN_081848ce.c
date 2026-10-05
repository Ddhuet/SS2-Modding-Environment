
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_081848ce(void)

{
  int unaff_r9;
  bool in_CY;
  
  if (!in_CY) {
    return *(undefined8 *)(unaff_r9 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

