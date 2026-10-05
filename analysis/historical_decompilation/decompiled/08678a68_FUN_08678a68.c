
/* WARNING: Control flow encountered bad instruction data */

void FUN_08678a68(int param_1,int param_2,undefined1 param_3,undefined4 param_4)

{
  uint uVar1;
  uint unaff_r4;
  undefined4 unaff_r5;
  uint unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  uint unaff_r10;
  undefined1 *unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  bool bVar2;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined1 auStack_4 [4];
  
  bVar2 = false;
  if (in_ZR) {
    uVar1 = param_1 * 0x400;
    in_CY = CARRY4(unaff_r10,uVar1);
    in_OV = SCARRY4(unaff_r10,uVar1);
    unaff_r11 = (undefined1 *)(unaff_r10 + uVar1);
    in_NG = (int)unaff_r11 < 0;
    bVar2 = unaff_r11 == (undefined1 *)0x0;
  }
  if (bVar2) {
    coprocessor_load(0,in_cr0,in_r12);
  }
  if (!(bool)in_CY || bVar2) {
    coprocessor_function(0xd,10,0,in_cr9,in_cr0,in_cr0);
  }
  if (bVar2) {
    *(uint *)(param_1 + -0xd0) = unaff_r10;
    *(undefined1 **)(param_1 + -0xcc) = unaff_r11;
  }
  if (in_NG != in_OV) {
    *(undefined4 *)(in_r12 + -4) = 0x8678a80;
    *(BADSPACEBASE **)(in_r12 + -8) = register0x00000054;
    *(uint *)(in_r12 + -0xc) = unaff_r10;
    *(undefined4 *)(in_r12 + -0x10) = unaff_r9;
    *(undefined4 *)(in_r12 + -0x14) = unaff_r7;
    *(undefined4 *)(in_r12 + -0x18) = unaff_r5;
    *(uint *)(in_r12 + -0x1c) = unaff_r4;
    *(undefined4 *)(in_r12 + -0x20) = param_4;
    *(int *)(in_r12 + -0x24) = param_2;
    unaff_r11 = (undefined1 *)(unaff_r6 & unaff_r6 << 0x10);
  }
  if ((bool)in_OV) {
    coprocessor_function(0,0,5,in_cr9,in_cr1,in_cr11);
  }
  if (bVar2) {
    register0x00000054 = (BADSPACEBASE *)auStack_4;
  }
  if ((bool)in_CY) {
    *unaff_r11 = param_3;
  }
  if ((bool)in_OV) {
    *(undefined4 *)(param_2 + -4) = 0x8678a94;
    *(BADSPACEBASE **)(param_2 + -8) = register0x00000054;
    *(int *)(param_2 + -0xc) = in_r12;
    *(uint *)(param_2 + -0x10) = unaff_r10;
    *(uint *)(param_2 + -0x14) = unaff_r6;
    *(undefined4 *)(param_2 + -0x18) = unaff_r5;
    *(undefined4 *)(param_2 + -0x1c) = param_4;
    *(int *)(param_2 + -0x20) = param_2;
    *(uint *)(unaff_r4 + (unaff_r4 >> 0x11)) = unaff_r6;
  }
  if (in_NG == in_OV) {
    coprocessor_moveto(4,7,3,param_1,in_cr0,in_cr8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

