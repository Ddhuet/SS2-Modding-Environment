
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08f66a54) */
/* WARNING: Removing unreachable block (ram,0x08f66a58) */

undefined8 FUN_08f66a48(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 *unaff_r8;
  undefined4 unaff_r10;
  char *unaff_r11;
  undefined4 in_r12;
  undefined8 *unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_CY && !in_ZR) {
    *unaff_r8 = param_1;
    unaff_r8[1] = param_2;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r5;
    unaff_r8[4] = unaff_r8;
    unaff_r8[5] = unaff_r10;
    unaff_r8[6] = in_r12;
    unaff_r8[7] = register0x00000054;
    unaff_r8[8] = 0x8f66a50;
    *(undefined4 *)unaff_r11 = param_1;
    *(undefined4 *)(unaff_r11 + 4) = param_3;
    *(undefined4 *)(unaff_r11 + 8) = unaff_r4;
    *(undefined4 *)(unaff_r11 + 0xc) = unaff_r6;
    *(undefined4 **)(unaff_r11 + 0x10) = unaff_r8;
    *(undefined4 *)(unaff_r11 + 0x14) = unaff_r10;
    *(BADSPACEBASE **)(unaff_r11 + 0x18) = register0x00000054;
    *(undefined8 **)(unaff_r11 + 0x1c) = unaff_lr;
    unaff_r11[0x20] = 'T';
    unaff_r11[0x21] = 'j';
    unaff_r11[0x22] = -10;
    unaff_r11[0x23] = '\b';
  }
  if (!(bool)in_NG) {
    if (in_CY && !in_ZR) {
      cVar1 = (char)(unaff_r11 + 0xbc5);
      *unaff_r11 = cVar1;
      unaff_r11[0xbc5] = cVar1 + -0x1b;
    }
    func_0x08326380();
    if (!in_ZR && in_NG == in_OV) {
      coprocessor_storelong(4,in_cr14,0x8f66a74);
      coprocessor_function(4,0xf,4,in_cr4,in_cr15,in_cr8);
    }
    software_interrupt(0xf42148);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *unaff_lr;
}

