
/* WARNING: Control flow encountered bad instruction data */

void FUN_08173862(void)

{
  undefined4 *in_r3;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_CY;
  
  if (in_CY) {
    *in_r3 = unaff_r11;
  }
  if (in_NG) {
    func_0x072ee58e();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

