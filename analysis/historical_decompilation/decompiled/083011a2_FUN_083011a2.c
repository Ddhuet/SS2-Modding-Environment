
/* WARNING: Control flow encountered bad instruction data */

void FUN_083011a2(void)

{
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr4;
  
  if (in_NG) {
    if (in_ZR || in_OV != '\x01') {
      coprocessor_moveto(3,0,6,unaff_lr,in_cr4,in_cr2);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

