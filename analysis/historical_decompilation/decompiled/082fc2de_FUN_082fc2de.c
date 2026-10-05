
/* WARNING: Control flow encountered bad instruction data */

void FUN_082fc2de(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr13;
  
  puVar1 = param_1;
  if (in_ZR) {
    puVar1 = param_1 + 0x5f9;
    *param_1 = unaff_r11;
  }
  coprocessor_moveto(5,7,0,puVar1,in_cr13,in_cr4);
  if (in_NG) {
    coprocessor_storelong(0xf,in_cr2,unaff_lr);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

