
/* WARNING: Control flow encountered bad instruction data */

void FUN_0805986c(int *param_1)

{
  bool in_CY;
  
  if (in_CY) {
    *param_1 = (int)param_1 + -0x412;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

