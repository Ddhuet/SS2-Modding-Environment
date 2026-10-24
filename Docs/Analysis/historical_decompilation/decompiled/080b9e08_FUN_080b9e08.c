
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080b9e14) */
/* WARNING: Type propagation algorithm not settling */

void FUN_080b9e08(uint param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  int *unaff_r5;
  uint unaff_r10;
  uint unaff_r11;
  uint in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar1;
  
  if (in_NG != (bool)in_OV) {
    unaff_r11 = param_1 - ((param_1 >> ((uint)unaff_r5 & 0xff)) + (uint)!in_CY);
  }
  if (in_ZR) {
    *param_4 = param_2;
  }
  if (!in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = false;
  if (in_ZR) {
    param_1 = in_r12 - ((int)unaff_r11 >> 7);
    bVar1 = param_1 == 0;
  }
  if (bVar1) {
    iRam0847d018 = unaff_r10 +
                   (0x847d014U >> (param_1 & 0x1f) | 0x847d014 << 0x20 - (param_1 & 0x1f));
    uRam0847d01c = param_2;
    *unaff_r5 = iRam0847d018;
    unaff_r5[1] = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

