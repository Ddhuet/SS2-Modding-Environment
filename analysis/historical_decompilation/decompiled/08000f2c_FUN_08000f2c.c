
/* WARNING: Control flow encountered bad instruction data */

void FUN_08000f2c(void)

{
  bool in_NG;
  bool in_ZR;
  
  if (!in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR) {
    func_0x08632fac();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

