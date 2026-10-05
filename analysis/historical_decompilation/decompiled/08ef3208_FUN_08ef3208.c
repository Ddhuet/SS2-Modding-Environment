
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ef3208(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_moveto(0xe,7,6,unaff_lr,in_cr14,in_cr12);
  coprocessor_moveto(0xc,7,6,&stack0x00000000,in_cr14,in_cr10);
  coprocessor_function2(0xd,0xe,6,in_cr14,in_cr14,in_cr10);
  coprocessor_moveto(0xc,7,5,in_r12,in_cr13,in_cr8);
  coprocessor_function(0xc,0xd,5,in_cr13,in_cr13,in_cr8);
  if (in_NG == in_OV) {
    *unaff_r11 = param_2;
    unaff_r11[1] = param_3;
    unaff_r11[2] = param_4;
    unaff_r11[3] = unaff_r5;
    unaff_r11[4] = unaff_r6;
    unaff_r11[5] = unaff_r7;
    unaff_r11[6] = unaff_r9;
    unaff_r11[7] = unaff_r10;
    unaff_r11[8] = unaff_r11;
    unaff_r11[9] = unaff_lr;
    unaff_r11[10] = 0x8ef3250;
    *(BADSPACEBASE **)unaff_r10 = register0x00000054;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

