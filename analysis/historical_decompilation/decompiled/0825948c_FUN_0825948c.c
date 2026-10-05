
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825948c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool in_CY;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  if (in_CY) {
    coprocessor_moveto(0xb,1,7,param_3,in_cr13,in_cr15);
    func_0x089a256c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

