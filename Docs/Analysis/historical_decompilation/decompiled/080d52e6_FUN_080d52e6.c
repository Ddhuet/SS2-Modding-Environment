
/* WARNING: Control flow encountered bad instruction data */

void FUN_080d52e6(void)

{
  undefined4 unaff_r6;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    coprocessor_movefromRt(5,5,5,in_cr0,in_cr12);
  }
  else {
    coprocessor_load(2,in_cr11,unaff_r6);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_function(5,0xe,7,in_cr14,in_cr11,in_cr0);
    software_interrupt(0xededee);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

