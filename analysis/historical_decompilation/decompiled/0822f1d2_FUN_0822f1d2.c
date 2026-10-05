
/* WARNING: Control flow encountered bad instruction data */

int FUN_0822f1d2(int param_1)

{
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    return param_1 + 0x24;
  }
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

