
undefined4 FUN_08624d4c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int unaff_lr;
  bool in_OV;
  undefined4 in_cr11;
  undefined4 in_cr15;
  undefined1 auStack_b4 [180];
  
  coprocessor_store2(5,in_cr11,param_2 + 0x2a4);
  coprocessor_store2(0xd,in_cr15,auStack_b4);
  if (!in_OV) {
    coprocessor_loadlong(0xf,in_cr15,unaff_lr + -0xb4);
  }
  return *(undefined4 *)(param_4 + 4);
}

