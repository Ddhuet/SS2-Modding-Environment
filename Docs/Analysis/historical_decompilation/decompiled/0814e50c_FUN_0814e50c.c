
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0814e50c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 *unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
    unaff_r10 = (undefined4 *)((int)unaff_r10 + -0x5cb);
    *unaff_r10 = unaff_r11;
  }
  if (in_ZR) {
    return *(undefined8 *)(unaff_r10 + 1);
  }
  if (!in_CY) {
    software_interrupt(0x24c1c0);
  }
  uRam0814e520 = param_1;
  uRam0814e524 = param_2;
  uRam0814e528 = param_3;
  uRam0814e52c = param_4;
  uRam0814e530 = unaff_r5;
  uRam0814e534 = unaff_r8;
  uRam0814e538 = unaff_r9;
  uRam0814e53c = in_r12;
  puRam0814e540 = &stack0x00000000;
  uRam0814e544 = 0x814e520;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

