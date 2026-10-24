
/* WARNING: Control flow encountered bad instruction data */

void FUN_087c90e8(void)

{
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  coprocessor_movefromRt(5,7,2,in_cr15,in_cr11);
  coprocessor_movefromRt(5,7,2,in_cr15,in_cr11);
  coprocessor_function(5,0xf,3,in_cr7,in_cr15,in_cr11);
  coprocessor_function(7,0xe,2,in_cr7,in_cr15,in_cr9);
  software_interrupt(0xef7457);
  software_interrupt(0xef7447);
  software_interrupt(0xef6445);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

