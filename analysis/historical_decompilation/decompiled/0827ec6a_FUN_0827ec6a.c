
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827ec6a(undefined4 param_1,int param_2)

{
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *(undefined1 *)(param_2 + 0xbd8) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

