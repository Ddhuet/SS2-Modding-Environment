
/* WARNING: Control flow encountered bad instruction data */

void FUN_081db460(void)

{
  int in_r3;
  int unaff_r11;
  int iVar1;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    iVar1 = unaff_r11 + (in_r3 >> 0xb);
    *(int *)iVar1 = iVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

