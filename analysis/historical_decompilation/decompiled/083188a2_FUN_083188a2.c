
/* WARNING: Control flow encountered bad instruction data */

void FUN_083188a2(void)

{
  undefined1 *in_r3;
  undefined1 *extraout_r3;
  undefined1 in_r12;
  undefined1 extraout_r12;
  undefined1 uVar1;
  undefined4 uVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr12;
  
  uVar1 = 0;
  if (in_NG != in_OV) {
    func_0x071c678a();
    in_r3 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar2 = coprocessor_movefromRt(10,6,6,in_cr12,in_cr7);
    uVar1 = (undefined1)uVar2;
  }
  else {
    in_r3[0x1bf] = in_r12;
  }
  *in_r3 = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

