
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a654d4(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr13;
  
  func_0x07952ada();
  if ((bool)in_ZR) {
    software_interrupt(0xdcbb67);
  }
  coprocessor_storelong2(0xd,in_cr13,&stack0x00000000);
  if (in_NG != in_OV) {
    func_0x079d43bc();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

