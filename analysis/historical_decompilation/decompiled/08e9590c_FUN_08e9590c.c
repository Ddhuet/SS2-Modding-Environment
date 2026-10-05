
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08e95918) */
/* WARNING: Removing unreachable block (ram,0x08e9591c) */
/* WARNING: Removing unreachable block (ram,0x08e95910) */

undefined4 FUN_08e9590c(undefined4 param_1)

{
  bool in_ZR;
  
  if (!in_ZR) {
    return param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

