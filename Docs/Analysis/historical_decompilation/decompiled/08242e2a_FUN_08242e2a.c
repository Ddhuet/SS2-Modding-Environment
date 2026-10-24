
/* WARNING: Control flow encountered bad instruction data */

void FUN_08242e2a(undefined4 param_1,uint param_2)

{
  uint extraout_r1;
  uint extraout_r1_00;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar1;
  
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x06b705da();
    param_2 = extraout_r1;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x06a6a86e();
    param_2 = extraout_r1_00;
  }
  if ((bool)in_CY) {
    software_interrupt(0xff5dd);
  }
  bVar1 = false;
  if ((bool)in_ZR) {
    in_CY = (undefined1)((uint)((int)&stack0x00000000 << 0xc) >> 0x1f);
    bVar1 = param_2 == ((uint)&stack0x00000000 >> 0x14 | (int)&stack0x00000000 << 0xc);
  }
  if (!(bool)in_CY || bVar1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

