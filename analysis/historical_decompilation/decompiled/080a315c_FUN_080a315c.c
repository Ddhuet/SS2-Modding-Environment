
/* WARNING: Control flow encountered bad instruction data */

void FUN_080a315c(int param_1)

{
  undefined4 unaff_r8;
  undefined4 *unaff_r10;
  int in_r12;
  bool in_NG;
  bool in_CY;
  undefined4 in_cr0;
  undefined4 in_cr2;
  
  if (in_NG) {
    *unaff_r10 = 0x80a3164;
    unaff_r10[-1] = register0x00000054;
    unaff_r10[-2] = in_r12;
    unaff_r10[-3] = unaff_r10;
    unaff_r10[-4] = unaff_r8;
  }
  if (!in_CY) {
    in_NG = in_r12 + param_1 * -0x10000 < 0;
  }
  if (!in_NG) {
    coprocessor_function(1,4,0,in_cr2,in_cr0,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

