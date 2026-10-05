
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0857e39e(void)

{
  undefined4 *unaff_r8;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(5,in_cr11,&stack0x000002d4);
  return *unaff_r8;
}

