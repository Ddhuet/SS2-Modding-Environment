
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b3b082(void)

{
  undefined1 *in_r3;
  undefined1 unaff_r4;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    *in_r3 = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

