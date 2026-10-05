
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b610e4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 unaff_r4;
  undefined1 *unaff_r5;
  byte *unaff_r6;
  uint unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined1 unaff_r11;
  undefined8 *in_r12;
  undefined8 *extraout_r12;
  undefined8 *extraout_r12_00;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar1 = func_0x0720ee40();
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY && !(bool)in_ZR) {
      uVar1 = func_0x06e43acc();
      param_3 = extraout_r2_00;
      in_r12 = extraout_r12_00;
    }
    if (in_NG != in_OV) {
      in_r12 = in_r12 + 0x3b;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      *in_r12 = uVar1;
      *(undefined4 *)(in_r12 + 1) = param_3;
      *(undefined4 *)((int)in_r12 + 0xc) = unaff_r4;
      *(undefined1 **)(in_r12 + 2) = unaff_r5;
      *(byte **)((int)in_r12 + 0x14) = unaff_r6;
      *(undefined4 *)(in_r12 + 3) = unaff_r8;
      *(int *)((int)in_r12 + 0x1c) = unaff_r9;
      *(undefined4 *)(in_r12 + 4) = unaff_r10;
      *(undefined8 **)((int)in_r12 + 0x24) = in_r12;
      *(undefined4 *)(in_r12 + 5) = 0x8b61100;
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      if ((bool)in_ZR || in_NG != in_OV) {
        coprocessor_store(1,in_cr10,unaff_r9 + 0x44);
      }
      if ((bool)in_NG) {
        *unaff_r5 = (char)unaff_r6;
      }
      if ((bool)in_OV) {
        unaff_r7 = (uint)*unaff_r6;
      }
      if ((bool)in_NG) {
        *(undefined1 *)(unaff_r7 - 0xa8a) = unaff_r11;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

