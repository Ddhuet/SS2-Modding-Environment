
/* WARNING: Control flow encountered bad instruction data */

void FUN_08228cbc(undefined4 param_1,undefined4 param_2,uint param_3)

{
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr3;
  undefined4 in_cr6;
  
                    /* WARNING: Could not recover jumptable at 0x08228cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_ZR) {
    if (!in_CY) {
      software_interrupt(0x252b30);
    }
    if (!in_NG) {
      coprocessor_movefromRt(10,3,1,in_cr6,in_cr3);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(param_3 & 0xda000000))();
  return;
}

