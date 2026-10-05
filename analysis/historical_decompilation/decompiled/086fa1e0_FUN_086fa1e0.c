
/* WARNING: Control flow encountered bad instruction data */

void FUN_086fa1e0(void)

{
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    func_0x083279a8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

