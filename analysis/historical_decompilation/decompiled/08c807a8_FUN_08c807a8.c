
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c807a8(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *unaff_r4;
  int unaff_r5;
  char in_NG;
  undefined1 in_CY;
  char in_OV;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    uVar2 = func_0x0836dcb8();
  }
  uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
  if ((bool)in_NG) {
    *unaff_r4 = (char)(unaff_r4 + -0x452);
    unaff_r4[-0x452] = (char)(unaff_r4 + -0x9a4);
    unaff_r4[-0x9a4] = (char)unaff_r5;
  }
  else {
    uVar1 = (uint)*(byte *)(*(byte *)(unaff_r5 + -0x514) - 0x155);
  }
  if (!(bool)in_CY) {
    func_0x081d1938((int)uVar2,uVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

