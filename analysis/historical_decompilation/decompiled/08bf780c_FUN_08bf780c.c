
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bf780c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar1;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr12;
  
  iVar1 = unaff_r10;
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0xfcb533);
    software_interrupt(0xfc2111);
    software_interrupt(0xfc1111);
    software_interrupt(0xfc1111);
    software_interrupt(0xfc1111);
    software_interrupt(0xfc3222);
    coprocessor_storelong(0xd,in_cr12,in_r12);
    coprocessor_storelong(0xd,in_cr12,in_r12);
    coprocessor_storelong(0xd,in_cr12,unaff_r11);
    iVar1 = unaff_r10 + 0x370;
    coprocessor_load(0xd,in_cr12,unaff_r10);
  }
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_r9 + 4) = param_3;
    *(undefined4 *)(unaff_r9 + 8) = param_4;
    *(undefined4 *)(unaff_r9 + 0xc) = unaff_r4;
    *(undefined4 *)(unaff_r9 + 0x10) = unaff_r6;
    *(undefined4 *)(unaff_r9 + 0x14) = unaff_r7;
    *(undefined4 *)(unaff_r9 + 0x18) = unaff_r8;
    *(int *)(unaff_r9 + 0x1c) = iVar1;
    *(undefined4 *)(unaff_r9 + 0x20) = unaff_r11;
    *(undefined4 *)(unaff_r9 + 0x24) = unaff_lr;
    *(undefined4 *)(unaff_r9 + 0x28) = 0x8bf783c;
    unaff_r9 = unaff_r9 + 0x28;
  }
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_r9 + 4) = param_3;
  *(undefined4 *)(unaff_r9 + 8) = param_4;
  *(undefined4 *)(unaff_r9 + 0xc) = unaff_r4;
  *(undefined4 *)(unaff_r9 + 0x10) = unaff_r6;
  *(undefined4 *)(unaff_r9 + 0x14) = unaff_r7;
  *(undefined4 *)(unaff_r9 + 0x18) = unaff_r8;
  *(int *)(unaff_r9 + 0x1c) = iVar1;
  *(undefined4 *)(unaff_r9 + 0x20) = unaff_r11;
  *(undefined4 *)(unaff_r9 + 0x24) = unaff_lr;
  *(undefined4 *)(unaff_r9 + 0x28) = 0x8bf7840;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

