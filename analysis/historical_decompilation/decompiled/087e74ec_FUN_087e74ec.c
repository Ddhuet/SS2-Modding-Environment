
/* WARNING: Control flow encountered bad instruction data */

void FUN_087e74ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_r2;
  int extraout_r3;
  uint unaff_r4;
  int unaff_r5;
  undefined1 *puVar1;
  byte *unaff_r6;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr11;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,&stack0x00000094);
    coprocessor_load(4,in_cr8,unaff_r11 + 0x198);
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x87e74f8;
    param_1 = func_0x07600e94();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    coprocessor_load(6,in_cr6,unaff_r6);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar2 = unaff_r6;
  if (in_NG != in_OV) {
    pbVar2 = unaff_r6 + -((uint)unaff_r6 >> 0xc | (int)unaff_r6 << 0x14);
    *unaff_r6 = (byte)pbVar2;
  }
  pbVar3 = pbVar2;
  if ((bool)in_OV) {
    pbVar3 = pbVar2 + -((uint)pbVar2 >> 0xc | (int)pbVar2 << 0x14);
    *pbVar2 = (byte)pbVar3;
  }
  if ((bool)in_NG) {
    puVar1 = (undefined1 *)(unaff_r5 + -0xcdd);
    *puVar1 = (char)unaff_r8;
  }
  else {
    pbVar3 = (byte *)(uint)*pbVar3;
    unaff_r4 = (uint)*(byte *)(param_4 + -0x577);
    puVar1 = (undefined1 *)
             (uint)*(byte *)(*(byte *)(*(byte *)(*(byte *)(*(int *)(unaff_r5 + -0x8aa) + -0x558) -
                                                0x458) - 0x558) - 0x768);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *(undefined4 *)pbVar3 = param_1;
    *(undefined4 *)(pbVar3 + 4) = param_3;
    *(uint *)(pbVar3 + 8) = unaff_r4;
    *(undefined1 **)(pbVar3 + 0xc) = puVar1;
    *(byte **)(pbVar3 + 0x10) = pbVar3;
    *(undefined4 *)(pbVar3 + 0x14) = unaff_r8;
    *(undefined4 *)(pbVar3 + 0x18) = unaff_r10;
    *(undefined4 *)(pbVar3 + 0x1c) = in_r12;
    *(undefined4 *)(pbVar3 + 0x20) = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

