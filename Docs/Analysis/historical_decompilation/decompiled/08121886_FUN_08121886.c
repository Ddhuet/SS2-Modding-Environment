
/* WARNING: Control flow encountered bad instruction data */

void FUN_08121886(void)

{
  uint unaff_r6;
  undefined8 *unaff_r9;
  bool in_ZR;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  
  if (in_ZR) {
    unaff_r9 = (undefined8 *)((int)unaff_r9 + (unaff_r6 >> 0xb | unaff_r6 << 0x15));
  }
  *unaff_r9 = in_d1;
  unaff_r9[1] = in_d2;
  unaff_r9[2] = in_d3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

