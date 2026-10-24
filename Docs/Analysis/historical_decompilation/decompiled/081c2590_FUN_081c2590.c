
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_081c2590(int param_1,int param_2,undefined1 *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 *extraout_r2;
  undefined1 *extraout_r2_00;
  int unaff_r4;
  int iVar2;
  int unaff_r6;
  int *unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  int iVar3;
  int in_r12;
  undefined4 unaff_lr;
  undefined4 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  
  if (in_NG == in_OV) {
    iVar2 = unaff_r4;
    if ((bool)in_NG) {
      iVar2 = unaff_r4 + -0xcc4;
      *(BADSPACEBASE **)unaff_r4 = register0x00000054;
    }
    if (!(bool)in_OV) {
      param_2 = iRam081c257c;
      param_4 = uRam081c2580;
      iVar2 = iRam081c2584;
      unaff_r6 = iRam081c2588;
      unaff_r8 = iRam081c258c;
      unaff_r9 = _FUN_081c2590;
      in_r12 = iRam081c2598;
      register0x00000054 = (BADSPACEBASE *)puRam081c259c;
      unaff_lr = uRam081c25a0;
    }
    if ((bool)in_CY) {
      iVar3 = *(int *)(in_r12 + -8);
      unaff_r8 = *(int *)(in_r12 + -0xc);
      iVar2 = *(int *)(in_r12 + -0x14);
      param_3 = *(undefined1 **)(in_r12 + -0x18);
      piVar1 = *(int **)(in_r12 + -0x1c);
    }
    else {
      register0x00000054 = *(BADSPACEBASE **)(param_2 + -4);
      iVar3 = *(int *)(param_2 + -0x10);
      param_4 = *(undefined4 *)(param_2 + -0x18);
      piVar1 = (int *)(param_2 + -0x1c);
      param_1 = *piVar1;
    }
    if (!(bool)in_NG) {
      unaff_lr = 0x81c25a8;
      param_1 = func_0x091982f0(param_1,piVar1,param_3,param_4);
      param_3 = extraout_r2;
    }
    if (!(bool)in_NG) {
      unaff_lr = 0x81c25ac;
      param_1 = func_0x09a0fe74();
      param_3 = extraout_r2_00;
    }
    if ((bool)in_OV) {
      software_smc(0xf);
    }
    if (!(bool)in_ZR) {
      *(BADSPACEBASE **)(iVar3 + -4) = register0x00000054;
      *(int *)(iVar3 + -8) = iVar3;
      *(undefined4 *)(iVar3 + -0xc) = unaff_r9;
      *(int *)(iVar3 + -0x10) = unaff_r6;
      *(undefined1 **)(iVar3 + -0x14) = param_3;
      *(undefined4 *)(iVar2 + -0xbf4) = unaff_pc;
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      *(undefined4 *)(unaff_r8 + -0xeea) = unaff_lr;
    }
    if (in_NG != in_OV) {
      *(char *)(unaff_r6 + 0x8e4) = (char)unaff_lr;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      unaff_r8 = param_1 * 3;
      *(int *)(param_1 * 3) = unaff_r8;
    }
    if (in_NG == in_OV) {
      *unaff_r7 = unaff_r8;
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      *param_3 = (char)register0x00000054;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

