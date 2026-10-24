
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e5d2e(undefined4 param_1,uint param_2)

{
  int unaff_r5;
  bool in_CY;
  undefined4 in_cr0;
  
  if (!in_CY) {
    *(char *)(unaff_r5 - (param_2 >> 4)) = (char)unaff_r5;
  }
  coprocessor_loadlong2(7,in_cr0,0x82e5d3e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

