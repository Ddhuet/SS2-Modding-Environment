
/* WARNING: Control flow encountered bad instruction data */

void FUN_08211d20(void)

{
  undefined4 in_r3;
  undefined1 *unaff_r4;
  int unaff_r5;
  undefined1 unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined1 auStack_126 [294];
  
  if (in_ZR || in_NG != (bool)in_OV) {
    *unaff_r4 = unaff_r11;
  }
  if (in_ZR) {
    if (in_NG) {
      register0x00000054 = (BADSPACEBASE *)auStack_126;
    }
    coprocessor_loadlong(0xc,in_cr0,(undefined1 *)((int)register0x00000054 + 100));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY) {
    in_CY = 0x57f < unaff_lr;
  }
  if (in_CY) {
    *(undefined4 *)(unaff_r5 + -0x360) = in_r3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

