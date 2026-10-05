
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_082256c6(int param_1,char param_2,undefined4 param_3,int param_4)

{
  undefined1 *unaff_r4;
  int unaff_r5;
  undefined8 *unaff_r6;
  undefined4 unaff_r11;
  undefined1 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    unaff_r11 = coprocessor_movefromRt(0xc,5,5,in_cr13,in_cr11);
  }
  if (in_ZR || in_NG != in_OV) {
    in_OV = SBORROW4(param_1,0x334) != SBORROW4(param_1 + -0x334,(uint)!in_CY);
    in_NG = (int)(param_1 - (!in_CY + 0x334)) < 0;
    in_ZR = param_1 == !in_CY + 0x334;
  }
  else {
    *(char *)(unaff_r5 + (param_4 >> 9)) = param_2 - (!in_CY + -0x41);
    coprocessor_storelong(9,in_cr12,unaff_r11);
  }
  if (!in_ZR && in_NG == in_OV) {
    if (in_ZR || in_NG != in_OV) {
      software_interrupt(0xdddbda);
    }
    *unaff_r4 = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *unaff_r6;
}

