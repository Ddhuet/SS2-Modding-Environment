
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b16f54(void)

{
  int unaff_r4;
  uint unaff_r5;
  uint uVar1;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar2;
  undefined1 uVar3;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  bVar2 = false;
  if (in_ZR) {
    uVar1 = (uint)&stack0x00000000 ^ unaff_r4 >> (unaff_r5 & 0xff);
    in_NG = (int)uVar1 < 0;
    bVar2 = uVar1 == 0;
  }
  uVar3 = false;
  if (bVar2) {
    uVar1 = (uint)&stack0x00000000 ^ unaff_r4 >> 8;
    in_NG = (int)uVar1 < 0;
    uVar3 = uVar1 == 0;
  }
  if ((bool)uVar3) {
    unaff_lr = 0x8b16f60;
    func_0x09a91c74();
  }
  if ((bool)uVar3) {
    unaff_lr = 0x8b16f64;
    func_0x09a8ea38();
  }
  if (in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)coprocessor_movefromRt(0xe,6,1,in_cr13,in_cr0);
  }
  coprocessor_moveto(0xe,7,1,unaff_lr,in_cr14,in_cr0);
  if ((bool)uVar3 || in_NG != in_OV) {
    coprocessor_loadlong(0xe,in_cr11,(undefined1 *)((int)register0x00000054 + 0xc0));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

