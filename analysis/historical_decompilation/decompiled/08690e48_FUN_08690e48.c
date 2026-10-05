
/* WARNING: Control flow encountered bad instruction data */

void FUN_08690e48(uint param_1,int param_2)

{
  uint uVar1;
  uint unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  bool in_OV;
  undefined4 in_cr1;
  
  if (!in_OV) {
    uVar1 = param_1 >> 10 | param_1 << 0x16;
    unaff_r11 = ~uVar1;
    in_NG = -1 < (int)uVar1;
    in_ZR = unaff_r11 == 0;
  }
  if ((bool)in_ZR) {
    *(uint *)(param_2 + 0xf43) = unaff_r11;
  }
  if ((bool)in_NG != in_OV) {
    software_interrupt(0x63a107);
  }
  if ((bool)in_ZR) {
    coprocessor_movefromRt(0xd,5,5,in_cr1,in_cr1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

