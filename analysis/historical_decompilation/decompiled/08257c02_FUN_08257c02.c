
/* WARNING: Control flow encountered bad instruction data */

void FUN_08257c02(void)

{
  undefined4 in_cr6;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  coprocessor_function2(5,0xc,7,in_cr11,in_cr10,in_cr6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

