
/* WARNING: Control flow encountered bad instruction data */

void FUN_08262c06(void)

{
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  if (in_ZR) {
    coprocessor_movefromRt(0xc,7,6,in_cr12,in_cr15);
  }
  if (!in_NG) {
    software_interrupt(0x493521);
  }
  if (!in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

