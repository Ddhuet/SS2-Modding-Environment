
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080b9fc8) */

void FUN_080b9fc4(undefined4 param_1)

{
  undefined4 *unaff_r4;
  bool in_NG;
  bool in_ZR;
  
  if (!in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR) {
    *unaff_r4 = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

