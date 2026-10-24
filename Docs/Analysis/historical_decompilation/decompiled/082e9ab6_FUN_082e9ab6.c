
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x082e9ac6) */

void FUN_082e9ab6(void)

{
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr11;
  
  if (in_NG) {
    coprocessor_function(5,0xf,6,in_cr11,in_cr5,in_cr8);
  }
  coprocessor_loadlong(0,in_cr4,unaff_r6);
  if (!in_ZR) {
    coprocessor_storelong2(0xf,in_cr0,unaff_lr);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

