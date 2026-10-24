
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x088b1f82) */

void FUN_088b1f7e(void)

{
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr10;
  
  coprocessor_function2(6,0xc,3,in_cr5,in_cr10,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

