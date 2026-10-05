
/* WARNING: Control flow encountered bad instruction data */

void FUN_087855e2(undefined4 param_1,int param_2)

{
  undefined4 unaff_r6;
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(in_r12 + -0x501) = unaff_r11;
  }
  if (in_NG != in_OV) {
    *(undefined4 *)(param_2 + -3) = unaff_r6;
  }
  if (!in_CY) {
    in_NG = true;
  }
  if ((bool)in_NG) {
    func_0x08385dbe();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

