
/* WARNING: Control flow encountered bad instruction data */

void FUN_081dc7d2(void)

{
  undefined4 *unaff_r8;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    return;
  }
  if (!in_ZR) {
    *unaff_r8 = unaff_pc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

