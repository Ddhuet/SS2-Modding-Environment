
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x082642d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_082642a0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  undefined4 extraout_r2;
  int extraout_r3;
  int unaff_r4;
  int unaff_r6;
  char *unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 uVar2;
  undefined1 auStack_24 [16];
  
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_r11 = unaff_r4 - (!(bool)in_CY + 0x29400000);
  }
  if ((bool)in_CY) {
    uRam082642a8 = 0x82642ac;
    uRam0826427c = param_1;
    uRam08264280 = param_3;
    iRam08264284 = param_4;
    iRam08264288 = unaff_r4;
    iRam0826428c = unaff_r6;
    pcRam08264290 = unaff_r7;
    puRam08264294 = unaff_r8;
    uRam08264298 = unaff_r9;
    uRam0826429c = in_r12;
    _FUN_082642a0 = (undefined1 *)register0x00000054;
    uRam082642a4 = unaff_lr;
  }
  if ((bool)in_OV) {
    coprocessor_function(4,7,2,in_cr6,in_cr13,in_cr6);
  }
  if ((bool)in_CY) {
    unaff_r10 = *(byte **)(unaff_r7 + -8);
    unaff_r9 = *(undefined4 *)(unaff_r7 + -0xc);
    unaff_r8 = *(undefined4 **)(unaff_r7 + -0x10);
    unaff_r6 = *(int *)(unaff_r7 + -0x14);
    param_4 = *(int *)(unaff_r7 + -0x1c);
    unaff_r7 = unaff_r7 + -0x20;
    param_1 = *(undefined4 *)unaff_r7;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_moveto(4,7,0,param_1,in_cr8,in_cr14);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar2 = func_0x064ca990();
    param_2 = (int)((ulonglong)uVar2 >> 0x20);
    param_1 = (undefined4)uVar2;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_r10[unaff_r11 >> 0x19] = (byte)unaff_r11;
  }
                    /* WARNING: Could not recover jumptable at 0x082642bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)in_CY) {
    uVar2 = (*(code *)*unaff_r8)();
    return uVar2;
  }
  if ((bool)in_OV) {
    unaff_r7 = (char *)(uint)*unaff_r10;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(3,in_cr12,param_1);
  }
  if (!(bool)in_NG) {
    coprocessor_loadlong(10,in_cr7,param_3);
  }
  if (in_NG == in_OV) {
    if (in_NG == in_OV) {
      return *(undefined8 *)(unaff_r7 + 4);
    }
    uVar1 = *(ushort *)(unaff_r6 + 0x9a);
    if ((bool)in_NG) {
      register0x00000054 = (BADSPACEBASE *)auStack_24;
    }
    else {
      *unaff_r7 = (char)unaff_r7 + -0x69;
    }
    if (!(bool)in_ZR) {
      *(BADSPACEBASE **)(param_4 + -4) = register0x00000054;
      *(undefined4 **)(param_4 + -8) = (undefined4 *)(uint)uVar1;
      *(undefined4 *)(param_4 + -0xc) = unaff_r9;
      *(int *)(param_4 + -0x10) = unaff_r6;
      *(undefined4 *)(param_4 + -0x14) = param_1;
    }
    return CONCAT44(param_2 + -0x52,*(undefined4 *)(uint)uVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

