
/* WARNING: Control flow encountered bad instruction data */

void FUN_0885f8c0(void)

{
  undefined1 *unaff_r7;
  undefined1 unaff_r10;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x099856a8();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r7 = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

