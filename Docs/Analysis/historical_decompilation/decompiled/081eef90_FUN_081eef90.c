
/* WARNING: Control flow encountered bad instruction data */

void FUN_081eef90(void)

{
  int unaff_r8;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    func_0x0701c660();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x0739fe98();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(4,in_cr13,unaff_r8 + 0x33c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

