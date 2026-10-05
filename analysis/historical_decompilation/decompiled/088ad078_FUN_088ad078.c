
/* WARNING: Control flow encountered bad instruction data */

void FUN_088ad078(void)

{
  int unaff_r11;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    software_interrupt(0xffb57a);
  }
  coprocessor_loadlong2(10,in_cr13,&stack0x00000294);
  coprocessor_storelong2(0xb,in_cr11,unaff_r11 + 0x2e8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

