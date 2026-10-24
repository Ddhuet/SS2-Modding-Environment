
/* WARNING: Control flow encountered bad instruction data */

void FUN_086437a0(void)

{
  int unaff_r6;
  undefined4 unaff_r9;
  uint unaff_r10;
  undefined4 *unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    unaff_r6 = -0xffffffd - unaff_r6;
    *unaff_r11 = unaff_r9;
  }
  if (!in_ZR || unaff_r6 + (unaff_r10 >> 0x1e) != 0) {
    func_0x0782d7c8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

