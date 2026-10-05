
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08059534) */

void FUN_0805951c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  undefined1 *unaff_r8;
  int iVar1;
  undefined4 unaff_r9;
  undefined1 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG) {
    *unaff_r8 = 0;
  }
  iVar1 = 0x1002;
  if (in_NG) {
    iVar1 = -0x8058536;
    uRam00001002 = unaff_lr;
  }
  if (in_ZR) {
    param_3 = unaff_r5;
  }
  if (in_NG == (bool)in_OV) {
    *(undefined4 *)(param_2 + -4) = unaff_r9;
    *(undefined4 *)(param_2 + -8) = param_4;
    *(undefined4 *)(param_2 + -0xc) = param_3;
  }
  if (!in_ZR) {
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(iVar1 + 4) = unaff_r9;
    *(BADSPACEBASE **)(iVar1 + 8) = register0x00000054;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

