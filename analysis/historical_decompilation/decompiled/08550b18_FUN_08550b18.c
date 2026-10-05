
/* WARNING: Control flow encountered bad instruction data */

void FUN_08550b18(undefined4 param_1,int param_2)

{
  int unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 in_r12;
  bool in_NG;
  bool in_OV;
  undefined4 in_cr11;
  
  if (in_OV) {
    coprocessor_loadlong(5,in_cr11,0x8550890);
    software_interrupt(0x635e51);
  }
  else {
    software_interrupt(0x7f8c84);
  }
  if (in_NG) {
    *(undefined4 *)(param_2 + 0x563) = unaff_r9;
  }
  if (in_OV) {
    *(undefined4 *)(unaff_r4 + 4) = param_1;
    *(undefined4 *)(unaff_r4 + 8) = unaff_r7;
    *(undefined4 *)(unaff_r4 + 0xc) = unaff_r8;
    *(undefined4 *)(unaff_r4 + 0x10) = in_r12;
    *(BADSPACEBASE **)(unaff_r4 + 0x14) = register0x00000054;
    *(undefined4 *)(unaff_r4 + 0x18) = 0x8550b34;
  }
  else {
    software_interrupt(0x999674);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

