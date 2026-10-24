
/* WARNING: Control flow encountered bad instruction data */

void FUN_082232b4(undefined2 *param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    return;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    in_r12 = in_r12 + 0x2f0;
    coprocessor_load(0xc,in_cr11,in_r12);
    coprocessor_movefromRt(0xd,5,5,in_cr13,in_cr13);
    unaff_r11 = coprocessor_movefromRt(0xe,5,5,in_cr14,in_cr14);
    software_interrupt(0xbfbfbe);
    software_interrupt(0xbfbfbf);
    software_interrupt(0xbfbfbf);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *param_1 = (short)in_r12;
    *(byte *)(unaff_r4 + 0x4c4) = param_4 & 0xfc;
    *(byte *)(unaff_r6 + (unaff_r5 >> 0xd)) = param_4 & 0xfc;
    *(int *)(unaff_r8 + 4) = (int)param_1 + 0xf;
    *(undefined4 *)(unaff_r8 + 8) = param_2;
    *(undefined4 *)(unaff_r8 + 0xc) = param_3;
    *(int *)(unaff_r8 + 0x10) = unaff_r6;
    *(undefined4 *)(unaff_r8 + 0x14) = unaff_r7;
    *(undefined4 *)(unaff_r8 + 0x18) = unaff_r11;
    *(undefined4 *)(unaff_r8 + 0x1c) = unaff_lr;
    *(undefined4 *)(unaff_r8 + 0x20) = 0x8223304;
    func_0x074d5e2c();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_function(0xd,0xc,6,in_cr12,in_cr13,in_cr12);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

