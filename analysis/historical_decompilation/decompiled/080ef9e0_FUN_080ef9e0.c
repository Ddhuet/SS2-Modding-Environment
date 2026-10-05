
/* WARNING: Control flow encountered bad instruction data */

void FUN_080ef9e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 *unaff_r10;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr15;
  
  if (in_ZR || in_NG != in_OV) {
    *param_4 = unaff_r11;
  }
  if (!in_ZR) {
    coprocessor_store(0xd,in_cr15,0x80ef644);
  }
  if (in_CY) {
    *unaff_r10 = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

