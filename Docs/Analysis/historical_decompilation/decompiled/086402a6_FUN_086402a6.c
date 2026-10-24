
/* WARNING: Control flow encountered bad instruction data */

void FUN_086402a6(undefined4 param_1,uint param_2)

{
  ushort *unaff_r7;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_CY && !in_ZR) {
    param_2 = (uint)*unaff_r7;
  }
  if (in_ZR) {
    func_0x06a410ae(param_1,param_2);
  }
  if (in_NG == in_OV) {
    func_0x09084536();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

