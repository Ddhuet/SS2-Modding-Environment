
/* WARNING: Control flow encountered bad instruction data */

void FUN_080a55c4(uint param_1,int param_2)

{
  uint unaff_r8;
  undefined1 in_NG;
  undefined1 in_OV;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr11;
  
  if ((bool)in_NG) {
    coprocessor_load(5,in_cr11,param_2 + -0x1c0);
    param_1 = func_0x08538614();
  }
  if (!(bool)in_OV) {
    in_NG = (int)(unaff_r8 & param_1 << (param_1 & 0xff)) < 0;
  }
  if ((bool)in_NG) {
    coprocessor_function(2,1,0,in_cr2,in_cr0,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

