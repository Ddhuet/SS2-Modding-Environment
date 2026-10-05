
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0824e9f8(int param_1,undefined4 param_2)

{
  uint unaff_r8;
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  bool bVar1;
  undefined4 in_cr2;
  
  if (in_ZR) {
    in_NG = '\0';
  }
  bVar1 = (~(unaff_r8 >> 0xb) & 0x824ea00) != 0;
  if (in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((!in_ZR || bVar1) && in_NG == '\0') {
    *(undefined4 *)(param_1 + -0xd4f) = *(undefined4 *)(param_1 + 0xc);
  }
  if (in_NG != '\0') {
    return *(undefined8 *)(unaff_r10 + 4);
  }
  coprocessor_store2(7,in_cr2,*(int *)(param_1 + 0x1c) + -0x378);
  if (!in_ZR || bVar1) {
    return CONCAT44(param_2,param_1 + 0x20);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

