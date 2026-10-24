
/* WARNING: Control flow encountered bad instruction data */

void FUN_08773960(undefined4 param_1,uint param_2)

{
  int unaff_r4;
  uint unaff_r6;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  
  if (in_ZR) {
    in_CY = (byte)(param_2 >> 0x16) & 1;
    in_NG = (int)(unaff_r6 ^ param_2 << 10) < 0;
  }
  if (in_NG == in_OV) {
    in_OV = SCARRY4(unaff_r4,0x3000000b) != SCARRY4(unaff_r4 + 0x3000000b,(uint)in_CY);
  }
  if (!(bool)in_OV) {
    software_interrupt(0xf732b5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

