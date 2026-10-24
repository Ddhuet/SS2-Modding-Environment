
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802dcf0) */

void FUN_0802dcd8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  undefined4 in_cr6;
  undefined4 in_cr10;
  
  if (in_NG) {
    *param_2 = unaff_r4;
    param_2[1] = unaff_r5;
    param_2[2] = unaff_r8;
    param_2[3] = unaff_r10;
    param_2[4] = in_r12;
    param_2[5] = register0x00000054;
    param_2[6] = 0x802dce0;
  }
  coprocessor_movefromRt(7,5,7,in_cr6,in_cr10);
  if (in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

