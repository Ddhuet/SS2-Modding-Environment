
/* WARNING: Control flow encountered bad instruction data */

void FUN_0884f422(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined1 *unaff_r9;
  undefined1 *unaff_r10;
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr10;
  
  if (in_CY && !in_ZR) {
    *unaff_r9 = (char)unaff_r11;
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY || in_ZR) {
    *(undefined4 *)(in_r12 + 4) = param_2;
    *(undefined4 *)(in_r12 + 8) = param_3;
    *(undefined4 *)(in_r12 + 0xc) = param_4;
    *(undefined4 *)(in_r12 + 0x10) = unaff_r5;
    *(undefined4 *)(in_r12 + 0x14) = unaff_r6;
    *(undefined4 *)(in_r12 + 0x18) = unaff_r11;
    *(undefined4 *)(in_r12 + 0x1c) = 0x884f432;
  }
  else {
    coprocessor_storelong(8,in_cr10,in_r12);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(5,in_cr7,unaff_r8);
  }
  if (in_CY && !in_ZR) {
    *unaff_r10 = (char)unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

