
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_083373a6(void)

{
  undefined8 *unaff_r4;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    return *unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

