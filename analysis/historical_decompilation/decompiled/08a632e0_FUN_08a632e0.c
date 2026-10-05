
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a632f0) */
/* WARNING: Removing unreachable block (ram,0x08a632fc) */

void FUN_08a632e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r11;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr15;
  
  if (!in_NG) {
    *(char *)(unaff_r11 + 0x5bb) = (char)unaff_r11;
  }
  if (!in_ZR) {
    coprocessor_store(0,in_cr15,param_4);
    coprocessor_loadlong(0,in_cr0,0x8a63330);
    coprocessor_loadlong(0,in_cr0,param_1);
    if (in_NG == (bool)in_OV) {
      software_interrupt(0);
      software_interrupt(0);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)0x0)();
  return;
}

