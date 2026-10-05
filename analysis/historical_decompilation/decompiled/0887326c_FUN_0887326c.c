
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08873278) */
/* WARNING: Removing unreachable block (ram,0x0887327c) */
/* WARNING: Removing unreachable block (ram,0x08873280) */
/* WARNING: Removing unreachable block (ram,0x08873284) */
/* WARNING: Removing unreachable block (ram,0x08873288) */
/* WARNING: Removing unreachable block (ram,0x0887328c) */

undefined4 FUN_0887326c(undefined4 param_1)

{
  int unaff_r11;
  bool in_ZR;
  bool in_CY;
  undefined1 in_OV;
  
  if (!in_CY || in_ZR) {
    param_1 = func_0x06fe08e0();
  }
  if (!(bool)in_OV) {
    return *(undefined4 *)(unaff_r11 + 4);
  }
  return param_1;
}

