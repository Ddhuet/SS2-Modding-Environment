
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bd60b8(void)

{
  int in_r3;
  int extraout_r3;
  int extraout_r3_00;
  char in_NG;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr3;
  
  if (in_NG != in_OV) {
    func_0x078c3580();
    in_r3 = extraout_r3;
  }
  if (in_NG != in_OV) {
    func_0x07aa2cc4();
    in_r3 = extraout_r3_00;
  }
  if (!(bool)in_CY) {
    coprocessor_load(0xc,in_cr3,in_r3);
    coprocessor_load(3,in_cr3,in_r3 + -0xcc);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

