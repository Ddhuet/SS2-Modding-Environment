
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0868619a(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int unaff_r5;
  undefined4 unaff_lr;
  bool in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 unaff_d15;
  
  if (!(bool)in_ZR && in_NG == (bool)in_OV) {
    VectorHalvingAdd(unaff_d15,unaff_d15,1,0);
    puVar1 = param_2;
    if (!(bool)in_ZR && in_NG == (bool)in_OV) {
      puVar1 = (undefined4 *)((int)param_2 + -0x4f);
      *param_2 = param_4;
    }
    if (!in_NG) {
      unaff_lr = 0x86861ae;
      param_1 = func_0x08fb7832(param_1,puVar1);
    }
    *(undefined4 *)(param_1 + unaff_r5 * 0x1000) = unaff_lr;
    if (!(bool)in_ZR) {
      software_interrupt(0x1ae8a0);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xf1b559);
  return CONCAT44(param_2 + 7,param_2[1]);
}

