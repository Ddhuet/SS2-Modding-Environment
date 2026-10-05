
/* WARNING: Control flow encountered bad instruction data */

void FUN_087c94c0(void)

{
  undefined4 unaff_lr;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (!in_ZR && (bool)in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    coproc_moveto_Peripheral_System(unaff_pc,7,in_cr15,7);
  }
  if ((bool)in_NG == in_OV) {
    coprocessor_storelong(0xe,in_cr14,unaff_lr);
  }
  else {
    coprocessor_storelong(0xf,in_cr15,0x87c9888);
  }
  if (in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

