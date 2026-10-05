
/* WARNING: Control flow encountered bad instruction data */

void FUN_086ff966(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined1 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    puVar1 = (undefined4 *)(param_3 + param_1 * 0x400);
    *param_3 = unaff_r11;
    *puVar1 = param_2;
    puVar1[1] = unaff_r6;
    puVar1[2] = unaff_r7;
    puVar1[3] = unaff_r8;
    puVar1[4] = unaff_r9;
    puVar1[5] = unaff_r10;
    puVar1[6] = in_r12;
    puVar1[7] = register0x00000054;
    puVar1[8] = 0x86ff972;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

