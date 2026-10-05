
/* WARNING: Control flow encountered bad instruction data */

void FUN_0869823c(uint *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  uint unaff_r4;
  uint unaff_r7;
  int unaff_r8;
  undefined1 in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  
  if (in_NG) {
    param_1 = (uint *)(unaff_r4 & ~(unaff_r8 << (unaff_r7 & 0xff)));
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    *param_1 = unaff_r4;
  }
  puVar1 = param_2;
  if (in_ZR) {
    puVar1 = param_2 + -0x741;
    *param_2 = in_r12;
  }
  if (in_CY) {
    coprocessor_movefromRt(0xf,2,0,in_cr0,in_cr0);
  }
  if (in_ZR) {
    puVar1[-((int)puVar1 >> 0x18)] = (char)unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

