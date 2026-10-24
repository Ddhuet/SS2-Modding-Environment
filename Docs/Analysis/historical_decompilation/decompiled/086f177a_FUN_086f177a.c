
/* WARNING: Control flow encountered bad instruction data */

void FUN_086f177a(undefined4 param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  undefined1 unaff_r11;
  bool in_ZR;
  
  if (!in_ZR) {
    *param_2 = unaff_r11;
    *(undefined4 *)(param_4 + -0x3ad) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

