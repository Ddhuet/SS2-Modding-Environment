
/* WARNING: Control flow encountered bad instruction data */

void FUN_080d3a28(void)

{
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0xb8b5b8);
  }
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xd6cfc7);
  }
                    /* WARNING: Could not recover jumptable at 0x080d3a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_ZR) {
    (*(code *)(0x3a800000 - (unaff_lr + (uint)!in_CY)))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

