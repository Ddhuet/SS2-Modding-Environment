
/* WARNING: Control flow encountered bad instruction data */

void FUN_0804506c(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  uint extraout_r2;
  uint uVar2;
  uint extraout_r3;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  uint unaff_r11;
  uint extraout_r12;
  uint uVar3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 uVar4;
  
  if (in_NG != in_OV) {
    unaff_r11 = param_3 + (param_1 << (unaff_r5 & 0xff));
  }
  uVar3 = 0x8045074;
  uVar4 = func_0x06202f96();
  puVar1 = (uint *)uVar4;
  uVar2 = extraout_r2;
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar2 = unaff_r7 & (int)puVar1 << 0x10;
  }
  if ((bool)in_OV) {
    *puVar1 = 0x8045074;
    puVar1[-1] = unaff_r11;
    puVar1[-2] = (uint)((ulonglong)uVar4 >> 0x20);
  }
  if ((bool)in_ZR) {
    uVar2 = unaff_r9 - (extraout_r3 >> 3 | extraout_r3 << 0x1d);
    uVar3 = (uint)puVar1 & unaff_r6;
  }
  if ((bool)in_OV) {
    *puVar1 = uVar3;
    puVar1[-1] = unaff_r11;
    puVar1[-2] = extraout_r3;
    puVar1[-3] = uVar2;
    puVar1[-4] = (uint)puVar1;
  }
  else {
    *puVar1 = extraout_r12;
    puVar1[-1] = unaff_r11;
    puVar1[-2] = unaff_r6;
  }
  if ((bool)in_CY) {
    puVar1[-1] = uVar3;
    puVar1[-2] = (uint)puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

