
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bf3126(int param_1,undefined4 param_2)

{
  bool in_NG;
  bool in_CY;
  
  if (!in_NG) {
    param_1 = param_1 + -0x511;
  }
  if (!in_NG) {
    param_2 = 0x111;
  }
  if (!in_CY) {
    func_0x08c08692(param_1 + -0x1332,param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

