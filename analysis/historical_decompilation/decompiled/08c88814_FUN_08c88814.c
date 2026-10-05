
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08843658) */
/* WARNING: Removing unreachable block (ram,0x08843660) */
/* WARNING: Removing unreachable block (ram,0x0884365c) */
/* WARNING: Removing unreachable block (ram,0x08c88820) */
/* WARNING: Removing unreachable block (ram,0x08c88824) */
/* WARNING: Removing unreachable block (ram,0x08c88840) */
/* WARNING: Removing unreachable block (ram,0x08843a88) */
/* WARNING: Removing unreachable block (ram,0x08843a8c) */

undefined4
FUN_08c88814(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  int in_r12;
  int unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr4;
  undefined4 in_cr13;
  undefined4 in_s15;
  
  if (in_NG) {
    return param_5;
  }
  if (in_ZR || in_OV != false) {
    *(undefined4 *)(in_r12 + 0x29c) = in_s15;
  }
  *(char *)(unaff_r10 + -0xccc) = (char)in_r12;
  if (in_OV) {
    coprocessor_moveto(0xb,7,2,&param_5,in_cr13,in_cr4);
    coprocessor_loadlong(0xc,in_cr13,unaff_lr + 0x1dc);
    if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_r10 + -0xccc) = param_3;
  *(undefined4 *)(unaff_r10 + -0xcc8) = unaff_r4;
  *(undefined4 *)(unaff_r10 + -0xcc4) = unaff_r5;
  *(undefined4 *)(unaff_r10 + -0xcc0) = unaff_r8;
  *(undefined4 *)(unaff_r10 + -0xcbc) = unaff_r9;
  *(int *)(unaff_r10 + -0xcb8) = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

