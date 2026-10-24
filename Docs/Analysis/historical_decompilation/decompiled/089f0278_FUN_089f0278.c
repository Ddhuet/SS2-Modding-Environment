
/* WARNING: Control flow encountered bad instruction data */

void FUN_089f0278(void)

{
  uint uVar1;
  uint unaff_r5;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar2;
  
  bVar2 = false;
  if (in_ZR) {
    uVar1 = unaff_r5 >> 10 | unaff_r5 << 0x16;
    in_OV = SBORROW4(uVar1,unaff_r11) != SBORROW4(uVar1 - unaff_r11,(uint)!in_CY);
    in_NG = (int)(uVar1 - (unaff_r11 + (uint)!in_CY)) < 0;
    bVar2 = uVar1 == unaff_r11 + (uint)!in_CY;
  }
  if (bVar2) {
    software_interrupt(0x777566);
    software_interrupt(0x775561);
  }
  if (in_NG != in_OV) {
    func_0x091b02b4();
  }
  if ((bool)in_OV) {
    software_interrupt(0xffbb7f);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

