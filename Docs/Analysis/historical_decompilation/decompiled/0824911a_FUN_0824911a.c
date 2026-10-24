
/* WARNING: Control flow encountered bad instruction data */

void FUN_0824911a(void)

{
  undefined2 *unaff_r6;
  undefined2 unaff_r11;
  
  *unaff_r6 = unaff_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

