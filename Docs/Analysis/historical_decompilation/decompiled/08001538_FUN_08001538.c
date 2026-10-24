
undefined4 FUN_08001538(uint param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 unaff_lr;
  
  iVar1 = DAT_08001584;
  puVar5 = (uint *)(param_1 - 0x10);
  if ((*(uint *)(DAT_08001584 + 0x10) <= param_1) &&
     (param_1 <= *(uint *)(DAT_08001584 + 0x10) + *(int *)(DAT_08001584 + 0x14))) {
    bVar3 = *(byte *)(param_1 - 0xd) & 0x7f;
    *(byte *)(param_1 - 0xd) = bVar3;
    puVar6 = *(uint **)(param_1 - 0xc);
    puVar4 = (uint *)*puVar5;
    if (*(char *)((int)puVar4 + 3) < '\0') {
      if (*(char *)((int)puVar6 + 3) < '\0') {
        *(byte *)(param_1 - 0xd) = bVar3;
        puVar6 = *(uint **)(iVar1 + 4);
        if (puVar5 != puVar6) {
          while (puVar4 != puVar6) {
            puVar4 = (uint *)(*puVar4 & 0x7fffffff);
            if (-1 < *(char *)((int)puVar4 + 3)) {
              *(uint **)(param_1 - 8) = puVar4;
              *(uint *)(param_1 - 4) = puVar4[3];
              *(uint **)(puVar4[3] + 8) = puVar5;
              puVar4[3] = (uint)puVar5;
              return unaff_lr;
            }
            puVar6 = *(uint **)(iVar1 + 4);
          }
        }
        *(int *)(param_1 - 8) = iVar1;
        iVar2 = *(int *)(iVar1 + 0xc);
        *(int *)(param_1 - 4) = iVar2;
        *(uint **)(iVar2 + 8) = puVar5;
        *(uint **)(iVar1 + 0xc) = puVar5;
      }
      else {
        *(uint *)(param_1 - 0xc) = puVar6[1];
        *(uint *)puVar6[1] = *(uint *)puVar6[1] & 0x80000000 | DAT_080015f4 & (uint)puVar5;
        *(uint *)(param_1 - 8) = puVar6[2];
        *(uint *)(param_1 - 4) = puVar6[3];
        *(uint **)(puVar6[2] + 0xc) = puVar5;
        *(uint **)(puVar6[3] + 8) = puVar5;
        *(byte *)(param_1 - 0xd) = *(byte *)(param_1 - 0xd) & 0x7f;
      }
    }
    else {
      *puVar6 = *puVar6 & 0x80000000 | DAT_08001588 & (uint)puVar4;
      puVar4[1] = (uint)puVar6;
      if (*(int *)(iVar1 + 0xc) == iVar1) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (-1 < *(char *)((int)puVar6 + 3)) {
        puVar4[1] = puVar6[1];
        *(uint *)puVar6[1] = *(uint *)puVar6[1] & 0x80000000 | (uint)puVar4 & DAT_080015b8;
        *(uint *)(puVar6[2] + 0xc) = puVar6[3];
        *(uint *)(puVar6[3] + 8) = puVar6[2];
      }
    }
  }
  return unaff_lr;
}

