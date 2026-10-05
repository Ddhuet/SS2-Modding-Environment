
undefined8 FUN_0801f78c(int *param_1,ushort *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  undefined4 unaff_lr;
  uint local_1c;
  
  iVar7 = DAT_0801f8fc;
  iVar9 = *(int *)(*DAT_0801f8ec + 0x48);
  if (iVar9 != 0) {
    piVar11 = (int *)(*DAT_0801f8ec + DAT_0801f8f0);
    uVar12 = 0;
    if (iVar9 != 0) {
      do {
        if ((2 < (ushort)((short)piVar11[5] - 10U)) && ((*(byte *)(piVar11[8] + 0x17a) & 3) == 0)) {
          uVar6 = (local_1c & DAT_0801f8f4 | (uint)*(ushort *)(piVar11[8] + 0x180)) & DAT_0801f8f8;
          local_1c = uVar6 | (uint)*(ushort *)(piVar11[8] + 0x182) << 0x10;
          iVar10 = param_1[1] - piVar11[1] >> 8;
          iVar9 = *param_1 - *piVar11 >> 8;
          if (iVar9 < 0) {
            iVar9 = -iVar9;
          }
          if ((int)((uint)*param_2 + (uVar6 & 0xffff)) >> 1 < iVar9) {
LAB_0801f838:
            bVar1 = false;
          }
          else {
            if (iVar10 < 0) {
              iVar10 = -iVar10;
            }
            bVar1 = true;
            if ((int)((uint)param_2[1] + (local_1c >> 0x10)) >> 1 < iVar10) goto LAB_0801f838;
          }
          if (bVar1) {
            iVar9 = FUN_080020f4();
            uVar6 = (uint)*(ushort *)(iVar9 * 0x154 + iVar7 + 0x60);
            uVar5 = *(ushort *)(piVar11[8] + 0x176);
            uVar3 = FUN_080008c8();
            iVar7 = FUN_080baaf4(uVar3,0x32);
            iVar9 = FUN_080ba8a4(uVar6 * uVar6 * 10,uVar6 + uVar5);
            uVar3 = FUN_080ba8a4((iVar7 * 0x10000 + 0x640000U >> 0x10) * iVar9,100);
            sVar4 = FUN_080baa7c(uVar3,10);
            if (sVar4 == 0) {
              sVar4 = 1;
            }
            *(short *)(piVar11 + 4) = (short)piVar11[4] - sVar4;
            uVar5 = FUN_0801dc54();
            *(ushort *)((int)piVar11 + 0x12) = uVar5 & 0xff;
            FUN_08059a8c(0x1a);
            if ((*(ushort *)(piVar11 + 4) & 0x8000) != 0) {
              *(undefined2 *)(piVar11 + 4) = 0;
            }
            uVar2 = FUN_0801dc54();
            FUN_080283f0(uVar12,sVar4,uVar2);
            *(undefined2 *)(piVar11 + 5) = 10;
            uVar8 = 1;
            goto LAB_0801f914;
          }
        }
        uVar12 = uVar12 + 1;
        piVar11 = piVar11 + 9;
      } while (uVar12 < *(uint *)(*DAT_0801f8ec + 0x48));
    }
  }
  uVar8 = 0;
LAB_0801f914:
  return CONCAT44(unaff_lr,uVar8);
}

