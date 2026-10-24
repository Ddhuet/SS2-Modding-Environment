
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a11f66(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if ((bool)in_ZR) {
    func_0x06c3f52a();
  }
  if ((bool)in_ZR) {
    func_0x06d01f32();
  }
  if ((bool)in_ZR) {
    software_interrupt(0xbbbb00);
    software_interrupt(0x4b0b00);
  }
  if (in_NG != in_OV) {
    software_interrupt(0xbbb0bb);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

