
/* WARNING: Control flow encountered bad instruction data */

void FUN_08260f3e(void)

{
  uint in_r3;
  uint unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar1;
  undefined4 in_cr12;
  
  bVar1 = in_CY;
  if ((bool)in_ZR || in_NG != in_OV) {
    bVar1 = 0xd03fffff < in_r3 || CARRY4(in_r3 + 0x2fc00000,(uint)in_CY);
    in_OV = SCARRY4(in_r3,0x2fc00000) != SCARRY4(in_r3 + 0x2fc00000,(uint)in_CY);
    unaff_r11 = in_r3 + 0x2fc00000 + (uint)in_CY;
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if ((bool)bVar1) {
    in_NG = '\0';
    in_ZR = (unaff_r11 & 0x4c1e9410) == 0;
  }
  func_0x08eebfe6();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x07a9c37a();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_movefromRt(1,5,5,in_cr12,in_cr12);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

