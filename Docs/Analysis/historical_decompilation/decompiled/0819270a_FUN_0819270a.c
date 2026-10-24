
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819270a(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr8;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY && !in_ZR) {
    *param_4 = param_1;
    param_4[1] = param_2;
    param_4[2] = unaff_r7;
    param_4[3] = param_3 | 0x30000008;
    param_4[4] = unaff_r9;
    param_4[5] = 0x8192722;
    coprocessor_store(8,in_cr8,unaff_r11);
    software_interrupt(0x91908c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

