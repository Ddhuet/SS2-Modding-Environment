
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c7fa54(void)

{
  undefined4 in_cr11;
  
  coprocessor_loadlong2(5,in_cr11,&stack0x00000274);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

