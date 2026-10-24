
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_082238ec(void)

{
  int unaff_r8;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined8 *)(unaff_r8 + 4);
}

