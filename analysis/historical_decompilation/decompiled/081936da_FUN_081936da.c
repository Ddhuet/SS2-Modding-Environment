
/* WARNING: Control flow encountered bad instruction data */

void FUN_081936da(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_r12;
  int *unaff_lr;
  undefined1 in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  if (in_ZR) {
    in_r12 = in_r12 + 0x4e0;
  }
  if (in_CY) {
    in_r12 = *unaff_lr;
    param_3 = unaff_lr[-5];
  }
  if (in_OV) {
    in_NG = param_3 + 0x2c000000 < 0;
  }
  if (!in_OV || !SBORROW4(param_3,-0x2c000000)) {
    coprocessor_function(3,7,3,in_cr7,in_cr10,in_cr13);
    coprocessor_movefromRt(0xe,3,3,in_cr15,in_cr15);
  }
  if ((bool)in_NG) {
    coprocessor_loadlong(0xc,in_cr6,in_r12 + -0x1e4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

