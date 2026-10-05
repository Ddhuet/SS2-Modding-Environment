
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x07ccbe92) */
/* WARNING: Removing unreachable block (ram,0x06f33dca) */

void FUN_08df9396(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  undefined4 *puVar1;
  undefined4 in_r12;
  bool in_NG;
  char in_OV;
  
  if (in_NG != (bool)in_OV) {
    puVar1 = (undefined4 *)(unaff_r10 + param_4 * -0x400);
    *puVar1 = 0x8df93a2;
    puVar1[-1] = register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = puVar1;
    puVar1[-4] = unaff_r9;
    puVar1[-5] = unaff_r8;
    puVar1[-6] = unaff_r5;
    puVar1[-7] = param_7;
    puVar1[-8] = param_5;
  }
  if (!in_NG) {
    if (in_OV != '\0') {
      *(undefined4 *)(param_4 + -0x2f0) = param_3;
      software_interrupt(0xabe1a);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

