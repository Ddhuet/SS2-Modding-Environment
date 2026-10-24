
/* WARNING: Control flow encountered bad instruction data */

void FUN_0820f56c(void)

{
  undefined4 unaff_r5;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_load(5,in_cr11,unaff_r5);
  }
  if (in_CY && !in_ZR) {
    software_interrupt(0xa9b399);
  }
  if (in_NG != in_OV) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

