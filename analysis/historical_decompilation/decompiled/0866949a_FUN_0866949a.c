
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0866b8ca) */

undefined4 * FUN_0866949a(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint unaff_r5;
  uint unaff_r6;
  int unaff_r9;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr6;
  
  if (in_NG == in_OV) {
    software_interrupt(0xf3317f);
  }
  else {
    unaff_r11 = *param_2;
    param_2 = param_2 + 0x196b5e00;
  }
  if (in_ZR) {
    software_interrupt(0xf00ff0);
    software_interrupt(0xf00ff0);
    software_interrupt(0x100ff0);
  }
  piVar2 = param_2;
  if (!in_CY || in_ZR) {
    piVar2 = param_2 + 0xc0;
    *param_2 = unaff_r9;
  }
  if (in_ZR || in_NG != in_OV) {
    piVar2 = (int *)((int)piVar2 - ((uint)piVar2 >> 0xb));
  }
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (undefined4 *)(unaff_r6 & unaff_r5);
  *puVar1 = param_3;
  puVar1[-1] = piVar2;
  puVar1[-2] = puVar1;
  if (in_NG == in_OV) {
    return *(undefined4 **)(unaff_r11 + -0x18);
  }
  if (in_NG != in_OV) {
    coprocessor_movefromRt(0xc,5,in_cr6);
    coprocessor_movefromRt2(0xc,5,in_cr6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return puVar1;
}

