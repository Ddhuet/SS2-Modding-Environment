
/* WARNING: Control flow encountered bad instruction data */

void FUN_08682af4(void)

{
  int in_r12;
  bool in_ZR;
  bool in_CY;
  
  if (in_ZR) {
    software_interrupt(0xb10ff1);
  }
                    /* WARNING: Could not recover jumptable at 0x08682afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_CY) {
    (*(code *)(in_r12 >> 3 & 0x8682b04))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

