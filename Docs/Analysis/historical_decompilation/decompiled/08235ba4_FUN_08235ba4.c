
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08235bb0) */
/* WARNING: Removing unreachable block (ram,0x08235bbc) */

void FUN_08235ba4(undefined4 param_1,int param_2,int param_3)

{
  int unaff_r6;
  undefined4 *unaff_r8;
  undefined4 unaff_r11;
  int unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr4;
  
  if (!in_ZR && in_NG == (bool)in_OV) {
    *(undefined4 *)(unaff_r6 + 0x5a0) = unaff_r11;
  }
  if (in_CY) {
    *(int *)(unaff_lr + -0xe0c) = param_3;
  }
  if (in_ZR) {
    if (in_NG) {
      coprocessor_loadlong(7,in_cr3,param_2 + -0x9c);
      coprocessor_loadlong(3,in_cr4,param_3 + -0x10c);
    }
    if (in_NG != (bool)in_OV) {
      *unaff_r8 = unaff_r11;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

