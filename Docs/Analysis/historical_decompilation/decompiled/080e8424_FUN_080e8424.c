
/* WARNING: Control flow encountered bad instruction data */

void FUN_080e8424(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  byte *in_r12;
  int unaff_lr;
  bool in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_NG) {
    param_3 = param_3 + -0x2a4;
    coprocessor_store(5,in_cr11,param_3);
  }
  if (in_NG == (bool)in_OV) {
    in_r12 = *(byte **)(unaff_lr + -8);
    uVar1 = *(uint *)(unaff_lr + -0x1c);
    param_1 = *(undefined4 *)(unaff_lr + -0x20);
  }
  else {
    uVar1 = SignedSaturate((int)in_r12 >> 0x18,8);
    SignedDoesSaturate((int)in_r12 >> 0x18,8);
  }
  if (in_CY) {
    uVar1 = (uint)*in_r12;
  }
  if (!in_NG) {
    func_0x087542f8(param_1,uVar1,param_3);
  }
  if ((bool)in_ZR) {
    software_interrupt(0xa7b42d);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

