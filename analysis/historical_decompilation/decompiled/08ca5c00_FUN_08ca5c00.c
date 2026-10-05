
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ca5c00(void)

{
  uint uVar1;
  uint in_r3;
  uint unaff_r5;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 in_r12;
  bool in_ZR;
  bool in_CY;
  bool bVar2;
  
  bVar2 = false;
  if (in_ZR) {
    uVar1 = unaff_r5 & 0xff;
    in_CY = uVar1 == 0 && in_CY || uVar1 != 0 && (bool)((byte)(in_r3 >> 0x20 - uVar1) & 1);
    bVar2 = unaff_r5 == in_r3 << uVar1;
  }
  if (!in_CY) {
    in_r12 = *(undefined4 *)(unaff_r9 + 4);
  }
  if (in_CY && !bVar2) {
    return;
  }
  *(undefined4 *)(in_r3 + 4) = unaff_r8;
  *(int *)(in_r3 + 8) = unaff_r9;
  *(undefined4 *)(in_r3 + 0xc) = in_r12;
  *(undefined4 *)(in_r3 + 0x10) = 0x8ca5c10;
  if (!in_CY || bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

