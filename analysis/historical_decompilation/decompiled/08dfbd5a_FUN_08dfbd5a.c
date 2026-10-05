
/* WARNING: Control flow encountered bad instruction data */

void FUN_08dfbd5a(void)

{
  undefined4 unaff_r8;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  
  if (in_NG != in_OV) {
    uRam08dfbd62 = unaff_r11;
  }
  if (in_CY && !in_ZR) {
    software_interrupt(0xb3005f);
    software_interrupt(0xb18fb2);
  }
  if (in_NG == in_OV) {
    software_interrupt(0x8fb0);
    coprocessor_load(0xe,in_cr10,0x8dfbbb6);
  }
  if (!in_ZR) {
    software_interrupt(0xaabfab);
  }
  if (!in_OV) {
    software_interrupt(0xa87fa9);
  }
  if (in_NG) {
    software_interrupt(0xa3007f);
    software_interrupt(0xa1bfa2);
  }
  if (!in_CY || in_ZR) {
    software_interrupt(0xcfa0);
    coprocessor_load(0xe,in_cr9,0x8dfc0d2);
  }
  if (in_NG) {
    software_interrupt(0x9a4f9b);
  }
  if (in_OV) {
    software_interrupt(0x93006f);
    software_interrupt(0x916f92);
  }
  else {
    software_interrupt(0x987f99);
  }
  if (in_CY && !in_ZR) {
    software_interrupt(0x6f90);
    coprocessor_store(0xe,in_cr8,0x8dfbbfe);
  }
  if (in_CY) {
    software_interrupt(0x8a6f8b);
  }
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0x889f89);
  }
  if (in_CY && !in_ZR) {
    uRam08dfbdca = (undefined1)unaff_r8;
    uRam08dfbdce = unaff_r8;
  }
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0x83006f);
  }
  if (in_NG != in_OV) {
    software_interrupt(0x81bf82);
  }
  if (!in_OV) {
    software_interrupt(0xcf80);
    coprocessor_storelong(0xe,in_cr7,0x8dfbda2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

