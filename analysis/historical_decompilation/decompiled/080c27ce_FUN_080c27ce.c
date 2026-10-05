
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_080c27ce(void)

{
  int unaff_r4;
  bool in_ZR;
  
  if (!in_ZR) {
    return *(undefined8 *)(unaff_r4 + -0x24);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

