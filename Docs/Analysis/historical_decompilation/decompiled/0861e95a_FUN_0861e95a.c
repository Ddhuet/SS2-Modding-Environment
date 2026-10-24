
/* WARNING: Control flow encountered bad instruction data */

void FUN_0861e95a(void)

{
  undefined4 *unaff_r6;
  undefined4 *puVar1;
  undefined4 unaff_r11;
  char in_NG;
  bool in_CY;
  char in_OV;
  
  puVar1 = unaff_r6;
  if (in_NG != in_OV) {
    puVar1 = unaff_r6 + 0x140;
    *unaff_r6 = unaff_r11;
    in_NG = (int)((int)puVar1 - (!in_CY + 0x58000003)) < 0;
  }
  if ((bool)in_NG) {
    SignedSaturate((int)puVar1 >> 3,0x12);
    SignedDoesSaturate((int)puVar1 >> 3,0x12);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

