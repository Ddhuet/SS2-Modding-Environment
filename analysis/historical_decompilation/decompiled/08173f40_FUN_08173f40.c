
/* WARNING: Control flow encountered bad instruction data */

void FUN_08173f40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 extraout_r2;
  undefined4 unaff_r5;
  int iVar2;
  uint unaff_r7;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr14;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (!(bool)in_NG) {
    unaff_r7 = unaff_r11 +
               (int)(short)unaff_lr * (int)(short)((uint)unaff_r5 >> 0x10) +
               (int)(short)((uint)unaff_lr >> 0x10) * (int)(short)unaff_r5;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(1,in_cr6,unaff_r11 + 0x3bc);
  }
  else {
    unaff_lr = 0x8173f54;
    uVar3 = func_0x09d68a7c();
    param_3 = extraout_r2;
  }
  puVar1 = (undefined1 *)((ulonglong)uVar3 >> 0x20);
  iVar2 = (int)puVar1 - (((uint)uVar3 >> 0x1b | (uint)uVar3 << 5) + (uint)!(bool)in_CY);
  if ((bool)in_OV) {
    puVar1 = puVar1 + (unaff_r7 >> 0x1c | unaff_r7 << 4);
    *puVar1 = (char)unaff_r11;
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(6,in_cr14,0x8173c6c);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *unaff_r9 = puVar1;
    unaff_r9[1] = param_3;
    unaff_r9[2] = unaff_r5;
    unaff_r9[3] = iVar2;
    unaff_r9[4] = unaff_r7;
    unaff_r9[5] = unaff_r9;
    unaff_r9[6] = unaff_r10;
    unaff_r9[7] = register0x00000054;
    unaff_r9[8] = unaff_lr;
  }
  if ((bool)in_ZR) {
    software_interrupt(0x45c1f6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

