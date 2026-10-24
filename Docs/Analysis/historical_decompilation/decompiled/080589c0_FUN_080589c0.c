
/* WARNING: Control flow encountered bad instruction data */

void FUN_080589c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined1 *unaff_r8;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_CY;
  
  if (in_NG) {
    *unaff_r11 = 0x80589c8;
    unaff_r11[-1] = register0x00000054;
    unaff_r11[-2] = in_r12;
    unaff_r11[-3] = unaff_r10;
    unaff_r11[-4] = unaff_r8;
    unaff_r11[-5] = unaff_r6;
    unaff_r11[-6] = unaff_r5;
    unaff_r11[-7] = unaff_r4;
    unaff_r11[-1] = unaff_lr;
    unaff_r11[-2] = register0x00000054;
    unaff_r11[-3] = unaff_r11;
  }
  if (in_CY) {
    *param_1 = param_2;
  }
  else {
    *unaff_r8 = (char)param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

