
/* WARNING: Control flow encountered bad instruction data */

void FUN_086de42e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  puVar1 = param_1;
  if (in_NG != in_OV) {
    puVar1 = (undefined4 *)((int)param_1 * -0x3ff);
    *param_1 = unaff_r11;
  }
  if (!(bool)in_OV) {
    puVar1[-1] = unaff_lr;
    puVar1[-2] = register0x00000054;
    puVar1[-3] = in_r12;
    puVar1[-4] = unaff_r11;
    puVar1[-5] = unaff_r6;
    puVar1[-6] = unaff_r5;
    puVar1[-7] = unaff_r4;
    puVar1[-8] = param_4;
    puVar1[-9] = param_3;
    puVar1[-10] = param_2;
    puVar1[-0xb] = puVar1;
    func_0x086fcc42();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

