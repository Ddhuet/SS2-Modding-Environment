
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f2872(uint param_1)

{
  uint uVar1;
  int unaff_r4;
  undefined1 unaff_r5;
  uint unaff_r6;
  undefined1 *unaff_r9;
  uint unaff_r10;
  byte *unaff_r11;
  undefined4 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar2;
  undefined4 in_cr7;
  
  if (in_NG != in_OV) {
    param_1 = func_0x06f1ff3a();
  }
  if ((bool)in_NG) {
    param_1 = (uint)*unaff_r11;
    software_interrupt(0x504d58);
    unaff_r11 = unaff_r11 + 0x801;
  }
  else {
    *unaff_r9 = unaff_r5;
  }
  if (in_NG == in_OV) {
    func_0x070180de(param_1);
  }
  if (in_NG == in_OV) {
    software_interrupt(0xb1adb1);
  }
  if (!(bool)in_ZR) {
    if ((bool)in_NG) {
      func_0x09a0107e();
    }
    bVar2 = false;
    if ((bool)in_CY) {
      uVar1 = unaff_r4 >> (unaff_r10 & 0xff);
      bVar2 = uVar1 <= unaff_r6;
      in_OV = SBORROW4(unaff_r6,uVar1);
      in_NG = (int)(unaff_r6 - uVar1) < 0;
      in_ZR = unaff_r6 == uVar1;
    }
    if ((bool)in_ZR) {
      in_OV = SBORROW4(-0xf000000,(int)unaff_r11) !=
              SBORROW4(-0xf000000 - (int)unaff_r11,(uint)!bVar2);
      in_NG = -0xf000000 - (int)(unaff_r11 + !bVar2) < 0;
    }
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    coprocessor_moveto(0xd,0,5,unaff_pc,in_cr7,in_cr7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

