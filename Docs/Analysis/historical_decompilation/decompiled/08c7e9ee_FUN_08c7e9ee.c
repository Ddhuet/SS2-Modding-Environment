
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c7e9ee(void)

{
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    func_0x0712bf4a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

