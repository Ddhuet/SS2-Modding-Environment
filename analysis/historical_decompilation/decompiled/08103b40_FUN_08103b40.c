
/* WARNING: Control flow encountered bad instruction data */

void FUN_08103b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int in_r3;
  int extraout_r3;
  uint unaff_r7;
  int unaff_r8;
  undefined1 *unaff_r10;
  int unaff_r11;
  int iVar1;
  undefined1 unaff_lr;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    software_interrupt(0xb5b5b8);
  }
  if (!in_ZR && in_NG == in_OV) {
    in_OV = SCARRY4(unaff_r11,0xb2) != SCARRY4(unaff_r11 + 0xb2,(uint)in_CY);
    iVar1 = unaff_r11 + 0xb2 + (uint)in_CY;
    in_NG = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR || in_NG != in_OV) {
    param_1 = *(undefined4 *)(unaff_r8 + 0x14);
    param_2 = *(undefined4 *)(unaff_r8 + 0x18);
    param_3 = *(undefined4 *)(unaff_r8 + 0x1c);
    param_4 = *(undefined4 *)(unaff_r8 + 0x20);
    param_5 = *(undefined4 *)(unaff_r8 + 0x24);
    param_6 = *(undefined4 *)(unaff_r8 + 0x28);
    param_7 = *(undefined4 *)(unaff_r8 + 0x2c);
  }
  *unaff_r10 = unaff_lr;
  if (!in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x08103b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(unaff_r7 & in_r3 << 0x1c))();
    return;
  }
  software_interrupt(0x9f4ec);
  func_0x07ec0384(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  coprocessor_loadlong(2,in_cr1,extraout_r3 + 0x18);
  if (in_ZR) {
    coprocessor_moveto(9,0,7,unaff_pc,in_cr11,in_cr9);
  }
  else {
    coprocessor_movefromRt(0xb,0,0,in_cr5,in_cr3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

