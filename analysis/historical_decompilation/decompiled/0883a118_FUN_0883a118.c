
/* WARNING: Control flow encountered bad instruction data */

void FUN_0883a118(void)

{
  undefined1 in_NG;
  undefined4 in_cr12;
  
  if (!(bool)in_NG) {
    func_0x07767674();
  }
  if (!(bool)in_NG) {
    coprocessor_loadlong(5,in_cr12,&stack0x00000000);
    coprocessor_loadlong(6,in_cr12,&stack0x00000000);
    func_0x07febac0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

