
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x085a08be) */

undefined4 FUN_085a08b6(void)

{
  int unaff_r10;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    return *(undefined4 *)(unaff_r10 + -0x24);
  }
  if (!in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

