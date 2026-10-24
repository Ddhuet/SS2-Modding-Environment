
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0830a476(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 *unaff_r9;
  char in_NG;
  bool in_CY;
  char in_OV;
  undefined8 unaff_d12;
  undefined8 in_d29;
  
  if (in_NG != in_OV) {
    return *unaff_r9;
  }
  if (in_NG != in_OV) {
    return CONCAT44(param_2,*(undefined4 *)(param_3 + 4));
  }
  uVar1 = VectorGetElement(unaff_d12,0,4,0);
  VectorMultiplyAccumulate(in_d29,uVar1,4);
  if (in_CY) {
    func_0x0898c86e();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

