
/* WARNING: Control flow encountered bad instruction data */

undefined8
FUN_085af5a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6)

{
  char *unaff_r4;
  undefined4 *unaff_r11;
  char in_NG;
  undefined1 in_CY;
  char in_OV;
  
  if ((bool)in_CY) {
    if ((bool)in_NG) {
      param_1 = *unaff_r11;
      param_3 = unaff_r11[1];
      unaff_r4 = (char *)unaff_r11[2];
    }
    if (in_NG != in_OV) {
      func_0x074994a4(param_1,param_2,param_3);
    }
    if (in_NG == in_OV) {
      func_0x079271b4();
    }
    if (!(bool)in_CY) {
      *unaff_r4 = (char)unaff_r4 + -0x56;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_6;
}

