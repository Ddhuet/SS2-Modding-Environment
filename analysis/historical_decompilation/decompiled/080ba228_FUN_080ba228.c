
undefined8 FUN_080ba228(uint param_1,int param_2)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  byte bVar8;
  int iVar9;
  undefined4 unaff_lr;
  undefined2 local_7c;
  
  puVar5 = &local_7c;
  param_1 = param_1 & 0xffff;
  uVar4 = DAT_080ba244;
  if (0xf < param_1) {
LAB_080ba336:
    return CONCAT44(unaff_lr,uVar4);
  }
  iVar9 = (param_1 << *(sbyte *)(*DAT_080ba268 + 8)) + 0xe000000;
  puVar7 = (undefined2 *)(DAT_080ba26c & 0xfffffffe);
  for (uVar4 = DAT_080ba270 - DAT_080ba26c; (uVar4 & 0xffff) != 0; uVar4 = (uVar4 & 0xffff) - 2) {
    *puVar5 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar5 = puVar5 + 1;
  }
  cVar2 = '\0';
LAB_080ba294:
  uVar4 = FUN_080ba154(param_1);
  uVar4 = uVar4 & 0xffff;
  if (uVar4 == 0) {
    uVar4 = FUN_080ba370(iVar9,(int)&local_7c + 1);
    uVar4 = uVar4 & 0xffff;
    if (uVar4 == 0) {
      bVar8 = 1;
      if (cVar2 != '\0') {
        bVar8 = 6;
      }
      bVar3 = 1;
      if (bVar8 != 0) {
        do {
          FUN_080ba154(param_1);
          bVar3 = bVar3 + 1;
        } while (bVar3 <= bVar8);
      }
      FUN_080b9cd8(&local_7c);
      iVar6 = *DAT_080ba2fc;
      *DAT_080ba2f4 = *DAT_080ba2f4 & (ushort)DAT_080ba2f8 | *(ushort *)(iVar6 + 0x10);
      psVar1 = DAT_080ba300;
      *DAT_080ba300 = (short)*(undefined4 *)(iVar6 + 4);
      while (*psVar1 != 0) {
        uVar4 = FUN_080ba1f0(param_2,iVar9);
        uVar4 = uVar4 & 0xffff;
        if (uVar4 != 0) break;
        *psVar1 = *psVar1 + -1;
        param_2 = param_2 + 1;
        iVar9 = iVar9 + 1;
      }
      *DAT_080ba344 = *DAT_080ba344 & (ushort)DAT_080ba348 | 3;
      goto LAB_080ba336;
    }
  }
  cVar2 = cVar2 + '\x01';
  if (cVar2 == 'Q') goto LAB_080ba336;
  goto LAB_080ba294;
}

