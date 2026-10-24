
/* WARNING: Control flow encountered bad instruction data */

void FUN_0812e790(undefined1 param_1)

{
  int unaff_r5;
  int unaff_r6;
  int in_r12;
  undefined1 in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr14;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 unaff_d8;
  
  if (!in_ZR) {
    in_OV = SBORROW4(unaff_r5,0xcd00) != SBORROW4(unaff_r5 + -0xcd00,(uint)!in_CY);
    in_NG = (int)(unaff_r5 - (!in_CY + 0xcd00)) < 0;
    in_ZR = unaff_r5 == !in_CY + 0xcd00;
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_function(4,3,0,in_cr14,in_cr3,in_cr14);
  }
  if ((bool)in_NG) {
    *(undefined1 *)(unaff_r6 + 0x613) = param_1;
  }
  if (!in_ZR && in_NG == in_OV) {
    *(undefined8 *)(in_r12 + -0x340) = in_d1;
    *(undefined8 *)(in_r12 + -0x338) = in_d2;
    *(undefined8 *)(in_r12 + -0x330) = in_d3;
    *(undefined8 *)(in_r12 + -0x328) = in_d4;
    *(undefined8 *)(in_r12 + -800) = in_d5;
    *(undefined8 *)(in_r12 + -0x318) = in_d6;
    *(undefined8 *)(in_r12 + -0x310) = in_d7;
    *(undefined8 *)(in_r12 + -0x308) = unaff_d8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

