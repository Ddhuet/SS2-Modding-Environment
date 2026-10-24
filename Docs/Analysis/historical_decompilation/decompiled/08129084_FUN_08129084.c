
/* WARNING: Control flow encountered bad instruction data */

void FUN_08129084(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool in_CY;
  undefined1 in_OV;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  if (!(bool)in_OV) {
    software_interrupt(0x3fb50c);
    software_interrupt(0x74387f);
    param_3 = uRam0812906c;
  }
  if (!in_CY) {
    coprocessor_movefromRt(2,3,3,in_cr15,in_cr12);
  }
  if (!(bool)in_OV) {
    func_0x0a0c9068(param_1,param_2,param_3);
  }
  if (!(bool)in_OV) {
    software_interrupt(0x45f77f);
    software_interrupt(0x7d7f76);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

