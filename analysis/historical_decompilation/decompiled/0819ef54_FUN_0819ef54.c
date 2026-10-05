
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0819ef54(void)

{
  int in_r3;
  int unaff_r8;
  bool in_NG;
  bool in_CY;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr11;
  
  if (in_NG != (bool)in_OV) {
    coprocessor_store(5,in_cr11,&stack0x00000000);
  }
  if (!in_CY) {
    return *(undefined8 *)(unaff_r8 + -0x2c);
  }
  if (!in_NG) {
    coprocessor_loadlong(3,in_cr7,in_r3 + -0x174);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

