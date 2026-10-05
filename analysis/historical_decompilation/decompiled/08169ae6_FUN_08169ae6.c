
/* WARNING: Control flow encountered bad instruction data */

void FUN_08169ae6(void)

{
  undefined1 unaff_r5;
  undefined1 *unaff_r8;
  
  software_interrupt(0xe0b51b);
  *unaff_r8 = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

