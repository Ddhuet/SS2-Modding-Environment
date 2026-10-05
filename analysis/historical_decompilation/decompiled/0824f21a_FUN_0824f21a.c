
/* WARNING: Control flow encountered bad instruction data */

void FUN_0824f21a(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int extraout_r1;
  int iVar3;
  undefined4 unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int unaff_lr;
  bool in_CY;
  bool in_OV;
  undefined1 uVar4;
  undefined4 in_cr2;
  undefined4 in_cr6;
  
  if (!in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = unaff_r9 & (int)unaff_r5 >> 0x12;
  uVar4 = (int)uVar2 < 0;
  coprocessor_load2(0,in_cr2,unaff_lr + -0x4c);
  if (!(bool)((byte)(unaff_r5 >> 0x11) & 1)) {
    *(undefined4 *)(param_3 + -4) = 0x824f22e;
    *(int *)(param_3 + -8) = unaff_lr;
    *(BADSPACEBASE **)(param_3 + -0xc) = register0x00000054;
    *(undefined4 *)(param_3 + -0x10) = unaff_r10;
    *(uint *)(param_3 + -0x14) = unaff_r9;
    *(undefined4 *)(param_3 + -0x18) = unaff_r7;
    *(undefined4 *)(param_3 + -0x1c) = unaff_r6;
    *(undefined4 *)(param_3 + -0x20) = unaff_r4;
    *(int *)(param_3 + -0x24) = param_3;
    *(int *)(param_3 + -0x28) = param_2;
    *(uint *)(param_3 + -0x2c) = uVar2;
  }
  iVar3 = param_3;
  if (in_OV) {
    iVar3 = param_3 + -0xec;
    coprocessor_storelong(0xf,in_cr6,param_3);
  }
  if ((bool)uVar4 == in_OV) {
    func_0x069b2566(uVar2,param_2,iVar3);
    param_2 = extraout_r1;
  }
  if ((bool)uVar4) {
    *(undefined4 *)(param_2 + -0x8e8) = unaff_r11;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xe06e,0x824f23a);
  (*pcVar1)();
}

