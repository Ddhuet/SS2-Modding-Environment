
/* WARNING: Control flow encountered bad instruction data */

void FUN_089ef714(void)

{
  uint uVar1;
  uint unaff_r5;
  uint unaff_r7;
  uint unaff_r10;
  int unaff_r11;
  bool in_ZR;
  bool in_CY;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar2 = false;
  bVar4 = in_CY;
  if (in_ZR) {
    uVar1 = (int)unaff_r5 >> (unaff_r5 & 0xff);
    bVar4 = unaff_r10 < uVar1 || uVar1 - unaff_r10 < (uint)in_CY;
    unaff_r11 = uVar1 - (unaff_r10 + !in_CY);
    bVar2 = unaff_r11 == 0;
  }
  bVar3 = false;
  if (bVar2) {
    bVar3 = (unaff_r5 >> (unaff_r7 & 0x1f) | unaff_r5 << 0x20 - (unaff_r7 & 0x1f)) ==
            unaff_r11 + (uint)!bVar4;
  }
  if (bVar3) {
    software_interrupt(0xb57566);
    software_interrupt(0xb5755f);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

