
/* WARNING: Control flow encountered bad instruction data */

void FUN_082912ac(int param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 unaff_pc;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr3;
  
  bVar1 = *param_4;
  if (in_ZR) {
    *unaff_r6 = 0x82912bc;
    unaff_r6[-1] = unaff_lr;
    unaff_r6[-2] = register0x00000054;
    unaff_r6[-3] = (uint)bVar1;
    unaff_r6[-4] = unaff_r10;
    unaff_r6[-5] = unaff_r9;
    unaff_r6[-6] = unaff_r7;
    unaff_r6[-7] = unaff_r6;
    unaff_r6[-8] = unaff_r4;
    unaff_r6[-9] = param_4 + (unaff_r5 >> 0xb);
    unaff_r6[-10] = param_2;
  }
  if (in_NG) {
    *(undefined4 *)(param_1 + -0xf0c) = unaff_pc;
    unaff_r9 = *(undefined4 *)(unaff_r10 + -8);
  }
  if (in_CY) {
    coprocessor_store(8,in_cr3,unaff_r9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

