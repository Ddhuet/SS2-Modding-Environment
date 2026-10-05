
/* WARNING: Control flow encountered bad instruction data */

void FUN_08db966a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char in_ZR;
  
  *(char *)(param_4 + 0x19) = (char)param_2;
  if (in_ZR != '\0') {
    *(undefined4 *)(param_4 + 0x58) = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

