
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df6ffa(void)

{
  int iVar1;
  int unaff_r4;
  uint unaff_r5;
  uint unaff_r11;
  char cVar2;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  bool in_OV;
  
  cVar2 = '\0';
  if ((bool)in_NG == in_OV) {
    unaff_r11 = (uint)*(byte *)(unaff_r4 + 0x5d5);
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    iVar1 = unaff_r5 + (unaff_r5 >> 3);
    cVar2 = (char)iVar1 + in_CY;
    *(undefined1 *)(iVar1 + (uint)in_CY + 0x5ce) = 0;
  }
  if (in_OV) {
    *(char *)(unaff_r11 + 0x5cc) = cVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

