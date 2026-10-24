
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_081ec292(void)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    return CONCAT44(uRam081ec29e,uRam081ec29a);
  }
  if (in_ZR) {
    *unaff_r5 = unaff_r4;
    unaff_r5[1] = unaff_r6;
    unaff_r5[2] = unaff_r7;
    unaff_r5[3] = unaff_r8;
    unaff_r5[4] = unaff_r9;
    unaff_r5[5] = unaff_r10;
    unaff_r5[6] = unaff_r11;
    unaff_r5[7] = unaff_lr;
    unaff_r5[8] = 0x81ec29e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

