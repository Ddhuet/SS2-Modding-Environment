
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x082639a6) */

void FUN_08263996(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  int unaff_r6;
  int unaff_r7;
  undefined4 *unaff_r10;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_ZR || (bool)in_NG != in_OV) {
    coprocessor_function(5,0xc,5,in_cr11,in_cr10,in_cr1);
  }
  if ((bool)in_CY) {
    coprocessor_load(2,in_cr0,unaff_r7 + -0x3c4);
  }
  if (!in_OV) {
    unaff_r6 = unaff_r10[-6];
    unaff_r10 = unaff_r10 + -8;
    param_2 = *unaff_r10;
  }
  if (in_ZR) {
    *(short *)((int)unaff_r10 + unaff_r6) = (short)unaff_r10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG != in_OV) {
    func_0x07c97556();
    param_2 = extraout_r1;
  }
  if (!(bool)in_CY) {
    unaff_r10[0x1de] = unaff_r7;
  }
  if ((bool)in_NG) {
    *unaff_r10 = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

