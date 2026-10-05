
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08253526) */

void FUN_08253516(undefined4 param_1,int param_2)

{
  undefined4 unaff_lr;
  bool in_ZR;
  undefined4 in_cr3;
  undefined4 in_cr11;
  
  if (in_ZR) {
    coprocessor_loadlong(5,in_cr11,unaff_lr);
    coprocessor_load(0xc,in_cr3,param_2 + -0x11c);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

