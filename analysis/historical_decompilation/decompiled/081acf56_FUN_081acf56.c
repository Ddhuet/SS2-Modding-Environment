
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08beab32) */
/* WARNING: Removing unreachable block (ram,0x081acf86) */
/* WARNING: Removing unreachable block (ram,0x08beab16) */

void FUN_081acf56(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_r3;
  uint unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  byte *unaff_r7;
  byte *pbVar3;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  undefined1 *unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 unaff_lr;
  undefined1 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr13;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    *unaff_r11 = (char)unaff_r11;
  }
  if ((bool)in_ZR) {
    *(BADSPACEBASE **)(param_3 + -4) = register0x00000054;
    *(int *)(param_3 + -8) = unaff_r10;
    *(undefined4 *)(param_3 + -0xc) = unaff_r9;
    *(undefined4 *)(param_3 + -0x10) = unaff_r8;
    *(byte **)(param_3 + -0x14) = unaff_r7;
    *(undefined4 **)(param_3 + -0x18) = unaff_r6;
    *(undefined4 *)(param_3 + -0x1c) = unaff_r5;
    *(int *)(param_3 + -0x20) = param_4;
    *(int *)(param_3 + -0x24) = param_3;
    *(undefined4 *)(param_3 + -0x28) = param_1;
  }
  else {
    unaff_lr = 0x81acf62;
    uVar4 = func_0x07269efa(param_1,param_2,param_3);
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar1 = (undefined4)uVar4;
  if ((bool)in_CY) {
    coprocessor_function(0,0xb,7,in_cr13,in_cr6,in_cr6);
  }
  if ((bool)in_ZR) {
    software_interrupt(0x30f12d);
    pbVar3 = unaff_r7;
  }
  else {
    pbVar3 = unaff_r7 + (unaff_r4 >> 0xf | unaff_r4 << 0x11);
    register0x00000054 = (BADSPACEBASE *)(uint)*unaff_r7;
    in_r12 = *(undefined4 *)(unaff_r10 + -4);
    unaff_r9 = *(undefined4 *)(unaff_r10 + -0x10);
    unaff_r5 = *(undefined4 *)(unaff_r10 + -0x14);
    param_4 = *(int *)(unaff_r10 + -0x18);
    uVar2 = *(undefined4 *)(unaff_r10 + -0x1c);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *(undefined1 *)register0x00000054 = unaff_pc;
    *unaff_r6 = uVar1;
    unaff_r6[1] = uVar2;
    unaff_r6[2] = param_4;
    unaff_r6[3] = unaff_r4;
    unaff_r6[4] = unaff_r5;
    unaff_r6[5] = unaff_r6;
    unaff_r6[6] = pbVar3;
    unaff_r6[7] = unaff_r9;
    unaff_r6[8] = in_r12;
    unaff_r6[9] = unaff_lr;
    unaff_r6[10] = 0x81acf7e;
  }
  if (!(bool)in_CY) {
    coprocessor_store(0,in_cr3,param_4 + -0x54);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR) {
    uVar1 = 0;
  }
  else {
    uVar2 = 899;
  }
  if (in_NG != in_OV) {
    func_0x08c2641e(uVar1,uVar2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

