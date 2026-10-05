
/* WARNING: Control flow encountered bad instruction data */

void FUN_0857e4b0(void)

{
  undefined4 *unaff_r4;
  undefined4 unaff_r10;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *unaff_r4 = unaff_r10;
    unaff_r4[0x129] = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

