
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x087f3d70) */
/* WARNING: Removing unreachable block (ram,0x087f3d78) */

void FUN_087f3d14(void)

{
  int iVar1;
  int unaff_r5;
  int *unaff_r6;
  uint unaff_r7;
  uint uVar2;
  uint unaff_r8;
  uint unaff_r9;
  int unaff_r10;
  int iVar3;
  undefined4 unaff_r11;
  undefined4 *unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (!in_CY || in_ZR) {
    *unaff_lr = unaff_r11;
  }
  if (!in_ZR && in_NG == in_OV) {
    unaff_r8 = 0xaff3d20;
  }
  if (in_NG == in_OV) {
    unaff_r9 = unaff_r8 | 0xac00000;
  }
  iVar3 = unaff_r10;
  if (!in_CY || in_ZR) {
    unaff_r7 = unaff_r9 | 0x2b00000;
    coprocessor_loadlong(1,in_cr1,unaff_r8);
    iVar3 = unaff_r10 + 0xa8;
    coprocessor_loadlong(2,in_cr6,unaff_r10);
    coprocessor_loadlong(8,in_cr15,0x87f3d38);
    coprocessor_loadlong(8,in_cr15,0x87f3d3c);
    coprocessor_store(8,in_cr14,0x87f3d40);
  }
  uVar2 = unaff_r7;
  if (in_NG == in_OV) {
    coprocessor_load(8,in_cr15,iVar3);
    uVar2 = unaff_r7 - 0x1a8;
    coprocessor_loadlong(0xd,in_cr10,unaff_r7);
    coprocessor_loadlong(9,in_cr7,unaff_r9);
  }
  iVar1 = (int)uVar2 >> 0x18;
  if (in_OV) {
    SignedSaturate(iVar1,0x10);
    SignedDoesSaturate(iVar1,0x10);
  }
  if (in_NG) {
    coprocessor_storelong(0xc,in_cr15,0x87f3d58);
  }
  if (in_ZR || in_NG != in_OV) {
    SignedSaturate(unaff_r5 >> 0x14,0xb);
    SignedDoesSaturate(unaff_r5 >> 0x14,0xb);
    if (in_NG == in_OV) {
      unaff_r6 = (int *)((int)unaff_r6 + 0xc59);
      *unaff_r6 = iVar3;
    }
    if (in_NG) {
      if (!in_CY) {
        return;
      }
      uRam087f3d98 = uRam087f3d98;
      uRam087f3d94 = uRam087f3d94;
      uRam087f3d90 = uRam087f3d90;
      uRam087f3d8c = uRam087f3d8c;
      uRam087f3d88 = uRam087f3d88;
      uRam087f3d84 = uRam087f3d84;
      uRam087f3d80 = uRam087f3d80;
      uRam087f3d7c = uRam087f3d7c;
      uRam087f3d78 = uRam087f3d78;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    SignedSaturate(iVar1,7);
    SignedDoesSaturate(iVar1,7);
    *(char *)(iVar3 + 0xa57) = (char)unaff_r6;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

