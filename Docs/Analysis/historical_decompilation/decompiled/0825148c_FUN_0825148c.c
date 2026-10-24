
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825148c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 *unaff_lr;
  undefined4 unaff_pc;
  bool in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_ZR) {
    *unaff_lr = in_r12;
  }
  else {
    coprocessor_moveto(5,0,4,unaff_r11,in_cr6,in_cr11);
  }
  puVar1 = param_1;
  if ((bool)in_CY) {
    puVar1 = param_1 + -0x173;
    *param_1 = unaff_pc;
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    coprocessor_moveto(0xc,5,7,unaff_r9,in_cr12,in_cr12);
  }
  if (in_NG) {
    func_0x08dc389c(puVar1);
  }
  if (!(bool)in_CY) {
    coprocessor_function(6,2,5,in_cr13,in_cr11,in_cr14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

