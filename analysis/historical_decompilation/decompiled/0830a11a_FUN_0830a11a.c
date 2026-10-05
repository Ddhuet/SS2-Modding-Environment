
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0830a11a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG == in_OV) {
    uRam0830a14e = 0x830a122;
    uRam0830a126 = param_1;
    uRam0830a12a = param_2;
    uRam0830a12e = param_3;
    uRam0830a132 = unaff_r4;
    uRam0830a136 = unaff_r5;
    uRam0830a13a = unaff_r7;
    uRam0830a13e = unaff_r8;
    iRam0830a142 = unaff_r10;
    uRam0830a146 = in_r12;
    puRam0830a14a = (undefined1 *)register0x00000054;
  }
  else {
    software_interrupt(0xb5aca8);
  }
  if (in_ZR || in_NG != in_OV) {
    uRam0830a146 = 0x830a12a;
    uRam0830a12a = param_2;
    uRam0830a12e = param_3;
    uRam0830a132 = unaff_r6;
    uRam0830a136 = unaff_r7;
    uRam0830a13a = unaff_r9;
    uRam0830a13e = unaff_r11;
    iRam0830a142 = unaff_lr;
  }
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined8 *)(unaff_lr + 4);
}

