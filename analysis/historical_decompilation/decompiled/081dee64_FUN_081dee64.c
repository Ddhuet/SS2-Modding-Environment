
/* WARNING: Control flow encountered bad instruction data */

void FUN_081dee64(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 unaff_r4;
  undefined1 uVar1;
  uint unaff_r5;
  undefined1 *unaff_r7;
  undefined1 *unaff_r8;
  undefined1 *unaff_r9;
  undefined1 *puVar2;
  undefined4 *in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool bVar3;
  undefined4 in_cr11;
  
  if (in_ZR) {
    unaff_r8 = unaff_r8 + 0x5a1;
  }
  if (!in_OV) {
    unaff_r8 = unaff_r8 + -0x42c;
    *unaff_r8 = (char)unaff_r5;
  }
  bVar3 = false;
  if (in_CY) {
    bVar3 = SUB41((unaff_r5 << 0x1c) >> 0x1f,0);
    unaff_r5 = (uint)unaff_r9 ^ (unaff_r5 >> 4 | unaff_r5 << 0x1c);
    in_NG = (int)unaff_r5 < 0;
    in_ZR = unaff_r5 == 0;
  }
  uVar1 = (undefined1)unaff_r5;
                    /* WARNING: Could not recover jumptable at 0x081dee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_ZR && (bool)in_NG == in_OV) {
    coprocessor_loadlong2(0,in_cr11,param_3 + 0x278);
    puVar2 = unaff_r9;
    if (!in_OV) {
      puVar2 = unaff_r9 + -0xe2b;
      *unaff_r9 = unaff_r4;
    }
    if (bVar3) {
      uVar1 = (undefined1)*in_r12;
    }
                    /* WARNING: Could not recover jumptable at 0x081dee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (in_ZR || (bool)in_NG != in_OV) {
      (*(code *)(0x4c - (int)(puVar2 + !bVar3)))();
      return;
    }
    puVar2 = (undefined1 *)func_0x0764b108();
    if (!in_OV) {
      *unaff_r7 = unaff_r4;
    }
    if (bVar3) {
      *puVar2 = uVar1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(0x10000 - (int)(unaff_r8 + !bVar3)))();
  return;
}

