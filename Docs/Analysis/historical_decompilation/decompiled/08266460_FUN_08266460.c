
/* WARNING: Control flow encountered bad instruction data */

void FUN_08266460(int param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  int unaff_r11;
  uint in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar1;
  undefined4 in_cr8;
  
  bVar1 = in_CY;
  if (!in_ZR && in_NG == in_OV) {
    bVar1 = 0xd3ffffff < in_r12 || CARRY4(in_r12 + 0x2c000000,(uint)in_CY);
    in_OV = SCARRY4(in_r12,0x2c000000) != SCARRY4(in_r12 + 0x2c000000,(uint)in_CY);
    unaff_r11 = in_r12 + 0x2c000000 + (uint)in_CY;
    in_NG = unaff_r11 < 0;
  }
  if (!(bool)in_NG) {
    coprocessor_movefromRt(9,0,in_cr8);
    coprocessor_movefromRt2(9,0,in_cr8);
  }
  if (!(bool)bVar1) {
    *(undefined4 *)(param_1 + -4) = unaff_lr;
    *(int *)(param_1 + -8) = unaff_r11;
    *(undefined4 *)(param_1 + -0xc) = unaff_r6;
    *(undefined4 *)(param_1 + -0x10) = unaff_r4;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

