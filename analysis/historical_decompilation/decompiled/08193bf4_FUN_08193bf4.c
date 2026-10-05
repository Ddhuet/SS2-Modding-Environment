
/* WARNING: Control flow encountered bad instruction data */

void FUN_08193bf4(void)

{
  int in_r3;
  int *unaff_r5;
  int unaff_r8;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_store(5,in_cr11,unaff_r8 + 0x304);
  }
  else {
    *unaff_r5 = unaff_r8;
    *(int *)(in_r3 + ((int)unaff_r5 + 0xb93) * 0x20) = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

