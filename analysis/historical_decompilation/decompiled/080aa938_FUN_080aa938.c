
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080aa948) */

void FUN_080aa938(uint param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  
  if ((bool)in_NG != in_OV) {
    unaff_r11 = param_3 + (param_1 >> (unaff_r5 & 0x1f) | param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  if (in_OV) {
    *unaff_r4 = unaff_lr;
    unaff_r4[-1] = register0x00000054;
    unaff_r4[-2] = unaff_r11;
    unaff_r4[-3] = param_4;
    unaff_r4[-4] = param_2;
    unaff_r4[-5] = param_1;
    *unaff_r9 = in_r12;
    unaff_r9[-1] = unaff_r11;
    unaff_r9[-2] = unaff_r9;
    unaff_r9[-3] = unaff_r8;
    unaff_r9[-4] = unaff_r4;
    unaff_r9[-5] = param_4;
    unaff_r9[-6] = param_3;
    unaff_r9[-7] = param_1;
  }
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

