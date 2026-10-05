
/* WARNING: Control flow encountered bad instruction data */

void FUN_082438da(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  undefined1 extraout_r1;
  int extraout_r3;
  int unaff_r7;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr11;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_function(5,0xd,5,in_cr11,in_cr8,in_cr0);
  }
  if (!(bool)in_NG) {
    func_0x093460ee();
    param_4 = extraout_r3;
    param_2 = extraout_r1;
  }
  if ((bool)in_OV) {
    coprocessor_loadlong(3,in_cr7,param_4 + -0x1b4);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(undefined1 *)(unaff_r7 + 0xc51) = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

