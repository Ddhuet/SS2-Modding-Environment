
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x079f5650) */
/* WARNING: Removing unreachable block (ram,0x079f5680) */
/* WARNING: Removing unreachable block (ram,0x079f5644) */
/* WARNING: Removing unreachable block (ram,0x08b08fa0) */
/* WARNING: Removing unreachable block (ram,0x08b08f88) */

undefined4 FUN_08b08f6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 *unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (!(bool)in_CY || (bool)in_ZR) {
    *(undefined4 *)(unaff_r5 + 4) = param_2;
    *(undefined4 *)(unaff_r5 + 8) = param_4;
    *(undefined4 *)(unaff_r5 + 0xc) = unaff_r4;
    *(undefined4 *)(unaff_r5 + 0x10) = unaff_r8;
    *(undefined4 **)(unaff_r5 + 0x14) = unaff_r10;
    *(undefined4 *)(unaff_r5 + 0x18) = in_r12;
    *(BADSPACEBASE **)(unaff_r5 + 0x1c) = register0x00000054;
    *(undefined4 *)(unaff_r5 + 0x20) = 0x8b08f74;
    unaff_r5 = unaff_r5 + 0x20;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    uVar1 = func_0x0905a930();
    param_4 = extraout_r3;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *unaff_r10 = (int)((ulonglong)uVar1 >> 0x20);
    unaff_r10[1] = param_4;
    unaff_r10[2] = unaff_r4;
    unaff_r10[3] = unaff_r5;
    unaff_r10[4] = unaff_r7;
    unaff_r10[5] = unaff_r8;
    unaff_r10[6] = unaff_r9;
    unaff_r10[7] = unaff_r11;
    unaff_r10[8] = register0x00000054;
    unaff_r10[9] = 0x8b08f88;
  }
  if (!(bool)in_ZR) {
    return (int)uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

