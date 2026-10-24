
/* WARNING: Control flow encountered bad instruction data */

void FUN_0824d41e(void)

{
  uint in_r3;
  uint extraout_r3;
  uint unaff_r4;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x069f5ec2();
    in_r3 = extraout_r3;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    in_CY = false;
    in_NG = (int)(unaff_r4 | 0x9800000) < 0;
    in_ZR = (unaff_r4 | 0x9800000) == 0;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    in_CY = false;
    in_NG = (int)(in_r3 | 0x4c000002) < 0;
    in_ZR = (in_r3 | 0x4c000002) == 0;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

