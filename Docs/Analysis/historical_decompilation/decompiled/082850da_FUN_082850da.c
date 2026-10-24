
/* WARNING: Control flow encountered bad instruction data */

void FUN_082850da(void)

{
  undefined1 *unaff_r6;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0xcbb5dc);
  }
  *unaff_r6 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

