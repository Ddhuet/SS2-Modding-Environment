
/* WARNING: Control flow encountered bad instruction data */

void FUN_0865e248(void)

{
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  coprocessor_load2(5,in_cr11,0x865e250);
  if (in_ZR) {
    software_interrupt(0xf02ff0);
  }
  if (in_NG) {
    software_interrupt(0x800ff0);
  }
  if (!in_CY || in_ZR) {
    software_interrupt(0x753ffb);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

