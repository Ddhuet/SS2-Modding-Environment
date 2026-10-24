
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c20da(int param_1,undefined4 param_2,int param_3)

{
  int unaff_r6;
  undefined4 unaff_r9;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr8;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || in_ZR) {
    *(undefined4 *)(param_1 + (param_3 >> 7)) = unaff_r9;
  }
  if (in_NG != in_OV) {
    func_0x06f62f8e();
  }
  if ((bool)in_CY) {
    coprocessor_load(2,in_cr3,unaff_r6 + -0x88);
  }
  if (!(bool)in_OV) {
    software_interrupt(0x7e6b50);
    coprocessor_movefromRt(9,3,3,in_cr8,in_cr13);
    software_interrupt(0x7f7f72);
    software_interrupt(0x7f7f7f);
    software_interrupt(0x797f7f);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

