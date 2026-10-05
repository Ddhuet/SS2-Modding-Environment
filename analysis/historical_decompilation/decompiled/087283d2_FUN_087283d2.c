
/* WARNING: Control flow encountered bad instruction data */

void FUN_087283d2(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 unaff_r6;
  uint unaff_r11;
  uint in_r12;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(uint *)(unaff_lr + -0x52f) = unaff_r11;
  }
  if (in_ZR) {
    unaff_r11 = in_r12 ^ (uint)&stack0x00000000 >> 10;
  }
  if (in_CY) {
    *(BADSPACEBASE **)(param_2 + -4) = register0x00000054;
    *(uint *)(param_2 + -8) = unaff_r11;
    *(undefined4 *)(param_2 + -0xc) = unaff_r6;
    *(undefined4 *)(param_2 + -0x10) = param_3;
    *(undefined4 *)(param_2 + -0x14) = param_1;
    func_0x09772cea();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

