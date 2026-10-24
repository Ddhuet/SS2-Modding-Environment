
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08f27e88) */
/* WARNING: Removing unreachable block (ram,0x08f27e9c) */
/* WARNING: Removing unreachable block (ram,0x08f27eb4) */

void FUN_08160214(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r4;
  uint *puVar1;
  uint unaff_r6;
  undefined4 *unaff_r8;
  int unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr14;
  
  if (!in_ZR && in_NG == (bool)in_OV) {
    unaff_r11 = ((int)&stack0x00000000 << 6) >> 0x11;
  }
  if (!in_CY) {
    if (!in_NG) {
      *unaff_r8 = param_2;
      unaff_r8[1] = unaff_r4;
      unaff_r8[2] = unaff_r6;
      unaff_r8[3] = unaff_r11;
      unaff_r8[4] = 0x8f27e98;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = *(uint **)(unaff_r11 + 0x10);
  coprocessor_storelong2(1,in_cr14,&stack0x00000000);
  if (in_ZR) {
    *puVar1 = unaff_r6 & 0x1c000;
    *(uint *)((int)puVar1 + -0x301) = unaff_r6 & 0x1c000;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

