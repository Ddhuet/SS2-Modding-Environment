
undefined8 FUN_08097054(int param_1,uint *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 unaff_lr;
  
  param_3 = param_3 & 0xffff;
  param_4 = param_4 & 0xffff;
  uVar3 = 1;
  if (param_3 < param_4) {
    bVar2 = 0;
    puVar7 = (uint *)(param_1 + -2);
    do {
      puVar8 = (uint *)((int)puVar7 + 2);
      uVar5 = *puVar8;
      uVar6 = *param_2;
      cVar1 = FUN_080ba8a4(((uVar6 & 0x1f) - (uVar5 & 0x1f)) * param_3,param_4);
      *(byte *)puVar8 = *(byte *)puVar8 & 0xe0 | (char)(uVar5 & 0x1f) + cVar1 & 0x1fU;
      uVar5 = (*puVar8 & 0x3ff) >> 5;
      iVar4 = FUN_080ba8a4((((uVar6 & 0x3ff) >> 5) - uVar5) * param_3,param_4);
      *(ushort *)puVar8 =
           *(ushort *)puVar8 & (ushort)DAT_08097130 | (ushort)((uVar5 + iVar4 & 0x1f) << 5);
      uVar5 = (*puVar8 & 0x7fff) >> 10;
      iVar4 = FUN_080ba8a4((((uVar6 & 0x7fff) >> 10) - uVar5) * param_3,param_4);
      *(byte *)((int)puVar7 + 3) =
           *(byte *)((int)puVar7 + 3) & 3 | (byte)((uVar5 + iVar4 & 0x1f) << 2);
      bVar2 = bVar2 + 1;
      puVar7 = puVar8;
      param_2 = (uint *)((int)param_2 + 2);
    } while (bVar2 < 0x10);
    uVar3 = 0;
  }
  return CONCAT44(unaff_lr,uVar3);
}

