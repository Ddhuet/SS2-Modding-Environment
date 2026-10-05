
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_081f2428(void)

{
  undefined4 *unaff_r4;
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_load(7,in_cr11,unaff_r10 + 0x2d8);
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *unaff_r4;
}

