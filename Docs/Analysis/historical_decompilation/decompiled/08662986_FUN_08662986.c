
/* WARNING: Control flow encountered bad instruction data */

void FUN_08662986(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 *unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    puVar1 = (undefined4 *)((int)param_1 * 0x401);
    *param_1 = unaff_r11;
    *puVar1 = 0x8662992;
    puVar1[-1] = register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r10;
    puVar1[-4] = unaff_r9;
    puVar1[-5] = unaff_r8;
    puVar1[-6] = unaff_r7;
    puVar1[-7] = unaff_r5;
  }
  if (in_ZR) {
    *unaff_r4 = (char)unaff_r7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

