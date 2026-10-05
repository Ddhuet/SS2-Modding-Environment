
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d2d7da(void)

{
  int in_r3;
  int extraout_r3;
  undefined1 uVar1;
  int unaff_r6;
  undefined1 *unaff_r10;
  int in_r12;
  int extraout_r12;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0775ae06();
    in_r3 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG) {
    coprocessor_movefromRt(10,10,in_cr11);
    coprocessor_movefromRt2(10,10,in_cr11);
    uVar1 = (undefined1)*(undefined4 *)(in_r12 + -0x9bc);
  }
  else {
    *unaff_r10 = (char)unaff_r6;
    uVar1 = (undefined1)*(undefined4 *)(in_r3 + -0x4bc);
  }
  if (in_NG != in_OV) {
    func_0x0767ca76();
  }
  if (!(bool)in_CY) {
    *(undefined1 *)(unaff_r6 + -0x4cc) = uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

