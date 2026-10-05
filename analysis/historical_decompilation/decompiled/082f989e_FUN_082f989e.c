
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f989e(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0792e7da();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    software_interrupt(0xebe8e4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

