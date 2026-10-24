
/* WARNING: Control flow encountered bad instruction data */

void FUN_080d2eba(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_r4;
  undefined1 *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined1 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_NG == in_OV) {
    coprocessor_movefromRt(5,5,5,in_cr0,in_cr14);
  }
  else {
    software_interrupt(0xb9b4b0);
  }
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xd7d0cb);
  }
  else {
    *unaff_r5 = in_r12;
    *(undefined1 *)(unaff_r6 + (unaff_r7 >> 0xd)) = in_r12;
  }
  if (in_ZR) {
    coprocessor_loadlong(2,in_cr15,0x80d3276);
  }
  if (in_CY) {
    software_interrupt(0x2b2319);
    coprocessor_store(0xf,in_cr2,unaff_lr);
    *unaff_r4 = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

