
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08c80604) */

void FUN_08c805f4(void)

{
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_NG) {
    return;
  }
  if (!in_CY || in_ZR) {
    func_0x07c7fd84();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

