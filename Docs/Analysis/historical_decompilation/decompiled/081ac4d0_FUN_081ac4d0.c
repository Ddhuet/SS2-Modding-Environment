
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x089ef4d8) */

undefined8 FUN_081ac4d0(void)

{
  int unaff_r9;
  bool in_ZR;
  
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined8 *)(unaff_r9 + 4);
}

