
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_082659f0(void)

{
  undefined4 *unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    return *unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

