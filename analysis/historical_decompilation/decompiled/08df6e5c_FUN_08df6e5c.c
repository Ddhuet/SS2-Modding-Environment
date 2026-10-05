
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08df6e64) */

void FUN_08df6e5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int unaff_r5;
  undefined4 unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr7;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(in_r12 + -0x50d) = unaff_r11;
  }
  if (in_ZR) {
    if (!in_OV) {
      software_interrupt(0xff2960);
      coprocessor_store(0xc,in_cr7,param_1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG) {
    *(undefined4 *)(param_4 + -0x504) = unaff_lr;
  }
  else {
    *(undefined4 *)(unaff_r5 + -0x506) = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

