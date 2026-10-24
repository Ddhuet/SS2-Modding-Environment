
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080b8c64) */

void FUN_080b8c5c(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr2;
  undefined4 in_cr11;
  
  if (!in_NG) {
    if (in_OV) {
      register0x00000054 = *(BADSPACEBASE **)(param_2 + -4);
    }
    if (!in_ZR) {
      coprocessor_moveto2(1,1,register0x00000054,unaff_r8,in_cr11);
    }
    if (in_CY) {
      *(undefined4 *)(in_r12 + -0x30) = unaff_r6;
    }
    else {
      *(undefined1 *)(param_1 + -0xc34) = param_4;
    }
    if (in_ZR || in_OV != false) {
      coprocessor_loadlong(0xd,in_cr2,unaff_r10);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

