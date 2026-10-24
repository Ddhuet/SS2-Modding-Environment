
/* WARNING: Control flow encountered bad instruction data */

void FUN_081acef2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_store(5,in_cr11,unaff_r10 + 800);
    software_interrupt(0xdfd3bc);
  }
  if (!in_CY) {
    uRam000002e4 = param_2;
    uRam000002e8 = param_3;
    uRam000002ec = param_4;
    uRam000002f0 = unaff_r5;
    uRam000002f4 = unaff_r6;
    uRam000002f8 = unaff_r8;
    uRam000002fc = unaff_r11;
    uRam00000300 = unaff_lr;
  }
  coprocessor_loadlong2(3,in_cr0,unaff_r8);
  if (!in_CY) {
    func_0x0822f35a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

