
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827f8b2(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined4 *unaff_r6;
  uint unaff_r7;
  int *unaff_r8;
  int *piVar1;
  int *piVar2;
  int unaff_r9;
  int unaff_r10;
  uint in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined4 in_cr9;
  
  if (in_NG == in_OV) {
    unaff_r10 = *param_3;
  }
  else {
    unaff_r9 = unaff_r9 + 0x5ba;
  }
  if (in_CY && !in_ZR) {
    if (in_CY && !in_ZR) {
      coprocessor_moveto(7,4,4,unaff_r9,in_cr9,in_cr4);
      piVar1 = (int *)((in_r12 & 0xffff) + (unaff_r7 & 0x1fffe0) * 0x800);
      piVar2 = piVar1 + in_r12 * 0x20;
      *piVar1 = (int)piVar2;
      *(int *)(param_1 + 4) = param_1;
      *(int *)(param_1 + 8) = param_4;
      *(uint *)(param_1 + 0xc) = unaff_r7;
      *(int **)(param_1 + 0x10) = piVar2;
      *(int *)(param_1 + 0x14) = unaff_r9;
      *(int *)(param_1 + 0x18) = unaff_r10;
      *(undefined4 *)(param_1 + 0x1c) = 0x827f8d6;
      *unaff_r6 = piVar2;
      coprocessor_store(8,in_cr8,unaff_r10 + 0x22c);
    }
    else {
      *(int *)(unaff_r10 + 0x8a) = unaff_r9;
      coprocessor_store(6,in_cr9,unaff_r10);
      coprocessor_store(5,in_cr9,param_4 + 0x25c);
      software_interrupt(0xaba19e);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r8 = unaff_r10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

