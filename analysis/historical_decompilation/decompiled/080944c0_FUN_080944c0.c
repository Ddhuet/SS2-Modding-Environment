
void FUN_080944c0(void)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  uVar8 = 0;
  uVar9 = 0;
  uStack_24 = 0;
  uVar11 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  uVar10 = 6;
  uStack_28 = 10;
  sVar3 = FUN_0800086c();
  sVar3 = FUN_080ba93c((int)sVar3,0x14);
  puVar2 = DAT_08094520;
  puVar1 = DAT_0809451c;
  iVar4 = (int)sVar3;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  uVar7 = iVar4 + 10U & 0xffff;
  do {
    if (uVar9 == 1) {
      uVar10 = 0x16;
      uStack_28 = 10;
      *puVar1 = 1;
      iVar4 = uVar8 * -0x10000;
      uVar8 = uVar8 * 0x10000 + 0x10000 >> 0x10;
      if (uVar7 * 0x10000 + iVar4 == 0) {
        iVar4 = FUN_0800086c();
        iVar6 = (iVar4 << 0x10) >> 0x10;
        iVar4 = (iVar6 + (iVar6 - ((iVar4 << 0x10) >> 0x1f) >> 1) * -2) * 0x10000 >> 0x10;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        uVar7 = iVar4 + 2U & 0xffff;
        uVar9 = 2;
        uVar8 = 0;
      }
    }
    else if (uVar9 < 2) {
      if (uVar9 == 0) {
        uVar10 = 6;
        uStack_28 = 10;
        *puVar1 = 0;
        if ((*DAT_08094588 != '\0') &&
           (iVar4 = uVar8 * 0x10000, uVar8 = uVar8 * 0x10000 + 0x10000 >> 0x10,
           (int)(uVar7 * 0x10000) < iVar4)) {
          sVar3 = FUN_0800086c();
          iVar6 = (int)sVar3;
          iVar4 = iVar6;
          if (iVar6 < 0) {
            iVar4 = iVar6 + 3;
          }
          iVar4 = (iVar6 + (iVar4 >> 2) * -4) * 0x10000 >> 0x10;
          if (iVar4 < 0) {
            iVar4 = -iVar4;
          }
          uVar7 = iVar4 + 2U & 0xffff;
          uVar9 = 1;
          uVar8 = 0;
        }
      }
    }
    else if (uVar9 == 2) {
      uVar10 = 0x16;
      uStack_28 = 0x1a;
      *puVar1 = 1;
      if (*DAT_08094600 == '\0') {
        iVar4 = uVar8 * -0x10000;
        uVar8 = uVar8 * 0x10000 + 0x10000 >> 0x10;
        if (uVar7 * 0x10000 + iVar4 == 0) {
          sVar3 = FUN_0800086c();
          iVar6 = (int)sVar3;
          iVar4 = iVar6;
          if (iVar6 < 0) {
            iVar4 = iVar6 + 3;
          }
          iVar4 = (iVar6 + (iVar4 >> 2) * -4) * 0x10000 >> 0x10;
          if (iVar4 < 0) {
            iVar4 = -iVar4;
          }
          uVar7 = iVar4 + 2U & 0xffff;
          uVar9 = 3;
          uVar8 = 0;
        }
      }
      else {
        uVar5 = uVar8 * 0x10000 + 0x10000;
        uVar8 = uVar5 >> 0x10;
        if ((int)uVar5 >> 0x10 == 0xd) {
          *DAT_08094600 = '\x02';
        }
      }
    }
    else if (uVar9 == 3) {
      uVar10 = 6;
      uStack_28 = 0x1a;
      *puVar1 = 1;
      iVar4 = uVar8 * -0x10000;
      uVar8 = uVar8 * 0x10000 + 0x10000 >> 0x10;
      if (uVar7 * 0x10000 + iVar4 == 0) {
        sVar3 = FUN_0800086c();
        sVar3 = FUN_080ba93c((int)sVar3,0x14);
        iVar4 = (int)sVar3;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        uVar7 = iVar4 + 10U & 0xffff;
        uVar9 = 0;
        uVar8 = 0;
      }
    }
    FUN_08008b40(1,0x32,1,uVar10,uStack_28,0);
    iStack_30 = iStack_30 + -0x200;
    *puVar2 = (short)((uint)iStack_30 >> 8);
    puVar2[1] = (short)(*(short *)(uVar11 * 2 + DAT_08094700) * 3 >> 6) + 0xc;
    uVar11 = uVar11 + 2 & 0xff;
    iStack_2c = iStack_2c + -0x44;
    puVar2[2] = (short)((uint)iStack_2c >> 8);
    puVar2[3] = 0xc - (short)(*(short *)(uStack_24 * 2 + DAT_08094700) * 3 >> 7);
    uStack_24 = uStack_24 + 1 & 0xff;
    FUN_080003f0();
  } while( true );
}

