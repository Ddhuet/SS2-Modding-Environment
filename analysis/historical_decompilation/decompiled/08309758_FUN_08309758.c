
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08309758(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  undefined4 *unaff_r9;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    param_3 = param_3 + 0x5ba;
  }
  if (in_ZR || in_NG != in_OV) {
    return CONCAT44(*(undefined4 *)(unaff_r5 + 4),param_1);
  }
  if (in_ZR || in_NG != in_OV) {
    return CONCAT44(param_2,*unaff_r9);
  }
  if (in_ZR || in_NG != in_OV) {
    func_0x0787f2c8(param_1,param_2,param_3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

