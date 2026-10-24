
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ab269c(undefined4 param_1,int param_2)

{
  int extraout_r1;
  int extraout_r1_00;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 uVar1;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (!(bool)in_ZR) {
    func_0x0799fd90();
    param_2 = extraout_r1;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_ZR) {
    func_0x075612ec();
    param_2 = extraout_r1_00;
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    return;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *(undefined4 *)(unaff_r10 + 4) = unaff_r8;
    *(undefined4 *)(unaff_r10 + 8) = in_r12;
    *(BADSPACEBASE **)(unaff_r10 + 0xc) = register0x00000054;
    *(undefined4 *)(unaff_r10 + 0x10) = 0x8ab26b0;
    *(undefined4 *)(unaff_r10 + 0x14) = unaff_r8;
    *(undefined4 *)(unaff_r10 + 0x18) = in_r12;
    *(BADSPACEBASE **)(unaff_r10 + 0x1c) = register0x00000054;
    *(undefined4 *)(unaff_r10 + 0x20) = 0x8ab26b4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = *(undefined4 *)(param_2 + 4);
    *unaff_r9 = unaff_r8;
    unaff_r9[1] = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

