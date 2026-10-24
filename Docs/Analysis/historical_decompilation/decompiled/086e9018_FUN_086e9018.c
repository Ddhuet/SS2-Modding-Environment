
/* WARNING: Control flow encountered bad instruction data */

void FUN_086e9018(int param_1)

{
  int unaff_r10;
  undefined2 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  if (in_NG == in_OV) {
    param_1 = func_0x083d6428();
  }
  if ((bool)in_CY) {
    in_OV = SBORROW4(param_1,unaff_r10);
    param_1 = param_1 - unaff_r10;
    in_NG = param_1 < 0;
    in_ZR = param_1 == 0;
  }
  coprocessor_movefromRt(0,0,7,in_cr15,in_cr13);
  if ((bool)in_ZR || in_NG != in_OV) {
    *(char *)(param_1 + 0xf20) = (char)unaff_pc;
  }
  if ((bool)in_ZR) {
    *(undefined2 *)(int)*(short *)(param_1 + 0x90) = unaff_pc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

