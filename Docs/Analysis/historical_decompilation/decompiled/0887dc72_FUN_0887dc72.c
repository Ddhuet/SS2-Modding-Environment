
/* WARNING: Control flow encountered bad instruction data */

void FUN_0887dc72(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_moveto(5,7,4,unaff_r11,in_cr14,in_cr11);
  }
  if (in_NG == in_OV) {
    coprocessor_storelong(0xd,in_cr13,unaff_r9 + 0x2ac);
    *(undefined4 *)(unaff_r10 + 4) = param_1;
    *(undefined4 *)(unaff_r10 + 8) = param_2;
    *(undefined4 *)(unaff_r10 + 0xc) = param_4;
    *(undefined4 *)(unaff_r10 + 0x10) = unaff_r4;
    *(undefined4 *)(unaff_r10 + 0x14) = unaff_r6;
    *(undefined4 *)(unaff_r10 + 0x18) = unaff_r7;
    *(undefined4 *)(unaff_r10 + 0x1c) = unaff_r8;
    *(int *)(unaff_r10 + 0x20) = unaff_r9 + 0x2ac;
    *(int *)(unaff_r10 + 0x24) = unaff_r10;
    *(undefined4 *)(unaff_r10 + 0x28) = unaff_r11;
    *(undefined4 **)(unaff_r10 + 0x2c) = in_r12;
    *(BADSPACEBASE **)(unaff_r10 + 0x30) = register0x00000054;
    *(int *)(unaff_r10 + 0x34) = unaff_lr;
    *(undefined4 *)(unaff_r10 + 0x38) = 0x887dc82;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    coprocessor_load2(0,in_cr15,unaff_r11);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY || (bool)in_ZR) {
    coprocessor_loadlong(9,in_cr3,unaff_lr + 0xd4);
  }
  if (in_NG == in_OV) {
    *in_r12 = param_1;
    in_r12[1] = param_4;
    in_r12[2] = unaff_r6;
    in_r12[3] = unaff_r8;
    in_r12[4] = unaff_r11;
    in_r12[5] = in_r12;
    in_r12[6] = 0x887dc9a;
  }
  if (in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x07378bd6();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_load(0xf,in_cr12,unaff_r11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

