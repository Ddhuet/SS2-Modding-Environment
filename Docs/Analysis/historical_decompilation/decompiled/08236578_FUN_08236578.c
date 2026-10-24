
/* WARNING: Control flow encountered bad instruction data */

void FUN_08236578(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 unaff_r4;
  int unaff_r5;
  int unaff_r7;
  undefined1 *unaff_r8;
  int *unaff_r9;
  int unaff_r10;
  int in_r12;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined1 auStack_108 [264];
  
  *unaff_r9 = param_3;
  unaff_r9[1] = param_4;
  unaff_r9[2] = unaff_r5;
  unaff_r9[3] = unaff_r7;
  unaff_r9[4] = (int)unaff_r8;
  unaff_r9[5] = unaff_r10;
  unaff_r9[6] = in_r12;
  unaff_r9[7] = (int)register0x00000054;
  unaff_r9[8] = 0x8236580;
  if (in_CY) {
    *unaff_r8 = unaff_r4;
  }
  if (!in_OV) {
    coprocessor_loadlong(8,in_cr6,auStack_108);
  }
  if (in_ZR) {
    coprocessor_storelong(4,in_cr7,param_3 + -0x1fc);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

