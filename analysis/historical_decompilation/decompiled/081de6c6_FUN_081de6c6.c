
/* WARNING: Control flow encountered bad instruction data */

void FUN_081de6c6(void)

{
  int unaff_r5;
  bool in_OV;
  undefined4 in_cr11;
  
  coprocessor_loadlong2(5,in_cr11,unaff_r5 + 0x27c);
  if (in_OV) {
    software_interrupt(0x62452a);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

