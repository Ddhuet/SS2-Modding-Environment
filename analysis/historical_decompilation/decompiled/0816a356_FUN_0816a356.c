
/* WARNING: Control flow encountered bad instruction data */

void FUN_0816a356(void)

{
  undefined4 in_cr3;
  undefined4 in_cr11;
  
  coprocessor_function(5,0xb,0,in_cr11,in_cr11,in_cr3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

