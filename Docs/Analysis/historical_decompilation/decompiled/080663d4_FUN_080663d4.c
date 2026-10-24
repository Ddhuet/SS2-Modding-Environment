
undefined8 FUN_080663d4(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  
  puVar1 = DAT_080663e4;
  uVar4 = *DAT_080663e4;
  if (uVar4 < 0x32) {
    pcVar6 = (char *)*DAT_08066460;
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        if ((*(int *)(pcVar6 + 4) == 1) && (*pcVar6 == -0x7d)) {
          iVar3 = FUN_080020f4();
          *(uint *)(pcVar6 + 8) = (uint)*(ushort *)(iVar3 * 0x154 + DAT_08066400 + 0x16);
          goto LAB_08066458;
        }
        uVar5 = uVar5 + 1;
        pcVar6 = pcVar6 + 0x88;
      } while (uVar5 < uVar4);
    }
    puVar7 = (undefined1 *)(*DAT_08066460 + *DAT_080663e4 * 0x88);
    *(undefined4 *)(puVar7 + 4) = 1;
    *puVar7 = 0x83;
    iVar3 = FUN_080020f4();
    *(uint *)(puVar7 + 8) = (uint)*(ushort *)(iVar3 * 0x154 + DAT_08066464 + 0x16);
    puVar7[1] = 1;
    *puVar1 = *puVar1 + 1;
LAB_08066458:
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(unaff_lr,uVar2);
}

