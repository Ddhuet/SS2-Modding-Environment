
/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a688(undefined4 *param_1)

{
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr8;
  
  if (in_ZR) {
    *param_1 = unaff_r11;
  }
  if (!in_NG) {
    coprocessor_function(1,6,0,in_cr2,in_cr8,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_store(0xc,in_cr0,0x801a684);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

