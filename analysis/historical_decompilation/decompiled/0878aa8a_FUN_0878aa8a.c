
/* WARNING: Control flow encountered bad instruction data */

void FUN_0878aa8a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  undefined4 unaff_r5;
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
    puVar1 = (undefined4 *)(param_4 + ((uint)param_4 >> 0xb | (int)param_4 << 0x15));
    *param_4 = unaff_r11;
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = unaff_r5;
    puVar1[3] = unaff_r6;
    puVar1[4] = unaff_r7;
    puVar1[5] = unaff_r8;
    puVar1[6] = unaff_r9;
    puVar1[7] = unaff_r10;
    puVar1[8] = in_r12;
    puVar1[9] = register0x00000054;
    puVar1[10] = 0x878aa96;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

