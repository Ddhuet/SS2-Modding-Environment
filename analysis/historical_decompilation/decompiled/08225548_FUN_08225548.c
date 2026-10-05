
/* WARNING: Control flow encountered bad instruction data */

void FUN_08225548(void)

{
  undefined1 *unaff_r5;
  undefined1 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    if (in_NG != in_OV) {
      coprocessor_load(0xc,in_cr11,&stack0x000002ec);
    }
    if (!in_ZR && in_NG == in_OV) {
      *unaff_r5 = in_r12;
      func_0x074d7c84();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

