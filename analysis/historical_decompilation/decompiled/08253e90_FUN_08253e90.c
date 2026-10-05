
/* WARNING: Control flow encountered bad instruction data */

void FUN_08253e90(void)

{
  int unaff_r8;
  int unaff_lr;
  bool in_ZR;
  bool bVar1;
  byte in_CY;
  
  bVar1 = in_ZR && unaff_lr + 0x104a7 + (uint)in_CY == 0;
  func_0x083db77c();
  if (bVar1) {
    *(undefined1 *)(unaff_r8 + 0xce3) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

