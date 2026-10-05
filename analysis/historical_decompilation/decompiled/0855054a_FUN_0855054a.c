
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0855054a(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *unaff_r4;
  uint unaff_r6;
  undefined1 unaff_r11;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool in_OV;
  undefined4 in_cr9;
  
  if (in_OV) {
    *unaff_r4 = unaff_r11;
  }
  if ((bool)in_ZR || (bool)in_NG != in_OV) {
    uVar1 = (int)unaff_r6 >> (unaff_r6 & 0xff);
    in_CY = CARRY4((uint)&stack0x00000000,uVar1);
    in_OV = SCARRY4((int)&stack0x00000000,uVar1);
    in_ZR = &stack0x00000000 + uVar1 == (undefined1 *)0x0;
  }
  if (!in_OV) {
    unaff_lr = 0x8550556;
    param_1 = func_0x068447ce();
  }
  coprocessor_loadlong(0xd,in_cr9,param_1 + 400);
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_lr = 0x855055e;
    func_0x0719055e();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return *(undefined4 *)(unaff_lr + 4);
  }
                    /* WARNING: Could not recover jumptable at 0x08550562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar2 = (*(code *)(unaff_r6 -
                      (((uint)&stack0x00000000 >> 0x1f | (int)&stack0x00000000 << 1) +
                      (uint)!(bool)in_CY)))();
    return uVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

