
/* WARNING: Control flow encountered bad instruction data */

void FUN_08309ce4(void)

{
  undefined4 *unaff_r6;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr3;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_ZR || (bool)in_NG != in_OV) {
    coprocessor_function(5,0xc,5,in_cr11,in_cr10,in_cr3);
  }
  if (!in_ZR) {
    *unaff_r6 = unaff_pc;
  }
  if (!in_CY) {
    if (!in_OV) {
      software_interrupt(0x7f7b76);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

