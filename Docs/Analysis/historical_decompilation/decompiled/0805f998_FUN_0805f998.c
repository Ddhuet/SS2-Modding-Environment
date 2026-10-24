
/* WARNING: Control flow encountered bad instruction data */

void FUN_0805f998(void)

{
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  
  if (in_NG) {
    *unaff_r11 = 0x805f9a0;
    unaff_r11[-1] = register0x00000054;
    unaff_r11[-2] = in_r12;
    unaff_r11[-3] = unaff_r10;
    unaff_r11[-4] = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

