
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0810e00c) */
/* WARNING: Removing unreachable block (ram,0x0810e010) */
/* WARNING: Removing unreachable block (ram,0x0810e014) */
/* WARNING: Removing unreachable block (ram,0x0810e018) */
/* WARNING: Removing unreachable block (ram,0x0810e01c) */

void FUN_082533dc(void)

{
  undefined4 in_r3;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr4;
  
  if (!in_ZR) {
    if (in_NG == in_OV) {
      software_interrupt(0xd8f810);
    }
    if (in_CY) {
      coprocessor_load(8,in_cr4,in_r3);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

