
/* WARNING: Control flow encountered bad instruction data */

void FUN_0818655e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short unaff_r5;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  bool in_CY;
  
  if (!in_CY) {
    func_0x09fc1452(param_1,param_2,
                    (int)((ulonglong)
                          (CONCAT44(param_3,unaff_r11) +
                          (longlong)(short)((uint)unaff_r9 >> 0x10) * (longlong)unaff_r5) >> 0x20));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

