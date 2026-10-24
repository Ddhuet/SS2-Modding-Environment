
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f42da(void)

{
  uint unaff_r5;
  undefined4 *unaff_r7;
  undefined4 unaff_r8;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY || in_ZR) {
    in_CY = 0xffd87fff < unaff_r5;
    in_OV = SCARRY4(unaff_r5,0x278000);
    in_NG = (int)(unaff_r5 + 0x278000) < 0;
    in_ZR = unaff_r5 == 0xffd88000;
  }
  if (in_CY && !in_ZR) {
    *unaff_r7 = unaff_r8;
  }
  if (in_NG == in_OV) {
    in_ZR = false;
    in_NG = '\0';
  }
  if (in_ZR || in_NG != in_OV) {
    *(char *)(in_r12 + 0x4bd) = (char)in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

