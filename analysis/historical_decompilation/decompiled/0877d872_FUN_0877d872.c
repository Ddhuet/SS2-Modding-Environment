
/* WARNING: Control flow encountered bad instruction data */

void FUN_0877d872(int param_1)

{
  int unaff_r4;
  char in_NG;
  bool in_CY;
  char in_OV;
  
  if (in_CY) {
    param_1 = func_0x083eaf02();
  }
  if (in_NG == in_OV) {
    *(char *)(unaff_r4 - (param_1 >> 2)) = (char)param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

