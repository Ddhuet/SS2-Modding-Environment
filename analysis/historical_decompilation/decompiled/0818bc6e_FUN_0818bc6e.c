
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0818bc96) */

void FUN_0818bc6e(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint unaff_r4;
  undefined4 unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  undefined4 unaff_r9;
  uint unaff_r10;
  undefined4 unaff_r11;
  uint in_r12;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr8;
  undefined4 in_cr13;
  
  if ((bool)in_NG != in_OV) {
    *unaff_r8 = param_3;
    unaff_r8[1] = unaff_r6;
    unaff_r8[2] = unaff_r7;
    unaff_r8[3] = (uint)unaff_r8;
    unaff_r8[4] = unaff_r10;
    unaff_r8[5] = in_r12;
    unaff_r8[6] = (uint)register0x00000054;
    unaff_r8[7] = 0x818bc76;
  }
  coprocessor_load2(0xb,in_cr13,unaff_lr + 0x39c);
  coprocessor_function(0xc,1,1,in_cr0,in_cr13,in_cr8);
  if (in_CY) {
    uVar1 = unaff_r4 ^ (param_3 >> 0x19 | param_3 << 7);
    in_NG = (int)uVar1 < 0;
    in_ZR = uVar1 == 0;
  }
  if (in_OV) {
    in_NG = (int)(param_3 ^ 0xf00) < 0;
    in_ZR = (param_3 ^ 0xf00) == 0;
  }
  if (!(bool)in_ZR) {
    *(BADSPACEBASE **)(unaff_r10 - 4) = register0x00000054;
    *(undefined4 *)(unaff_r10 - 8) = unaff_r11;
    *(uint *)(unaff_r10 - 0xc) = unaff_r10;
    *(undefined4 *)(unaff_r10 - 0x10) = unaff_r9;
    *(uint **)(unaff_r10 - 0x14) = unaff_r8;
    *(uint *)(unaff_r10 - 0x18) = unaff_r6;
    *(undefined4 *)(unaff_r10 - 0x1c) = unaff_r5;
    *(uint *)(unaff_r10 - 0x20) = param_3;
    *(undefined4 *)(unaff_r10 - 0x24) = param_2;
  }
  if (!(bool)in_NG) {
    in_ZR = &stack0x00000000 == (undefined1 *)0xef0;
  }
  if ((bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

