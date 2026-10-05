
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08ef6e36(void)

{
  int unaff_r9;
  bool in_OV;
  
  if (!in_OV) {
    return *(undefined8 *)(unaff_r9 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

