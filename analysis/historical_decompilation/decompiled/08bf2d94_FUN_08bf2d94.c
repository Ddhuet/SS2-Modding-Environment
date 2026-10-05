
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bf2d94(void)

{
  int unaff_r4;
  uint unaff_r5;
  uint unaff_r9;
  uint uVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = false;
  if (in_ZR) {
    uVar1 = unaff_r9 ^ unaff_r4 >> (unaff_r5 & 0xff);
    in_NG = (int)uVar1 < 0;
    bVar2 = uVar1 == 0;
  }
  uVar3 = false;
  if (bVar2) {
    uVar1 = unaff_r9 ^ unaff_r4 >> 8;
    in_NG = (int)uVar1 < 0;
    uVar3 = uVar1 == 0;
  }
  if ((bool)uVar3) {
    func_0x09a5dab4();
  }
  if ((bool)uVar3) {
    func_0x09a59878();
  }
  if (in_NG == in_OV) {
    if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

