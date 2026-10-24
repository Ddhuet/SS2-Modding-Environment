
/* WARNING: Control flow encountered bad instruction data */

void FUN_080ef57a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 extraout_r2;
  uint unaff_r4;
  int unaff_r10;
  uint in_r12;
  uint extraout_r12;
  undefined4 unaff_pc;
  bool in_CY;
  undefined1 in_OV;
  bool bVar2;
  bool bVar3;
  
  if (!in_CY) {
    func_0x08a73966();
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
  }
  bVar2 = (bool)in_OV && SBORROW4(0x80ef58a,(int)in_r12 >> 0x10);
  uVar1 = unaff_r10 << (unaff_r4 & 0xff);
  bVar3 = (undefined4 *)~uVar1 == (undefined4 *)0x0;
  if (bVar3 || -1 < (int)uVar1 != bVar2) {
    software_interrupt(0xd7d4d8);
  }
  if (!bVar3) {
    *(undefined4 *)(unaff_r10 - (in_r12 >> 0x17 | in_r12 << 9)) = unaff_pc;
    *(undefined4 *)~uVar1 = param_3;
  }
  if (!bVar3 && -1 < (int)uVar1 == bVar2) {
    software_interrupt(0xe2f507);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

