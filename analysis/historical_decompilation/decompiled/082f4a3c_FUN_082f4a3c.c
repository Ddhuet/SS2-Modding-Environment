
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f4a3c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  undefined4 unaff_r11;
  undefined4 in_r12;
  bool in_ZR;
  bool in_OV;
  
  if (!in_ZR) {
    *(undefined4 *)(param_3 + 4) = param_1;
    *(undefined4 *)(param_3 + 8) = unaff_r4;
    *(undefined4 *)(param_3 + 0xc) = unaff_r8;
    *(undefined4 *)(param_3 + 0x10) = unaff_r11;
    *(undefined4 *)(param_3 + 0x14) = in_r12;
  }
  if (in_OV) {
    software_interrupt(0xd59867);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

