
/* WARNING: Control flow encountered bad instruction data */

void FUN_082467c8(void)

{
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    func_0x06bb3f40();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

