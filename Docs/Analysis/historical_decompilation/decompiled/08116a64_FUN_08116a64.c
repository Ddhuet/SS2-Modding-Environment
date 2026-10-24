
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08116a64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  uint unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_function(5,0xb,6,in_cr11,in_cr12,in_cr0);
  }
  if (in_CY) {
    param_1 = *(undefined4 *)(in_r12 - (unaff_r7 >> 7 | unaff_r7 << 0x19));
  }
  if (in_ZR) {
    software_interrupt(0xd1520);
  }
  if (in_CY) {
    uRam08116a5c = param_1;
    uRam08116a60 = param_3;
    _FUN_08116a64 = param_4;
    uRam08116a68 = unaff_r4;
    uRam08116a6c = unaff_r9;
    uRam08116a70 = unaff_r11;
    puRam08116a74 = (undefined1 *)register0x00000054;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

