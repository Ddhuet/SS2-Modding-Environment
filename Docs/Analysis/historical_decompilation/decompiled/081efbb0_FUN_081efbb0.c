
/* WARNING: Control flow encountered bad instruction data */

void FUN_081efbb0(void)

{
  int unaff_r7;
  undefined4 unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr10;
  
  if (in_NG == in_OV) {
    software_interrupt(0xb2b5b8);
    *(undefined4 *)(unaff_r7 + 0xaac) = unaff_r10;
  }
  if (!in_CY || in_ZR) {
    coprocessor_load(1,in_cr10,0x81efe4c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

