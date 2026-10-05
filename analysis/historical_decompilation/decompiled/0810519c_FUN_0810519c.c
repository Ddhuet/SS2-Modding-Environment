
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x081051ac) */

void FUN_0810519c(undefined4 param_1,undefined4 param_2)

{
  byte *unaff_r5;
  undefined4 unaff_r6;
  int unaff_r8;
  uint unaff_r10;
  uint in_r12;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR) {
    in_r12 = (uint)*unaff_r5;
  }
  if ((unaff_r10 & 0xe40000) != 0 && in_OV == '\0') {
    *(BADSPACEBASE **)unaff_r8 = register0x00000054;
    *(uint *)(unaff_r8 + -4) = in_r12;
    *(uint *)(unaff_r8 + -8) = unaff_r10;
    *(undefined4 *)(unaff_r8 + -0xc) = unaff_r6;
    *(undefined4 *)(unaff_r8 + -0x10) = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

