
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_081f9a32(void)

{
  int unaff_r7;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    return *(undefined4 *)(unaff_r7 + 4);
  }
  if (in_NG != in_OV) {
    software_interrupt(0xbdbbba);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x0742b14a();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(3,in_cr13,unaff_r7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

