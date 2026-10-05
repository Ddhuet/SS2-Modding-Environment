
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08278398(void)

{
  int in_r3;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    return *(undefined4 *)(in_r3 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

