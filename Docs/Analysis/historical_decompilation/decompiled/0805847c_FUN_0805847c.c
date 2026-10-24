
void FUN_0805847c(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint *unaff_r9;
  undefined4 unaff_r11;
  undefined1 in_NG;
  bool in_ZR;
  bool in_CY;
  undefined8 uVar2;
  
  puVar1 = param_1;
  if (in_ZR) {
    puVar1 = param_1 + -0x140;
    *param_1 = unaff_r11;
    *unaff_r9 = (uint)puVar1;
  }
  if (in_CY) {
    puVar1 = (undefined4 *)((uint)puVar1 & 0x900);
  }
  uVar2 = func_0x070963ca(puVar1);
  if ((bool)in_NG) {
    *(undefined4 *)((int)uVar2 + (int)((ulonglong)uVar2 >> 0x20) * -0x1000000) = unaff_r11;
  }
  *(ushort *)(*DAT_080584a0 + 4) = *(ushort *)(*DAT_080584a0 + 4) | 0x40;
  return;
}

