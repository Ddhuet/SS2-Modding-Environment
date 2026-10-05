
/* WARNING: Control flow encountered bad instruction data */

void FUN_08260752(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint unaff_r7;
  char in_NG;
  byte in_CY;
  char in_OV;
  undefined4 in_cr5;
  
  if (in_NG != in_OV) {
    software_interrupt(0xb9b5ad);
  }
  if (unaff_r7 < 0xc51 && (uint)in_CY <= unaff_r7 - 0xc50) {
    coprocessor_moveto2(0xb,5,unaff_r4,unaff_r5,in_cr5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

