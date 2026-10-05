
/* WARNING: Control flow encountered bad instruction data */

void FUN_082628b2(void)

{
  undefined4 unaff_r5;
  uint in_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    in_CY = 0xcdffffff < in_r12;
    in_OV = SCARRY4(in_r12,0x32000000);
    in_NG = (int)(in_r12 + 0x32000000) < 0;
    in_ZR = in_r12 == 0xce000000;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0xc,in_cr11,in_r12 + 0x2b8);
  }
  if (!(bool)in_CY) {
    if (!(bool)in_NG) {
      coprocessor_moveto(4,3,1,unaff_r5,in_cr11,in_cr11);
    }
    if (!(bool)in_ZR) {
      func_0x08df260a();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

