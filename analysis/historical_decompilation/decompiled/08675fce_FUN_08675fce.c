
/* WARNING: Control flow encountered bad instruction data */

void FUN_08675fce(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 unaff_r11;
  bool in_CY;
  
  if (!in_CY) {
    *(undefined1 *)(param_4 - (param_3 >> 10)) = unaff_r11;
    *(char *)(param_2 - (param_3 >> 0xe)) = (char)param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

