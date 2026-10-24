
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x081df3b4) */
/* WARNING: Removing unreachable block (ram,0x081df3c0) */

void FUN_081df3a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r5;
  undefined1 unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  
  if (!in_ZR) {
    *(undefined1 *)(unaff_r5 + 0x595) = unaff_r11;
  }
  if (in_OV) {
    coprocessor_loadlong(0,in_cr6,param_3);
  }
  if (!in_CY) {
    if (!in_ZR && (bool)in_NG == in_OV) {
      software_interrupt(0xec071c);
    }
    if (in_OV) {
      software_interrupt(0x725f41);
    }
    if (!in_ZR && (bool)in_NG == in_OV) {
      coprocessor_storelong(7,in_cr0,in_r12 + 0x6c);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

