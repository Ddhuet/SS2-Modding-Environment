
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ca3cf8(void)

{
  uint unaff_r4;
  uint uVar1;
  uint unaff_r8;
  int unaff_r9;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar2;
  
  bVar2 = false;
  if (in_ZR) {
    in_CY = (byte)(unaff_r8 >> 7) & 1;
    uVar1 = (unaff_r4 & 0xffff | 0x5b440000) ^ (int)unaff_r8 >> 8;
    in_NG = (int)uVar1 < 0;
    bVar2 = uVar1 == 0;
  }
  if (!(bool)in_CY || bVar2) {
    if ((bool)in_CY && !bVar2) {
      in_r12 = *(undefined4 *)(unaff_r9 + 4);
      register0x00000054 = *(BADSPACEBASE **)(unaff_r9 + 8);
      unaff_r9 = unaff_r9 + 8;
    }
    if (in_NG != in_OV) {
      *(undefined4 *)(unaff_r9 + 4) = in_r12;
      *(BADSPACEBASE **)(unaff_r9 + 8) = register0x00000054;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

