
void FUN_0831af3e(void)

{
  uint in_r3;
  uint extraout_r3;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0xc9b5c1);
  }
  if (in_ZR || in_NG != in_OV) {
    func_0x078d129e();
    in_r3 = extraout_r3;
  }
                    /* WARNING: Could not recover jumptable at 0x0831af46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((in_r3 >> 5 | in_r3 << 0x1b) - (!(bool)in_CY + 0x831af4e)))();
  return;
}

