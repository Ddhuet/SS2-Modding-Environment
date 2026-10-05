
/* WARNING: Control flow encountered bad instruction data */

void FUN_085d15ce(undefined4 param_1)

{
  undefined4 *unaff_r8;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr12;
  
  if ((bool)in_NG) {
    return;
  }
  if (!(bool)in_ZR && in_OV == '\0') {
    coprocessor_loadlong(5,in_cr12,&stack0x00000000);
  }
  if (in_OV != '\0') {
    param_1 = func_0x078e748a();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    param_1 = func_0x06c5e78a();
  }
  if ((bool)in_NG) {
    param_1 = *unaff_r8;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    func_0x074f7c16(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

