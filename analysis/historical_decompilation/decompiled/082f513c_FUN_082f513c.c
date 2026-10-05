
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f513c(undefined4 param_1,int param_2)

{
  undefined1 in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr10;
  
  if (!in_OV) {
    in_ZR = param_2 == !in_CY + 0xfc00000;
  }
  if ((bool)in_ZR) {
    coprocessor_function(9,4,7,in_cr10,in_cr2,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

