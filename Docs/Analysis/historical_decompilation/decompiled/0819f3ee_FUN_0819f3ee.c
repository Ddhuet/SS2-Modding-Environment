
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819f3ee(uint param_1,undefined4 param_2)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  bool in_CY;
  
  if (param_1 < 0x2a400001 && (uint)in_CY <= param_1 + 0xd5c00000) {
    *(uint *)(unaff_r8 + -4) = param_1 - (!in_CY + 0x2a400000);
    *(undefined4 *)(unaff_r8 + -8) = unaff_r9;
    *(int *)(unaff_r8 + -0xc) = unaff_r8;
    *(undefined4 *)(unaff_r8 + -0x10) = unaff_r7;
    *(undefined4 *)(unaff_r8 + -0x14) = unaff_r6;
    *(undefined4 *)(unaff_r8 + -0x18) = unaff_r5;
    *(undefined4 *)(unaff_r8 + -0x1c) = unaff_r4;
    *(undefined4 *)(unaff_r8 + -0x20) = param_2;
  }
  if (SBORROW4(param_1,0x2a400000) == SBORROW4(param_1 + 0xd5c00000,(uint)!in_CY)) {
    software_interrupt(0x755640);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

