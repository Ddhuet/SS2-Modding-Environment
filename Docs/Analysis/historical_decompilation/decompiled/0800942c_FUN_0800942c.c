
undefined8 FUN_0800942c(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint *puVar10;
  short *psVar11;
  int *piVar12;
  undefined4 unaff_lr;
  uint local_24;
  
  iVar7 = DAT_08009464;
  iVar3 = DAT_08009460;
  if (((*(uint *)(DAT_08009460 + 0x9c) & 1) == 0) &&
     (iVar4 = FUN_08000470(DAT_08009464), iVar4 == 0)) {
    *(undefined4 *)(iVar7 + 0xc) = DAT_08009578;
    *(undefined4 *)(iVar7 + 0x10) = DAT_0800957c;
    *(undefined4 *)(iVar7 + 0x20) = 0;
    *(undefined4 *)(iVar7 + 8) = 0x50;
    *(undefined4 *)(iVar7 + 0x24) = 0;
    *(short *)(iVar3 + 0x8c) = (short)param_1;
    *(short *)(iVar3 + 0x90) = (short)param_2;
    if ((param_1 == 5) && ((iVar4 = FUN_0800c710(), iVar4 != 0 && (param_2 == 0xd)))) {
      FUN_08000990(1,1);
      FUN_080009f8(0x800,0,1);
      FUN_080009c0(0x1700,0,1);
      local_24 = local_24 & DAT_08009580 | DAT_08009584;
      FUN_08000aa8(1,&local_24);
      local_24 = CONCAT22(local_24._2_2_,(short)DAT_08009588);
      FUN_08000aa8(2,&local_24);
      FUN_0800b150(0x2d,0x1d,0x6000000,0,0xf);
      FUN_0800b358(0x2c,0x1e);
      puVar8 = *(undefined1 **)(iVar3 + 100);
      *(undefined1 **)(iVar3 + 0x68) = puVar8;
      uVar6 = 0;
      do {
        uVar9 = 0;
        uVar6 = uVar6 + 1;
        do {
          *puVar8 = 0;
          puVar8[1] = puVar8[1] & 0x20 | 0x40;
          uVar9 = uVar9 + 1;
          puVar8 = puVar8 + 2;
        } while (uVar9 < 0x1e);
      } while (uVar6 < 0x20);
      *(undefined2 *)(iVar3 + 0x80) = 0;
      *(undefined2 *)(iVar3 + 0x82) = 0;
      *(undefined2 *)(iVar3 + 0x84) = 0;
      *(undefined2 *)(iVar3 + 0x86) = 0;
      *(undefined2 *)(iVar3 + 0x70) = 0x1e;
      *(undefined2 *)(iVar3 + 0x72) = 0x20;
      *(undefined2 *)(iVar3 + 0x74) = 0x1e;
      *(undefined2 *)(iVar3 + 0x76) = 0x20;
      *(undefined2 *)(iVar3 + 0x78) = 0x1e;
      *(undefined2 *)(iVar3 + 0x7a) = 0x20;
      *(undefined4 *)(iVar3 + 0x9c) = 0;
      *(undefined2 *)(iVar3 + 0x7c) = 0;
      *(undefined2 *)(iVar3 + 0x7e) = 0;
    }
    else {
      puVar10 = (uint *)(param_2 * 4 + param_1 * 0x74 + DAT_080095c0 + 0x10);
      iVar7 = FUN_08006d98(*puVar10);
      iVar3 = DAT_080095c4;
      piVar12 = (int *)(DAT_080095c4 + 0xb0);
      *piVar12 = iVar7;
      FUN_08008c3c(iVar7,param_1);
      if ((*puVar10 & 0x40000000) == 0) {
        iVar7 = FUN_08000bc8(*piVar12 + 0x10,iVar3 + 100);
      }
      else {
        iVar7 = *piVar12 + 0x10;
      }
      *(int *)(iVar3 + 0x60) = iVar7;
      iVar3 = DAT_080095fc;
      psVar11 = *(short **)(DAT_080095fc + 0x60);
      iVar7 = FUN_0800c61c();
      if (iVar7 == 0) {
        *(short **)(iVar3 + 0x68) = psVar11 + (int)psVar11[1] * (int)*psVar11 * 3 + 8;
        *(short *)(iVar3 + 0x78) = *psVar11;
        *(short *)(iVar3 + 0x7a) = psVar11[1];
      }
      else {
        *(short **)(iVar3 + 0x6c) = psVar11 + (int)psVar11[1] * (int)*psVar11 * 3 + 8;
      }
      iVar3 = DAT_08009678;
      *(undefined2 *)(DAT_08009678 + 0x80) = 0;
      *(undefined2 *)(iVar3 + 0x82) = 0;
      *(undefined2 *)(iVar3 + 0x84) = 0;
      *(undefined2 *)(iVar3 + 0x86) = 0;
      sVar1 = *psVar11;
      *(short *)(iVar3 + 0x70) = sVar1;
      sVar2 = psVar11[1];
      *(short *)(iVar3 + 0x72) = sVar2;
      *(short *)(iVar3 + 0x74) = sVar1;
      *(short *)(iVar3 + 0x76) = sVar2;
      *(undefined4 *)(iVar3 + 0x9c) = 0;
      *(undefined2 *)(iVar3 + 0x7c) = 0;
      *(undefined2 *)(iVar3 + 0x7e) = 0;
      iVar7 = DAT_0800967c;
    }
    FUN_08000274(iVar7,0);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return CONCAT44(unaff_lr,uVar5);
}

