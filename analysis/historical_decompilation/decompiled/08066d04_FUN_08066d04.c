
undefined4 FUN_08066d04(char *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined4 unaff_lr;
  int aiStack_38 [4];
  int iStack_28;
  uint uStack_24;
  
  piVar5 = aiStack_38;
  param_1[4] = '\x02';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  iStack_28 = FUN_080020f4();
  iVar2 = FUN_08002118();
  for (uVar8 = 0; uVar4 = FUN_08002164(), uVar8 < uVar4; uVar8 = uVar8 + 1) {
    iVar3 = FUN_08002238(uVar8);
    *piVar5 = iVar3 + 0x14 + iStack_28;
    piVar5 = piVar5 + 1;
  }
  uVar8 = FUN_08002164();
LAB_08066d4a:
  do {
    do {
      *(undefined1 *)(iVar2 + 8) = 0xb1;
      *(char *)(iVar2 + 9) = *param_1;
      *(char *)(iVar2 + 10) = param_1[1];
      FUN_080003f0();
      uVar4 = 0;
      uVar9 = 0;
      if (uVar8 != 0) {
        piVar5 = aiStack_38;
        do {
          if (*(char *)*piVar5 == *param_1) {
            uVar4 = uVar4 + 1;
          }
          piVar5 = piVar5 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar8);
      }
    } while (uVar4 < uVar8);
    uVar9 = 0;
    uStack_24 = 0;
    uVar4 = 0;
    if (param_1[1] != '\0') {
      pcVar11 = param_1 + 8;
      do {
        *(undefined1 *)(iVar2 + 9) = 0xb2;
        *(undefined1 *)(iVar2 + 8) = (undefined1)iStack_28;
        *(char *)(iVar2 + 10) = (char)(uVar4 >> 1) + '\x01';
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)pcVar11;
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(pcVar11 + 4);
        FUN_080003f0();
        uVar6 = 0;
        uVar7 = 0;
        if (uVar8 != 0) {
          piVar5 = aiStack_38;
          do {
            if (0x7f - (uVar4 >> 1) == (uint)*(byte *)*piVar5) {
              uVar6 = uVar6 + 1;
            }
            piVar5 = piVar5 + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar8);
        }
        if (uVar6 == uVar8) {
          pcVar11 = pcVar11 + 8;
          uVar4 = uVar4 + 2;
          uVar9 = 0;
          uStack_24 = uVar4;
        }
        else if (uStack_24 == uVar4) {
          uVar9 = uVar9 + 1;
        }
        if (0x3c < uVar9) goto LAB_08066d4a;
      } while (uVar4 < (uint)(byte)param_1[1] << 1);
    }
    if (uVar9 < 0x3d) {
      *(char *)(iVar2 + 10) = (char)uVar4 + '\x01';
      FUN_0800224c();
      puVar1 = DAT_08066e74;
      uVar8 = *DAT_08066e74;
      *DAT_08066e74 = uVar8 - 1;
      if ((int)(uVar8 - 1) < 0) {
        *puVar1 = 0;
      }
      iVar12 = *DAT_08066e78;
      uVar8 = 0;
      iVar10 = iVar12;
      iVar3 = iVar12;
      if (*puVar1 != 0) {
        do {
          FUN_080babb4(iVar10,iVar3 + 0x88,0x88);
          uVar8 = uVar8 + 1;
          iVar10 = iVar10 + 0x88;
          iVar3 = iVar3 + 0x88;
        } while (uVar8 < *puVar1);
      }
      *(undefined4 *)(uVar8 * 0x88 + iVar12 + 4) = 0;
      *(undefined1 *)(iVar2 + 9) = 0x80;
      return unaff_lr;
    }
  } while( true );
}

