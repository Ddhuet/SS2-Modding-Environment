
undefined8 FUN_080669e8(void)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  
  piVar2 = DAT_08066a64;
  puVar1 = DAT_080669f8;
  if (*DAT_080669f8 < 0x32) {
    if (*(int *)(*DAT_08066a64 + DAT_08066a68) != 0) {
      puVar7 = (undefined1 *)(*DAT_08066a6c + *DAT_080669f8 * 0x88);
      *(undefined4 *)(puVar7 + 4) = 1;
      *puVar7 = 0x94;
      piVar4 = (int *)(*piVar2 + DAT_08066a68);
      FUN_080b9a88(piVar4,puVar7 + 8,*piVar4 + 1U & DAT_08066a70 | 0x4000000);
      iVar6 = *(int *)(*piVar2 + DAT_08066a68) * 4;
      uVar5 = iVar6 + 4;
      if ((uVar5 & 7) != 0) {
        uVar5 = (iVar6 + 0xc) - (uVar5 & 7);
      }
      puVar7[1] = (char)(uVar5 >> 3);
      *puVar1 = *puVar1 + 1;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return CONCAT44(unaff_lr,uVar3);
}

