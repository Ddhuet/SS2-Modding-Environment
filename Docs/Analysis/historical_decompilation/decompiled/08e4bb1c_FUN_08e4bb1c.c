
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08e4bb20) */

void FUN_08e4bb1c(void)

{
  undefined1 uVar1;
  undefined1 *extraout_r1;
  undefined1 in_NG;
  bool in_ZR;
  
  if (in_ZR) {
    uVar1 = func_0x079340c4();
    if (!(bool)in_NG) {
      *extraout_r1 = uVar1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

