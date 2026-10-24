
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0857e4a4(int param_1,int param_2)

{
  undefined4 *unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr10;
  
  if (in_NG != in_OV) {
    return *unaff_r5;
  }
  if (in_ZR || in_NG != in_OV) {
    param_2 = param_2 >> 0x13;
    in_OV = SBORROW4(param_1,param_2) != SBORROW4(param_1 - param_2,(uint)!in_CY);
    in_NG = (int)(param_1 - (param_2 + (uint)!in_CY)) < 0;
  }
  if (in_NG == in_OV) {
    coprocessor_store(0xd,in_cr10,&stack0x000002b4);
    *unaff_r4 = unaff_r10;
    unaff_r4[0x129] = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

