
void FUN_086e25d2(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  uint unaff_r10;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_CY;
  bool in_OV;
  
  puVar1 = param_1;
  if (in_NG != in_OV) {
    puVar1 = (undefined4 *)((int)param_1 * -0x3ff);
    *param_1 = unaff_r11;
  }
  if (in_NG) {
    puVar1 = (undefined4 *)((int)puVar1 * -0x3fff);
    *(char *)puVar1 = (char)unaff_r11;
  }
  if (in_NG == in_OV) {
    unaff_r10 = (uint)puVar1 & 1;
  }
  if (!in_CY) {
    puVar1[-0xc0] = unaff_r10;
  }
  if (in_NG == in_OV) {
    puVar2 = (undefined4 *)((int)puVar1 - (unaff_r5 >> 1));
    *puVar1 = puVar2;
    *puVar2 = 0x86e25ee;
    puVar2[-1] = register0x00000054;
    puVar2[-2] = unaff_r10;
    puVar2[-3] = unaff_r9;
    puVar2[-4] = unaff_r8;
  }
  if (!in_OV) {
    software_interrupt(0xa900);
  }
                    /* WARNING: Could not recover jumptable at 0x086e25ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_r5 ^ unaff_r10 >> 1))();
  return;
}

