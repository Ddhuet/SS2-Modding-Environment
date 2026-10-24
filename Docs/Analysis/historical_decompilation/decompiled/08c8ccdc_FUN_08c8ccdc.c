
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c8ccdc(void)

{
  undefined1 in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    func_0x083ba1ac();
  }
  if ((bool)in_NG) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

