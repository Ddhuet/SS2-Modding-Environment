
/* WARNING: Control flow encountered bad instruction data */

void FUN_0802e5c0(uint param_1,undefined1 param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  int unaff_r5;
  uint unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  byte *unaff_r9;
  int unaff_r10;
  int unaff_r11;
  byte *in_r12;
  int unaff_lr;
  bool in_ZR;
  
  if (in_ZR) {
    *param_4 = 0x802e5c8;
    param_4[-1] = register0x00000054;
    param_4[-2] = in_r12;
    param_4[-3] = unaff_r10;
    param_4[-4] = unaff_r8;
    param_4[-5] = unaff_r7;
    param_4[-6] = unaff_r5;
    param_4[-7] = param_1;
    param_1 = unaff_r6 & unaff_r8 << (param_1 & 0xff);
    *param_4 = 0x802e5d0;
    param_4[-1] = register0x00000054;
    param_4[-2] = in_r12;
    param_4[-3] = unaff_r10;
    param_4[-4] = unaff_r9;
    param_4[-5] = unaff_r6;
    param_4[-6] = param_4;
    param_4[-7] = param_1;
  }
  *(undefined1 *)(unaff_lr + unaff_r8 * 0x1000000) = param_2;
  bVar1 = *(byte *)(unaff_r11 + unaff_r10 * -0x1000000);
  *(byte *)(param_1 + unaff_r8 * -0x1000000) = bVar1;
  *(byte *)(param_4 + unaff_r10 * -0x400000) = bVar1;
  *(uint *)(param_3 + unaff_r10 * 0x1000000 + unaff_r8 * -0x1000000) = (uint)bVar1;
  *(uint *)(unaff_r5 + unaff_r10 * -0x1000000) = (uint)bVar1;
  *unaff_r9 = bVar1;
  *in_r12 = bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

