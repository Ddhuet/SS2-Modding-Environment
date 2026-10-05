
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x06861a70) */

void FUN_0800191c(int param_1,int *param_2,uint param_3)

{
  int unaff_r5;
  uint uVar1;
  int unaff_r9;
  int unaff_r11;
  int unaff_lr;
  bool in_CY;
  bool in_OV;
  bool bVar2;
  bool bVar3;
  
  if (in_CY) {
    *(int *)(param_1 + -0x530) = unaff_r11;
  }
  if (in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = (uint)param_2 & ((uint)param_2 >> 0x15 | (int)param_2 << 0xb);
  *param_2 = param_1;
  param_2[1] = (int)param_2;
  param_2[2] = unaff_r5;
  param_2[3] = uVar1;
  param_2[4] = unaff_r9;
  param_2[5] = unaff_r11;
  param_2[6] = (int)register0x00000054;
  param_2[7] = unaff_lr;
  bVar3 = false;
  bVar2 = false;
  if ((int)uVar1 < 0) {
    uVar1 = param_3 >> 0x11 | param_3 << 0xf;
    bVar3 = SBORROW4((int)(param_2 + 8),uVar1);
    bVar2 = (int)((int)(param_2 + 8) - uVar1) < 0;
  }
  if (!bVar3) {
    if (!bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

