
/* WARNING: Control flow encountered bad instruction data */

void FUN_08272958(undefined4 param_1,int param_2,int param_3)

{
  undefined1 *unaff_r5;
  int unaff_r10;
  int unaff_r11;
  undefined1 in_r12;
  undefined1 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    if (in_NG != in_OV) {
      unaff_r11 = unaff_r11 + 0x2e4;
      coprocessor_load(0xb,in_cr11,unaff_r11);
    }
    if (in_ZR || in_NG != in_OV) {
      coprocessor_loadlong(7,in_cr13,unaff_r10 + 0x360);
    }
    else {
      *(undefined1 *)(param_3 + (param_2 >> 5)) = in_r12;
      coprocessor_function(9,0xc,6,in_cr12,in_cr11,in_cr8);
    }
    *unaff_r5 = unaff_lr;
    coprocessor_storelong(8,in_cr14,unaff_r11 + 0x39c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

