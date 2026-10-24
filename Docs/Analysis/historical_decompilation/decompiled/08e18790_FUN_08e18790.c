
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e18790(void)

{
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  char in_NG;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    func_0x07c85e04();
    in_r3 = extraout_r3;
  }
  if (in_NG != in_OV) {
    coprocessor_function(5,0xb,6,in_cr12,in_cr15,in_cr4);
    software_interrupt(0xb9b59d);
    coprocessor_function(5,0xc,6,in_cr12,in_cr3,in_cr4);
    func_0x07c85e14();
    in_r3 = extraout_r3_00;
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(5,in_cr12,in_r3);
    coprocessor_load(5,in_cr11,unaff_r7);
    coprocessor_storelong(5,in_cr12,unaff_r4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

