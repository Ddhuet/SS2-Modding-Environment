
/* WARNING: Control flow encountered bad instruction data */

void FUN_0826eea2(uint param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int unaff_r4;
  int *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r9;
  undefined4 unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  if (!in_CY || in_ZR) {
    unaff_r9 = unaff_r9 + 0x31c;
    coprocessor_store(5,in_cr11,unaff_r9);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_function(0xd,0xd,6,in_cr12,in_cr3,in_cr12);
  }
  else {
    unaff_r5 = (int *)((int)unaff_r5 + 0xc91);
    unaff_r9 = *unaff_r5;
  }
  if (!in_CY || in_ZR) {
    register0x00000054 = *(BADSPACEBASE **)(unaff_r6 + unaff_r4 + 4);
  }
  else {
    *(int *)(param_2 + (int)&stack0x00000000 * 0x200000) = unaff_r9;
  }
  if (in_NG != in_OV) {
    unaff_r10 = uRam0826eec6;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_function(8,0xc,0,in_cr15,in_cr12,in_cr6);
  if (in_NG == in_OV) {
    *(uint *)(unaff_r4 + 4) = param_1;
    *(undefined4 **)(unaff_r4 + 8) = param_3;
    *(undefined4 *)(unaff_r4 + 0xc) = param_4;
    *(int **)(unaff_r4 + 0x10) = unaff_r5;
    *(uint *)(unaff_r4 + 0x14) = unaff_r7 + (param_1 >> 0x15);
    *(BADSPACEBASE **)(unaff_r4 + 0x18) = register0x00000054;
    *(undefined4 *)(unaff_r4 + 0x1c) = 0x826eed6;
  }
  if (!in_CY || in_ZR) {
    *param_3 = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

