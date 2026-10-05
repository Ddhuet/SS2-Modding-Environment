
/* WARNING: Control flow encountered bad instruction data */

void FUN_081a2b86(void)

{
  undefined4 *unaff_r7;
  undefined4 unaff_pc;
  
  *unaff_r7 = unaff_pc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

