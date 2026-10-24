
/* WARNING: Control flow encountered bad instruction data */

void FUN_0862c684(uint param_1,undefined4 param_2,uint *param_3)

{
  int unaff_r10;
  uint unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  
  if (in_NG == in_OV) {
    in_CY = false;
    unaff_r11 = param_1 & 0x2880000;
    in_ZR = unaff_r11 == 0;
    in_NG = '\0';
  }
  else {
    *param_3 = unaff_r11;
  }
  if ((bool)in_ZR) {
    software_interrupt(0xd0a2b8);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    in_OV = SCARRY4(unaff_r10,-0x6ffffff5) != SCARRY4(unaff_r10 + -0x6ffffff5,(uint)(byte)in_CY);
    in_NG = (int)(unaff_r10 + -0x6ffffff5 + (uint)(byte)in_CY) < 0;
  }
  if (in_NG != in_OV) {
    coprocessor_moveto(0xd,3,1,unaff_r11,in_cr2,in_cr2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

