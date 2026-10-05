
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0861a192(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *extraout_r1;
  undefined4 unaff_r8;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  
  if (!(bool)in_ZR) {
    software_interrupt(0x90b580);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x086267ca();
    param_2 = extraout_r1;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    param_2 = (undefined4 *)((int)param_2 + -0x431);
    *param_2 = unaff_r8;
  }
  if (!(bool)in_OV) {
    return CONCAT44(param_2 + -5,param_2[-4]);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

