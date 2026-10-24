
/* WARNING: Control flow encountered bad instruction data */

void FUN_081ef86c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r9;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  byte in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    in_OV = SCARRY4(unaff_r4,0x2dc00000) != SCARRY4(unaff_r4 + 0x2dc00000,(uint)in_CY);
    unaff_r11 = unaff_r4 + 0x2dc00000 + (uint)in_CY;
    in_NG = unaff_r11 < 0;
  }
  if (in_NG != in_OV) {
    if (in_NG != in_OV) {
      if (in_NG == in_OV) {
        func_0x06cda73c();
        in_r12 = extraout_r12;
      }
      if (in_NG == in_OV) {
        coprocessor_store(0xc,in_cr10,in_r12);
        software_interrupt(0xaeaead);
      }
      else {
        func_0x0705db7c();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_r8 = param_1;
    unaff_r8[1] = param_4;
    unaff_r8[2] = unaff_r5;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = unaff_r8;
    unaff_r8[5] = unaff_r11;
    unaff_r8[6] = register0x00000054;
    unaff_r8[7] = 0x81ef880;
    unaff_r8[9] = param_4;
    unaff_r8[10] = unaff_r5;
    unaff_r8[0xb] = unaff_r7;
    unaff_r8[0xc] = unaff_r11;
    unaff_r8[0xd] = register0x00000054;
    unaff_r8[0xe] = 0x81ef884;
    *(undefined4 *)(unaff_r9 + 4) = param_1;
    *(undefined4 *)(unaff_r9 + 8) = param_4;
    *(undefined4 *)(unaff_r9 + 0xc) = unaff_r5;
    *(undefined4 *)(unaff_r9 + 0x10) = unaff_r7;
    *(undefined4 **)(unaff_r9 + 0x14) = unaff_r8 + 0xe;
    *(int *)(unaff_r9 + 0x18) = unaff_r11;
    *(BADSPACEBASE **)(unaff_r9 + 0x1c) = register0x00000054;
    *(undefined4 *)(unaff_r9 + 0x20) = 0x81ef888;
    *(undefined4 *)(unaff_r9 + 0x24) = param_1;
    *(undefined4 *)(unaff_r9 + 0x28) = param_4;
    *(undefined4 *)(unaff_r9 + 0x2c) = unaff_r5;
    *(undefined4 *)(unaff_r9 + 0x30) = unaff_r7;
    *(undefined4 **)(unaff_r9 + 0x34) = unaff_r8 + 0xe;
    *(int *)(unaff_r9 + 0x38) = unaff_r11;
    *(BADSPACEBASE **)(unaff_r9 + 0x3c) = register0x00000054;
    *(undefined4 *)(unaff_r9 + 0x40) = 0x81ef88c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_store(0,in_cr11,0x81efb3c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

