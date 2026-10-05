
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_082779a8(void)

{
  int unaff_r5;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    return *(undefined8 *)(unaff_r5 + 4);
  }
  if (in_NG != in_OV) {
    func_0x072278a8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

