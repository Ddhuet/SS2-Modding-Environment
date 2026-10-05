
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x086e689e) */

void FUN_086e6892(void)

{
  undefined4 *unaff_r6;
  undefined4 unaff_r11;
  uint extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    *unaff_r6 = unaff_r11;
  }
  func_0x096654b8();
                    /* WARNING: Could not recover jumptable at 0x086e689a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((bool)in_ZR) {
    (*(code *)~((uint)&stack0x00000000 >> (extraout_r12 & 0xff)))();
    return;
  }
  if (in_NG != in_OV) {
    func_0x09f06dba();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

