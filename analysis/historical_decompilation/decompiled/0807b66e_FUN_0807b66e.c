
/* WARNING: Control flow encountered bad instruction data */

void FUN_0807b66e(undefined4 *param_1)

{
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  bool in_CY;
  undefined1 in_OV;
  
  if (in_CY) {
    *param_1 = 0x807b676;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r7;
    param_1[-3] = unaff_r6;
  }
  func_0x082f95f6();
  if (!(bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

