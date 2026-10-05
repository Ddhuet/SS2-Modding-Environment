
/* WARNING: Control flow encountered bad instruction data */

void FUN_0823b024(void)

{
  undefined4 unaff_r9;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_OV) {
    coprocessor_load(4,in_cr0,0x823b030);
  }
  if (in_CY && !in_ZR) {
    *(BADSPACEBASE **)unaff_r9 = register0x00000054;
  }
  if (!in_CY) {
    software_interrupt(0x7c48b);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

