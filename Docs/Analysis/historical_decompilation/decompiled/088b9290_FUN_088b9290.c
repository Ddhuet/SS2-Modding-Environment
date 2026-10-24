
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x088b92b0) */
/* WARNING: Removing unreachable block (ram,0x088b92bc) */

void FUN_088b9290(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  uint unaff_r5;
  uint *unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint *puVar1;
  uint *unaff_r9;
  uint unaff_r10;
  uint unaff_r11;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_OV) {
    *unaff_r9 = unaff_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = unaff_r8;
  if (in_CY && !in_ZR) {
    puVar1 = (uint *)((int)unaff_r8 + ((uint)unaff_r9 >> 0x13));
    *unaff_r8 = (uint)unaff_r9;
    *unaff_r6 = param_4;
    unaff_r6[1] = unaff_r7;
    unaff_r6[2] = (uint)puVar1;
    unaff_r6[3] = unaff_r11;
    unaff_r6[4] = 0x88b92a4;
    unaff_r6 = unaff_r6 + 5;
  }
  if (in_NG == '\0') {
    unaff_r10 = ((uint)puVar1 & 0xffff) + ((uint)puVar1 & 0x7fff8) * 0x2000;
  }
  if (in_CY && !in_ZR) {
    *puVar1 = param_4;
    puVar1[1] = unaff_r7;
    puVar1[2] = (uint)unaff_r9;
    puVar1[3] = unaff_r11;
    puVar1[4] = 0x88b92ac;
    puVar1[5] = param_2;
    puVar1[6] = param_3;
    puVar1[7] = unaff_r5;
    puVar1[8] = (uint)unaff_r6;
    puVar1[9] = unaff_r11;
    puVar1[10] = (uint)register0x00000054;
    puVar1[0xb] = unaff_lr;
  }
  else {
    *unaff_r6 = param_2;
    unaff_r6[1] = param_3;
    unaff_r6[2] = unaff_r5;
    unaff_r6[3] = (uint)unaff_r6;
    unaff_r6[4] = (uint)unaff_r9;
    unaff_r6[5] = unaff_r10;
    unaff_r6[6] = (uint)register0x00000054;
    unaff_r6[7] = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

