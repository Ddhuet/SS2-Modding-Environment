
/* WARNING: Control flow encountered bad instruction data */

void FUN_088b1386(void)

{
  undefined1 *in_r3;
  bool in_OV;
  
  if (in_OV) {
    *in_r3 = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

