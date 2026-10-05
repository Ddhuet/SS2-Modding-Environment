
/* WARNING: Control flow encountered bad instruction data */

void FUN_08210b38(void)

{
  int unaff_r10;
  bool in_ZR;
  bool in_CY;
  undefined1 in_OV;
  
  if (in_ZR) {
    in_OV = SBORROW4(0x31c00000,unaff_r10) != SBORROW4(0x31c00000 - unaff_r10,(uint)!in_CY);
  }
  if (!(bool)in_OV) {
    software_interrupt(0x50315d);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

