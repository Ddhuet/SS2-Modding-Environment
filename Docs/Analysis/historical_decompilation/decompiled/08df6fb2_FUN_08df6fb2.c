
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df6fb2(uint param_1)

{
  int unaff_r4;
  uint unaff_r5;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 *puVar1;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  bool in_OV;
  
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r11 = *(int *)(unaff_r4 + 0x5b5);
  }
  if ((bool)in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)(param_1 & 0x2cc00000);
    unaff_r11 = unaff_r5 + (unaff_r5 >> 3) + (uint)in_CY;
  }
  if (!in_ZR && (bool)in_NG == in_OV) {
    puVar1 = (undefined4 *)((int)register0x00000054 + 0x5ae);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + 0x5ae);
    *puVar1 = in_r12;
  }
  if (in_OV) {
    *(BADSPACEBASE **)(unaff_r11 + 0x5ac) = register0x00000054;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

