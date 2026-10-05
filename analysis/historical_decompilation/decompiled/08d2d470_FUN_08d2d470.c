
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08d2d478) */

undefined4 FUN_08d2d470(void)

{
  int unaff_r9;
  bool in_OV;
  
  if (!in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined4 *)(unaff_r9 + 4);
}

