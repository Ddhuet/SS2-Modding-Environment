
/* WARNING: Control flow encountered bad instruction data */

void FUN_085fab76(undefined4 param_1,int param_2)

{
  int unaff_r6;
  uint unaff_r7;
  int unaff_r11;
  int in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined1 in_OV;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr13;
  
  if (in_NG) {
    unaff_r11 = *(int *)(in_r12 + 0x59d);
  }
  if (!in_ZR) {
    param_2 = SignedSaturate(unaff_r11 << 0xb,0x1f);
    SignedDoesSaturate(unaff_r11 << 0xb,0x1f);
  }
  if (in_CY && !in_ZR) {
    param_2 = param_2 << (unaff_r7 & 0xff);
    in_OV = SBORROW4(unaff_r6,param_2) != SBORROW4(unaff_r6 - param_2,(uint)!in_CY);
  }
  if ((bool)in_OV) {
    coprocessor_function(8,7,3,in_cr0,in_cr2,in_cr13);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

