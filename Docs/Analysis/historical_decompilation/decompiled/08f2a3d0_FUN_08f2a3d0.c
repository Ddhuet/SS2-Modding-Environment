
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f2a3d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr11;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_function(5,0xd,2,in_cr11,in_cr11,in_cr3);
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(7,in_cr7,unaff_r11 + 0x150);
  }
  if (!(bool)in_OV) {
    unaff_lr = 0x8f2a3dc;
    func_0x086081bc();
    param_2 = extraout_r1;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_store(4,in_cr4,unaff_r5);
  coprocessor_store(4,in_cr5,unaff_r5 + 0x11c);
  *(undefined4 *)(unaff_r7 + 4) = param_2;
  *(undefined4 *)(unaff_r7 + 8) = param_4;
  *(undefined4 *)(unaff_r7 + 0xc) = unaff_r4;
  *(int *)(unaff_r7 + 0x10) = unaff_r5 + 0x238;
  *(undefined4 *)(unaff_r7 + 0x14) = unaff_r6;
  *(undefined4 *)(unaff_r7 + 0x18) = unaff_r10;
  *(undefined4 *)(unaff_r7 + 0x1c) = in_r12;
  *(undefined4 *)(unaff_r7 + 0x20) = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

