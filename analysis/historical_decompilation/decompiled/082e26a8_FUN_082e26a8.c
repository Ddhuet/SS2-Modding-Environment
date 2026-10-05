
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e26a8(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x0928fad8();
  }
  if (!(bool)in_ZR) {
    software_interrupt(0xd3033a);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

