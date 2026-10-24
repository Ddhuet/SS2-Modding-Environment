
/* WARNING: Control flow encountered bad instruction data */

void FUN_080b7834(int param_1)

{
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  int in_r12;
  bool in_NG;
  bool in_CY;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_NG) {
    *unaff_r11 = 0x80b783c;
    unaff_r11[-1] = register0x00000054;
    unaff_r11[-2] = in_r12;
    unaff_r11[-3] = unaff_r10;
    unaff_r11[-4] = unaff_r8;
  }
  if (!in_CY) {
    in_NG = in_r12 + param_1 * -0x10000 < 0;
  }
  if (!in_NG) {
    coprocessor_function(1,4,0,in_cr2,in_cr0,in_cr0);
  }
  coprocessor_movefromRt(7,6,7,in_cr14,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

