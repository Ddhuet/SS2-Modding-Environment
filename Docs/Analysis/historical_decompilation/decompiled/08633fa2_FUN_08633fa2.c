
/* WARNING: Control flow encountered bad instruction data */

void FUN_08633fa2(uint param_1)

{
  int unaff_r4;
  int unaff_r5;
  bool in_CY;
  undefined1 in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  
  if (in_CY) {
    software_interrupt(0x906130);
    in_OV = SBORROW4(unaff_r5,unaff_r4 >> (param_1 & 0xff));
  }
  if (!(bool)in_OV) {
    coprocessor_movefromRt(0xf,5,5,in_cr6,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

