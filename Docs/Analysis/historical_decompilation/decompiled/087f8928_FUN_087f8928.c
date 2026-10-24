
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_087f8928(void)

{
  undefined4 *unaff_r7;
  int unaff_r8;
  int unaff_r10;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    unaff_lr = 0x87f892c;
    func_0x07f65e40();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if (in_NG == in_OV) {
      unaff_lr = 0x87f8938;
      func_0x07aa77e4();
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      unaff_lr = 0x87f8944;
      func_0x06a61ff4();
    }
    if (!(bool)in_OV) {
      *(int *)(unaff_r8 + (unaff_r10 >> 0xf)) = unaff_r8;
    }
    if (in_NG == in_OV) {
      coprocessor_loadlong(0xd,in_cr13,unaff_lr + 0x3fc);
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_loadlong(0xb,in_cr13,0x87f8c30);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *unaff_r7;
}

