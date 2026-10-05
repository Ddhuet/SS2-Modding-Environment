
undefined8 FUN_0806671c(char *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  
  puVar1 = DAT_08066730;
  uVar3 = *DAT_08066730;
  if (uVar3 < 0x32) {
    pcVar5 = (char *)*DAT_080667a4;
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        if (((*(int *)(pcVar5 + 4) == 1) && (*pcVar5 == -0x76)) && (pcVar5[8] == *param_1)) {
          *(short *)(pcVar5 + 0xc) = *(short *)(param_1 + 4) + *(short *)(pcVar5 + 0xc);
          pcVar5[0xb] = param_1[3];
          pcVar5[10] = param_1[2];
          goto LAB_0806679c;
        }
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 0x88;
      } while (uVar4 < uVar3);
    }
    puVar6 = (undefined1 *)(*DAT_080667a4 + *DAT_08066730 * 0x88);
    *(undefined4 *)(puVar6 + 4) = 1;
    *puVar6 = 0x8a;
    FUN_080b9a88(param_1,puVar6 + 8,DAT_080667a8);
    puVar6[1] = 1;
    *puVar1 = *puVar1 + 1;
LAB_0806679c:
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(unaff_lr,uVar2);
}

