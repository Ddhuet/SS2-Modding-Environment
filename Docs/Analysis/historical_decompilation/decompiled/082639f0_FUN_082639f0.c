
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08263a10) */
/* WARNING: Removing unreachable block (ram,0x08263a00) */
/* WARNING: Removing unreachable block (ram,0x08263a08) */

undefined8 FUN_082639f0(void)

{
  undefined4 unaff_r4;
  int unaff_r5;
  uint unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr5;
  undefined8 uVar1;
  
  if (in_CY && !in_ZR) {
    return CONCAT44(uRam08263a00,uRam082639fc);
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r10 = uRam082639fc;
  }
                    /* WARNING: Could not recover jumptable at 0x082639f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_CY) {
    uVar1 = (*(code *)((uint)unaff_r11 & (unaff_r7 >> 0x13 | unaff_r7 << 0xd)))();
    return uVar1;
  }
  if (!in_OV) {
    software_interrupt(0x6b5037);
  }
  if (!in_ZR && (bool)in_NG == in_OV) {
    if (!in_OV) {
      coprocessor_loadlong(8,in_cr5,unaff_r5 + -0x104);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r11 = unaff_r4;
  unaff_r11[1] = unaff_r9;
  unaff_r11[2] = unaff_r10;
  unaff_r11[3] = unaff_r11;
  unaff_r11[4] = in_r12;
  unaff_r11[5] = register0x00000054;
  unaff_r11[6] = unaff_lr;
  unaff_r11[7] = 0x8263a0c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

