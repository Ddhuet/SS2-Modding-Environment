
/* WARNING: Control flow encountered bad instruction data */

void FUN_0821a5d2(void)

{
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    return;
  }
  if (!in_ZR && in_NG == in_OV) {
    in_OV = SCARRY4((uint)in_CY,0x8225fe2);
    in_ZR = in_CY == 0xf7dda01e;
    in_NG = '\0';
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

