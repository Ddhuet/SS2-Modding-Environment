
/* WARNING: Control flow encountered bad instruction data */

void FUN_081853e6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr7;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (!in_ZR && (bool)in_NG == in_OV) {
    *(undefined4 *)(unaff_r9 + 4) = param_1;
    *(undefined4 *)(unaff_r9 + 8) = param_3;
    *(undefined4 *)(unaff_r9 + 0xc) = unaff_r4;
    *(undefined4 **)(unaff_r9 + 0x10) = unaff_r5;
    *(undefined4 *)(unaff_r9 + 0x14) = unaff_r7;
    *(undefined4 *)(unaff_r9 + 0x18) = unaff_r8;
    *(undefined4 *)(unaff_r9 + 0x1c) = unaff_r10;
    *(undefined4 *)(unaff_r9 + 0x20) = in_r12;
    *(BADSPACEBASE **)(unaff_r9 + 0x24) = register0x00000054;
    *(undefined4 *)(unaff_r9 + 0x28) = 0x81853ee;
  }
  if (in_CY && !in_ZR) {
    *unaff_r5 = param_1;
    unaff_r5[1] = param_2;
    unaff_r5[2] = unaff_r5;
    unaff_r5[3] = unaff_r7;
    unaff_r5[4] = unaff_r9;
    unaff_r5[5] = unaff_r11;
    unaff_r5[6] = 0x81853f2;
    if ((bool)in_NG == in_OV) {
      coprocessor_moveto(1,4,4,unaff_r8,in_cr7,in_cr2);
    }
    else {
      coprocessor_moveto(5,6,6,&stack0x00000000,in_cr3,in_cr3);
    }
    if (in_CY) {
      coprocessor_store(7,in_cr0,unaff_r5 + -0xdb);
    }
    if (in_OV) {
      coprocessor_movefromRt(2,3,2,in_cr14,in_cr3);
      coprocessor_movefromRt(0xb,2,2,in_cr14,in_cr13);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

