
/* WARNING: Control flow encountered bad instruction data */

void FUN_083025fc(undefined4 param_1)

{
  undefined4 unaff_r8;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr5;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (!(bool)in_ZR) {
    param_1 = func_0x083afd68();
  }
  if (in_NG != in_OV) {
    coprocessor_moveto(8,7,7,&stack0x00000000,in_cr12,in_cr5);
  }
  coprocessor_moveto(10,0,6,param_1,in_cr1,in_cr13);
  if ((bool)in_ZR) {
    coprocessor_storelong(7,in_cr13,unaff_r8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

