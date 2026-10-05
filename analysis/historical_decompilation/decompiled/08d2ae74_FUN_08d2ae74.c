
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d2ae74(void)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_CY && !in_ZR) {
    func_0x0a818500();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

