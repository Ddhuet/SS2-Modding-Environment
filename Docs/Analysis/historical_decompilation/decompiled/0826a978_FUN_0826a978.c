
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0826a978(void)

{
  int in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r9;
  int in_r12;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr15;
  
  if (in_ZR || in_NG != (bool)in_OV) {
    return *unaff_r9;
  }
  if (!in_ZR) {
    coprocessor_load(0xd,in_cr0,in_r12 + -1000);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    unaff_r4 = *(undefined4 *)(in_r3 + 4);
  }
  if (!in_NG) {
    coprocessor_storelong(0xf,in_cr1,unaff_r5);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_storelong(9,in_cr15,unaff_r4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

