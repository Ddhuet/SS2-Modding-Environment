
/* WARNING: Control flow encountered bad instruction data */

void FUN_087acb9c(void)

{
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr10;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_movefromRt(5,5,0,in_cr10,in_cr1);
    software_interrupt(0xdccc91);
  }
  software_interrupt(0xefdda2);
  coprocessor_moveto(0xe,7,6,unaff_lr,in_cr14,in_cr13);
  coprocessor_movefromRt(0xe,6,6,in_cr14,in_cr13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

