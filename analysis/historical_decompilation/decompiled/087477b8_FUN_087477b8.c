
/* WARNING: Control flow encountered bad instruction data */

void FUN_087477b8(void)

{
  undefined2 *unaff_r7;
  undefined2 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
    *unaff_r7 = unaff_r11;
  }
  if (!in_ZR && in_NG == in_OV) {
    return;
  }
  if (!in_ZR && in_NG == in_OV) {
    func_0x09bfa110();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

