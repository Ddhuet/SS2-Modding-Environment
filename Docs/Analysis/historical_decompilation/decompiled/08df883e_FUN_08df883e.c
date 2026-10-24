
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08df8906) */
/* WARNING: Removing unreachable block (ram,0x08df889a) */
/* WARNING: Removing unreachable block (ram,0x08df8876) */
/* WARNING: Removing unreachable block (ram,0x08df88be) */
/* WARNING: Removing unreachable block (ram,0x08df88e2) */
/* WARNING: Removing unreachable block (ram,0x08df892a) */
/* WARNING: Removing unreachable block (ram,0x08df89b2) */
/* WARNING: Removing unreachable block (ram,0x08df894e) */
/* WARNING: Removing unreachable block (ram,0x08df8972) */
/* WARNING: Removing unreachable block (ram,0x08df8996) */
/* WARNING: Removing unreachable block (ram,0x08df89c6) */

void FUN_08df883e(void)

{
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  
  if (!in_OV) {
    software_interrupt(0xb3002f);
  }
  if (in_CY) {
    software_interrupt(0xb17fb2);
  }
  if ((bool)in_NG == in_OV) {
    software_interrupt(0x4fb0);
    coprocessor_load(0xe,in_cr10,0x8df8c12);
  }
  if (in_ZR) {
    in_CY = true;
    in_OV = false;
    in_NG = false;
  }
  software_interrupt(0xaa7fab);
  if (!in_OV) {
    software_interrupt(0xa85fa9);
  }
  software_interrupt(0xa3001f);
  software_interrupt(0xa11fa2);
  if (!in_CY) {
    software_interrupt(4000);
    coprocessor_store(0xe,in_cr9,0x8df883e);
  }
  software_interrupt(0x9a0f9b);
  if (!(bool)in_NG) {
    software_interrupt(0x983f99);
  }
  if (!in_OV) {
    software_interrupt(0x93003f);
  }
  if (in_CY) {
    software_interrupt(0x917f92);
    software_interrupt(0x4f90);
    coprocessor_storelong(0xe,in_cr8,0x8df8622);
  }
  if ((bool)in_NG != in_OV) {
    software_interrupt(0x8abf8b);
  }
  if (in_CY) {
    software_interrupt(0x88bf89);
    software_interrupt(0x83003f);
    uRam08df88ae = unaff_r8;
  }
  software_interrupt(0x812f82);
  if (!in_OV) {
    software_interrupt(0xf80);
    coprocessor_store(0xe,in_cr7,0x8df8886);
  }
  if (!in_CY) {
    software_interrupt(0x781f79);
  }
  if (!in_OV) {
    software_interrupt(0x73003f);
  }
  software_interrupt(0x715f72);
  if (in_OV) {
    software_interrupt(0x4f70);
    coprocessor_storelong(0xe,in_cr6,0x8df872a);
  }
  if ((bool)in_NG != in_OV) {
    software_interrupt(0x6abf6b);
    software_interrupt(0x688f69);
  }
  if (in_OV) {
    uRam08df88fa = uRam08df88f6;
  }
  else {
    software_interrupt(0x63003f);
  }
  software_interrupt(0x612f62);
  if (!(bool)in_NG) {
    software_interrupt(0x1f60);
    coprocessor_store(0xe,in_cr5,0x8df88ce);
  }
  if (!in_CY) {
    software_interrupt(0x581f59);
  }
  if (!(bool)in_NG) {
    uRam08df891a = unaff_r5;
  }
  if (!in_CY) {
    software_interrupt(0x53003f);
  }
  software_interrupt(0x515f52);
  if ((bool)in_NG) {
    software_interrupt(0x9f50);
    coprocessor_storelong(0xe,in_cr4,0x8df8772);
  }
  if ((bool)in_NG == in_OV) {
    software_interrupt(0x4abf4b);
  }
  else {
    software_interrupt(0x48bf49);
  }
  if (!in_OV) {
    software_interrupt(0x43007f);
  }
  if (in_CY) {
    software_interrupt(0x412f42);
  }
  else {
    software_interrupt(8000);
    coprocessor_store(0xe,in_cr3,0x8df8916);
    software_interrupt(0x383f39);
  }
  if (!in_OV) {
    software_interrupt(0x33001f);
  }
  software_interrupt(0x31ef32);
  if (in_CY) {
    software_interrupt(0x9f30);
    coprocessor_storelong(0xe,in_cr2,0x8df87ba);
  }
  if ((bool)in_NG == in_OV) {
    software_interrupt(0x2acf2b);
    software_interrupt(0x28bf29);
  }
  if (!in_OV) {
    software_interrupt(0x23007f);
  }
  if (in_CY) {
    software_interrupt(0x212f22);
  }
  software_interrupt(0x2f20);
  coprocessor_store(0xe,in_cr1,0x8df895e);
  if (!in_CY) {
    software_interrupt(0x183f19);
  }
  uRam08df89ae = (uint)bRam08df89aa;
  if (!in_OV) {
    software_interrupt(0x13002f);
  }
  if ((bool)in_NG == in_OV) {
    software_interrupt(0x11bf12);
    software_interrupt(0xacf0b);
    software_interrupt(0x8bf09);
  }
  if (in_CY) {
    software_interrupt(0x12f02);
  }
  else {
    software_interrupt(0x3005f);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

