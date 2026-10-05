
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0827d6f8(uint param_1,undefined4 param_2,uint param_3)

{
  uint unaff_r6;
  uint unaff_r8;
  int unaff_r9;
  uint uVar1;
  uint unaff_r11;
  int iVar2;
  uint in_r12;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    in_CY = (byte)(param_1 >> 10) & 1;
    unaff_r11 = param_3 & ~(param_1 >> 0xb);
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if ((bool)in_CY && !in_ZR) {
    software_interrupt(0x9eaabd);
  }
  if (in_ZR || in_NG != in_OV) {
    in_CY = (byte)(unaff_r8 >> 0x15) & 1;
    uVar1 = unaff_r6 & ~(unaff_r8 << 0xb);
    in_NG = (int)uVar1 < 0;
    in_ZR = uVar1 == 0;
  }
  if (in_NG == in_OV) {
    return uRam0827d70c;
  }
  if (!(bool)in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    *(undefined1 *)(unaff_r9 + ((int)param_3 >> 0xb)) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = unaff_r11 + (in_r12 >> 0xf);
  *(int *)iVar2 = iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

