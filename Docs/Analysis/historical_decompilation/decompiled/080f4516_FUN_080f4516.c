
/* WARNING: Control flow encountered bad instruction data */

void FUN_080f4516(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint extraout_r2;
  uint extraout_r2_00;
  undefined1 unaff_r4;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r9;
  int unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  byte bVar1;
  byte bVar2;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x06fa1bda();
    param_3 = extraout_r2;
  }
  if ((bool)in_CY) {
    software_interrupt(0x16f0dc);
  }
  if (!(bool)in_NG) {
    unaff_r7 = unaff_r7 - (unaff_r6 >> 0xc);
  }
  if ((bool)in_ZR) {
    func_0x088c1e4e();
    param_3 = extraout_r2_00;
  }
  bVar1 = in_CY;
  if (!(bool)in_ZR && in_NG == in_OV) {
    bVar1 = 0xfe000 < param_3 || param_3 - 0xfe000 < (uint)(byte)in_CY;
    in_OV = SBORROW4(param_3,0xfe000) != SBORROW4(param_3 - 0xfe000,(uint)!(bool)in_CY);
    in_NG = (int)(param_3 - (!(bool)in_CY + 0xfe000)) < 0;
    in_ZR = param_3 == !(bool)in_CY + 0xfe000;
  }
  bVar2 = bVar1;
  if (!(bool)in_ZR && in_NG == in_OV) {
    bVar2 = 0x1bfffffd < unaff_r9 || CARRY4(unaff_r9 + 0xe4000002,(uint)bVar1);
    unaff_r11 = unaff_r9 + 0xe4000002 + (uint)bVar1;
    in_NG = unaff_r11 < 0;
  }
  if ((bool)bVar2) {
    if ((bool)in_NG) {
      func_0x0930523e();
    }
    if ((bool)in_NG) {
      *(undefined1 *)(unaff_r7 - (unaff_r11 >> 0x12)) = unaff_r4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

