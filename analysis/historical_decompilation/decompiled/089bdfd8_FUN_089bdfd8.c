
/* WARNING: Control flow encountered bad instruction data */

void FUN_089bdfd8(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char *param_4)

{
  int unaff_r4;
  int unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  coprocessor_function2(5,0xb,3,in_cr11,in_cr11,in_cr1);
  coprocessor_moveto(0xb,6,2,unaff_r11,in_cr11,in_cr1);
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_loadlong(0xb,in_cr11,unaff_r11 + 0x2f8);
  }
  *param_3 = param_2;
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_storelong(0xe,in_cr3,param_4 + -0x37c);
    coprocessor_storelong(0xd,in_cr14,unaff_r4 + 0x37c);
  }
  coprocessor_moveto(0xd,1,7,&stack0x00000000,in_cr14,in_cr0);
  coprocessor_moveto(0xd,7,7,&stack0x00000000,in_cr14,in_cr0);
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_storelong(0xf,in_cr13,&stack0x00000000);
  }
  if (!in_CY) {
    coprocessor_function(0xf,0xd,0,in_cr13,in_cr13,in_cr0);
  }
  if (in_NG) {
    software_interrupt(0xfff000);
  }
  if (!in_CY) {
    coprocessor_function(0xe,0xd,7,in_cr14,in_cr14,in_cr14);
  }
  if (in_NG) {
    coprocessor_function(0xe,0xe,7,in_cr4,in_cr4,in_cr13);
    *param_4 = (char)param_4 + '#';
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

