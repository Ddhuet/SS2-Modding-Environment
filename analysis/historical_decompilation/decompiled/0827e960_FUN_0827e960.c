
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0827e960(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int unaff_r10;
  undefined4 unaff_r11;
  undefined1 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr12;
  
  if (in_NG == in_OV) {
    coprocessor_movefromRt(5,5,5,in_cr3,in_cr4);
  }
  else {
    param_4 = (undefined4 *)((int)param_4 + 0x6a7);
    *param_4 = unaff_r11;
  }
  if (in_ZR || in_NG != in_OV) {
    if (in_ZR || in_NG != in_OV) {
      *(undefined1 *)(param_3 + 0xfc8) = in_r12;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_storelong(3,in_cr12,unaff_r10 + 0x318);
  return param_4[1];
}

