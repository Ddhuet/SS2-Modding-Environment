
undefined8 FUN_080667ac(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  
  puVar1 = DAT_080667bc;
  uVar4 = *DAT_080667bc;
  if (uVar4 < 0x32) {
    pcVar6 = (char *)*DAT_08066850;
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        if ((*(int *)(pcVar6 + 4) == 1) && (*pcVar6 == -0x72)) {
          iVar3 = FUN_080020f4();
          FUN_080b9a88(iVar3 * 0x154 + DAT_080667e0,pcVar6 + 8,DAT_080667e4);
          goto LAB_08066846;
        }
        uVar5 = uVar5 + 1;
        pcVar6 = pcVar6 + 0x88;
      } while (uVar5 < uVar4);
    }
    puVar7 = (undefined1 *)(*DAT_08066850 + *DAT_080667bc * 0x88);
    *(undefined4 *)(puVar7 + 4) = 1;
    *puVar7 = 0x8e;
    iVar3 = FUN_080020f4();
    FUN_080b9a88(iVar3 * 0x154 + DAT_08066854,puVar7 + 8,DAT_08066858);
    puVar7[1] = 6;
    *puVar1 = *puVar1 + 1;
LAB_08066846:
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(unaff_lr,uVar2);
}

