
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_082847be(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r9;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_NG != (bool)in_OV) {
    coprocessor_storelong(5,in_cr11,unaff_r9);
  }
  if (!in_CY) {
    param_2 = (uint)*(byte *)(param_3 + -0x810);
  }
  if (!in_NG) {
    coprocessor_movefromRt(0xc,1,2,in_cr14,in_cr3);
  }
  if (in_ZR) {
    coprocessor_moveto(1,2,2,param_4,in_cr1,in_cr7);
  }
  coprocessor_storelong(0,in_cr0,in_r12);
  if (in_CY && !in_ZR) {
    return CONCAT44(param_2,*unaff_r11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

