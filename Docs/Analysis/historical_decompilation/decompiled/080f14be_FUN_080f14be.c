
/* WARNING: Control flow encountered bad instruction data */

void FUN_080f14be(void)

{
  undefined4 in_r3;
  undefined1 *unaff_r5;
  undefined1 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_CY && !in_ZR) {
    coprocessor_load(5,in_cr11,in_r3);
  }
  if (in_NG == in_OV) {
    *unaff_r5 = in_r12;
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(7,in_cr11,&stack0x00000274);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

