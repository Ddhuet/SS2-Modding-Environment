
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c587a(void)

{
  int unaff_r5;
  int unaff_r11;
  int iVar1;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr12;
  
  if (!in_ZR && in_NG == in_OV) {
    in_OV = SCARRY4(unaff_r11,0x2c400000) != SCARRY4(unaff_r11 + 0x2c400000,(uint)in_CY);
    iVar1 = unaff_r11 + 0x2c400000 + (uint)in_CY;
    in_NG = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  coprocessor_loadlong2(2,in_cr12,unaff_r5 + 0x334);
  if (in_ZR || in_NG != in_OV) {
    func_0x0773f072();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

