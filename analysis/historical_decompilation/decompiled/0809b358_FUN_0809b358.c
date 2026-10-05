
/* WARNING: Control flow encountered bad instruction data */

void FUN_0809b358(int param_1)

{
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  int in_r12;
  undefined4 unaff_pc;
  bool in_NG;
  bool in_CY;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr10;
  undefined4 in_cr12;
  
  if (in_NG) {
    *unaff_r11 = 0x809b360;
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
  coprocessor_moveto(7,0,7,unaff_pc,in_cr10,in_cr12);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

