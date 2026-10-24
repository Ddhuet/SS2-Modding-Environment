
/* WARNING: Control flow encountered bad instruction data */

void FUN_081987ea(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined2 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR) {
    *(int *)in_r12 = in_r12;
    *(undefined4 *)(in_r12 + -4) = unaff_r11;
    *(undefined4 *)(in_r12 + -8) = unaff_r10;
    *(undefined4 *)(in_r12 + -0xc) = unaff_r7;
    *(undefined4 *)(in_r12 + -0x10) = unaff_r6;
    *(int *)(in_r12 + -0x14) = unaff_r5;
    *(undefined4 *)(in_r12 + -0x18) = param_4;
    *(undefined4 *)(in_r12 + -0x1c) = param_3;
    *(undefined4 *)(in_r12 + -0x20) = param_2;
    *(undefined4 *)(in_r12 + -0x24) = param_1;
    *(undefined2 *)(unaff_r5 + 0xc) = unaff_r9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

