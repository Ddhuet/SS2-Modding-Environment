
/* WARNING: Control flow encountered bad instruction data */

void FUN_08246614(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  int extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr10;
  undefined8 uVar1;
  
  coprocessor_moveto(5,6,5,unaff_r11,in_cr10,in_cr0);
  uVar1 = func_0x07cffdfc();
  if (in_NG != in_OV) {
    *(undefined8 *)(extraout_r12 + 4) = uVar1;
    *(undefined4 *)(extraout_r12 + 0xc) = unaff_r4;
    *(undefined4 *)(extraout_r12 + 0x10) = unaff_r6;
    *(undefined4 *)(extraout_r12 + 0x14) = unaff_r7;
    *(undefined4 *)(extraout_r12 + 0x18) = unaff_r8;
    *(undefined4 *)(extraout_r12 + 0x1c) = unaff_r9;
    *(undefined4 *)(extraout_r12 + 0x20) = unaff_r11;
    *(int *)(extraout_r12 + 0x24) = extraout_r12;
    *(undefined4 *)(extraout_r12 + 0x28) = 0x824661c;
    *(undefined4 *)(extraout_r12 + 0x2c) = 0x8246624;
  }
  func_0x07e79d14();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x078bd250();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

