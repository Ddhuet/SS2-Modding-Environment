
/* WARNING: Control flow encountered bad instruction data */

void FUN_080fcb6c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *unaff_r8;
  undefined1 *puVar1;
  undefined1 unaff_r11;
  undefined4 *unaff_lr;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  puVar1 = unaff_r8;
  if (in_ZR || in_NG != in_OV) {
    puVar1 = unaff_r8 + ((int)&stack0x00000000 >> 0xb);
    *unaff_r8 = unaff_r11;
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr12,puVar1);
  }
  if (in_ZR || in_NG != in_OV) {
    in_CY = false;
    unaff_lr = (undefined4 *)((uint)unaff_lr & 0xfff31fff);
  }
  coprocessor_function2(7,0xf,7,in_cr0,in_cr11,in_cr14);
  if ((bool)in_CY) {
    coprocessor_function(7,1,1,in_cr2,in_cr7,in_cr4);
    *unaff_lr = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

