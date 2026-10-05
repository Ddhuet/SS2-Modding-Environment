
/* WARNING: Control flow encountered bad instruction data */

void FUN_08db61ec(void)

{
  uint uVar1;
  int unaff_r8;
  uint unaff_r10;
  bool in_ZR;
  bool in_CY;
  bool bVar2;
  bool bVar3;
  
  bVar2 = false;
  bVar3 = in_CY;
  if (in_ZR) {
    uVar1 = unaff_r8 * 0x800;
    bVar3 = unaff_r10 < uVar1 || uVar1 - unaff_r10 < (uint)in_CY;
    bVar2 = uVar1 - (unaff_r10 + !in_CY) == 0;
  }
  if (bVar2) {
    software_interrupt(0xeddb88);
    software_interrupt(0xdaadf2);
    software_interrupt(0x7cc7f8);
    software_interrupt(0x377ff8);
  }
  if (bVar3 && !bVar2) {
    software_interrupt(0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

