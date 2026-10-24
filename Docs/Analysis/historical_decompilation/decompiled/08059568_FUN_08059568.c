
/* WARNING: Control flow encountered bad instruction data */

void FUN_08059568(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r8;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_CY;
  bool in_OV;
  
  if (in_CY) {
    unaff_r11 = 0x510;
  }
  if (in_OV) {
    *unaff_r8 = unaff_lr;
    unaff_r8[-1] = unaff_r11;
    unaff_r8[-2] = unaff_r8;
    unaff_r8[-3] = unaff_r4;
    unaff_r8[-4] = param_2;
    unaff_r8[-5] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

