
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d27ade(void)

{
  byte *in_r3;
  byte *extraout_r3;
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *unaff_r5;
  undefined1 *puVar3;
  undefined1 *unaff_r6;
  undefined1 unaff_r10;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  undefined4 *extraout_r12_00;
  undefined1 in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr8;
  
  if (!(bool)in_CY || in_ZR) {
    func_0x0775510a();
    in_r3 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if ((bool)in_NG) {
    uVar2 = coprocessor_movefromRt(8,7,in_cr8);
    uVar1 = (undefined1)uVar2;
    coprocessor_movefromRt2(8,7,in_cr8);
  }
  else {
    *unaff_r6 = unaff_r10;
    in_r12 = in_r12 + -0x2ef;
    uVar1 = (undefined1)*in_r12;
  }
  if (in_NG != in_OV) {
    unaff_r5 = (undefined1 *)(uint)*in_r3;
    func_0x077b6d76();
    in_r12 = extraout_r12_00;
  }
  puVar3 = unaff_r5;
  if ((bool)in_NG) {
    puVar3 = unaff_r5 + -((int)in_r12 >> 9);
    *unaff_r5 = uVar1;
  }
  if (!(bool)in_CY) {
    puVar3[-0x644] = (char)puVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

