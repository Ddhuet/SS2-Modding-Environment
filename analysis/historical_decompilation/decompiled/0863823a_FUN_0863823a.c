
/* WARNING: Control flow encountered bad instruction data */

void FUN_0863823a(uint param_1)

{
  uint unaff_r7;
  uint unaff_r8;
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  byte bVar1;
  
  if (in_NG != in_OV) {
    param_1 = param_1 * -0x7ff;
  }
  bVar1 = in_CY;
  if (in_CY && !in_ZR) {
    param_1 = param_1 << (param_1 & 0xff);
    bVar1 = CARRY4(unaff_r7,param_1) || CARRY4(unaff_r7 + param_1,(uint)in_CY);
    in_OV = SCARRY4(unaff_r7,param_1) != SCARRY4(unaff_r7 + param_1,(uint)in_CY);
    in_NG = (int)(unaff_r7 + param_1 + (uint)in_CY) < 0;
  }
  if (in_NG == in_OV) {
    func_0x09e4c4f6(unaff_r9 + (unaff_r8 >> 1) + (uint)bVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

