
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08199560(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 unaff_r7;
  undefined4 *unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr11;
  undefined8 unaff_d13;
  undefined1 auStack_9c6 [2502];
  
  iVar1 = param_3;
  if (in_NG != (bool)in_OV) {
    iVar1 = param_3 + 0x60;
    coprocessor_load(5,in_cr11,param_3);
  }
  if (!in_NG) {
    register0x00000054 = (BADSPACEBASE *)auStack_9c6;
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    if (in_ZR || in_NG != (bool)in_OV) {
      register0x00000054 = *(BADSPACEBASE **)(param_1 + -8);
      unaff_r7 = *(undefined4 *)(param_1 + -0x10);
    }
    if (in_NG) {
      *(undefined8 *)(iVar1 + -0x2a4) = unaff_d13;
    }
    coprocessor_storelong(0xf,in_cr1,unaff_r7);
    if (!in_CY) {
      coprocessor_load(8,in_cr1,register0x00000054);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *unaff_lr;
}

