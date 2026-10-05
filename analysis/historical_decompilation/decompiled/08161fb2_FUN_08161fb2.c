
/* WARNING: Control flow encountered bad instruction data */

void FUN_08161fb2(void)

{
  uint unaff_r5;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    in_CY = 0xc9ffffff < unaff_r5 || CARRY4(unaff_r5 + 0x36000000,(uint)in_CY);
  }
  if (!(bool)in_CY) {
    software_interrupt(0x361efa);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

