
/* WARNING: Control flow encountered bad instruction data */

void FUN_088ae46c(void)

{
  int unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined8 in_d26;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(1,in_cr3,unaff_r10 + 0x68);
    *(undefined8 *)(unaff_r11 + 0x1ac) = in_d26;
    coprocessor_loadlong(0xd,in_cr13,in_r12);
    coprocessor_loadlong(0xc,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  else {
    coprocessor_storelong(5,in_cr11,0x88ae5c8);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

