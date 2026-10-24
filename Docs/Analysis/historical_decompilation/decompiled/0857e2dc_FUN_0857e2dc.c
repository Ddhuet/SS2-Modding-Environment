
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0857e2dc(undefined4 param_1)

{
  undefined4 *unaff_r5;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    return *unaff_r5;
  }
  if (in_NG == in_OV) {
    if (in_NG != in_OV) {
      coprocessor_load(0xd,in_cr11,&stack0x000002f4);
      coprocessor_load(7,in_cr11,&stack0x000005e8);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1;
}

