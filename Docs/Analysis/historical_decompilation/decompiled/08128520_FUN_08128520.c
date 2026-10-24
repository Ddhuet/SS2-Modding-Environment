
/* WARNING: Control flow encountered bad instruction data */

void FUN_08128520(void)

{
  int unaff_r4;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr1;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if ((bool)in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,unaff_r4 + 0x1fc);
  }
  if (!in_OV) {
    software_interrupt(0x7b7f5f);
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    in_OV = false;
    in_NG = true;
    in_ZR = false;
  }
  if ((bool)in_NG) {
    coprocessor_function(0xf,7,3,in_cr7,in_cr15,in_cr1);
  }
  if (!in_OV) {
    software_interrupt(0x737f48);
    software_interrupt(0x7f7877);
  }
  if (!in_ZR && (bool)in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

