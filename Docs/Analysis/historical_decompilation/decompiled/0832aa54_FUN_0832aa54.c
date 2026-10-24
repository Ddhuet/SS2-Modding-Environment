
/* WARNING: Control flow encountered bad instruction data */

void FUN_0832aa54(undefined4 param_1,int param_2)

{
  int extraout_r1;
  int unaff_r7;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr15;
  
  if (!in_CY) {
    func_0x08fb5a88();
    param_2 = extraout_r1;
  }
  if ((bool)in_ZR) {
    coprocessor_load(0xf,in_cr3,unaff_r7 + -0xe8);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(8,in_cr15,param_2 + 0x3d8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

