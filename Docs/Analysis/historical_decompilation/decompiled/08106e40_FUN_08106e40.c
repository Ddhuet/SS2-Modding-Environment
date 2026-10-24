
/* WARNING: Control flow encountered bad instruction data */

void FUN_08106e40(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr8;
  
  if (in_NG == in_OV) {
    *unaff_r11 = param_1;
    unaff_r11[1] = param_2;
    unaff_r11[2] = unaff_r6;
    unaff_r11[3] = unaff_r7;
    unaff_r11[4] = unaff_r8;
    unaff_r11[5] = unaff_r10;
    unaff_r11[6] = in_r12;
    unaff_r11[7] = register0x00000054;
    unaff_r11[8] = 0x8106e48;
    unaff_r11 = unaff_r11 + 9;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *(char *)(param_3 + 0x3aa) = (char)unaff_r11;
  }
  if (!in_CY) {
    in_ZR = ((uint)&stack0x00000000 & 0x3b000000) == 0;
    in_NG = '\0';
  }
  if ((bool)in_ZR) {
    software_interrupt(0x21313f);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x07a02e54();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_movefromRt(5,6,6,in_cr8,in_cr6);
  }
  func_0x07e425f8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

