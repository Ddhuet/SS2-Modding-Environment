
undefined4 FUN_0804d21c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  undefined4 unaff_lr;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar2 = FUN_0800c780();
  if (iVar2 == 0) {
    iVar2 = *DAT_0804d2a0;
    iVar4 = 0x1b8;
  }
  else {
    iVar2 = *DAT_0804d23c;
    iVar4 = 0x1c4;
  }
  if (((int)(uint)*(byte *)(iVar2 + iVar4) >> 6 & 1U) == 0) {
    iVar2 = FUN_080020f4();
    iVar2 = iVar2 * 0x154 + DAT_0804d2a4;
    *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
    FUN_0800ca44();
    iVar2 = 0;
    uVar6 = 0;
    psVar5 = (short *)(*DAT_0804d2a8 + 0x158);
    do {
      if ((*psVar5 == 1) && (psVar5[1] == 0x22)) {
        iVar2 = iVar2 + 1;
      }
      psVar5 = psVar5 + 8;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x19);
    if (iVar2 == 0) {
      while (iVar2 = FUN_0805fa94(), iVar2 != 0) {
        FUN_080003f0();
      }
      while (iVar2 = FUN_0805f8b4(), iVar2 != 0) {
        FUN_080003f0();
      }
      uVar3 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804d3bc);
      while (iVar2 = FUN_0805f820(uVar3), uVar1 = DAT_0804d3dc, iVar2 == 0) {
        FUN_080003f0();
      }
      iVar2 = *DAT_0804d3e0 + DAT_0804d3e4;
      for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
        iVar4 = FUN_08000470(iVar2);
        if (iVar4 == 0) {
          local_30 = 0xb700;
          local_2c = 0xc800;
          local_28 = 0x14;
          local_26 = 0xe;
          local_24 = uVar1;
          *(undefined4 *)(iVar2 + 8) = 0x3c;
          local_20 = param_1;
          iVar4 = FUN_08001494(0x400);
          *(int *)(iVar2 + 0x20) = iVar4;
          *(undefined4 *)(iVar2 + 0xc) = DAT_0804d474;
          *(int *)(iVar2 + 0x10) = iVar4 + 0x3fc;
          *(undefined4 *)(iVar2 + 0x24) = 0;
          FUN_08000274(iVar2,&local_30,1);
          FUN_080003f0();
          FUN_080003f0();
          break;
        }
        iVar2 = iVar2 + 0x28;
      }
    }
    else {
      while (iVar2 = FUN_0805fa94(), iVar2 != 0) {
        FUN_080003f0();
      }
      uVar3 = FUN_0805e608(1,0xf,2,0,0xfffffffe,DAT_0804d2d4);
      while (iVar2 = FUN_0805f820(uVar3), iVar2 == 0) {
        FUN_080003f0();
      }
      iVar2 = FUN_0805f838(uVar3);
      uVar3 = DAT_0804d314;
      if (iVar2 == 1) {
        uVar3 = FUN_080020f4();
        FUN_0806870c(DAT_0804d300,uVar3);
      }
      else {
        iVar2 = *DAT_0804d318 + DAT_0804d31c;
        for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
          iVar4 = FUN_08000470(iVar2);
          if (iVar4 == 0) {
            local_30 = 0xb700;
            local_2c = 0xc800;
            local_28 = 0x14;
            local_26 = 0xe;
            local_24 = uVar3;
            *(undefined4 *)(iVar2 + 8) = 0x3c;
            local_20 = param_1;
            iVar4 = FUN_08001494(0x400);
            *(int *)(iVar2 + 0x20) = iVar4;
            *(undefined4 *)(iVar2 + 0xc) = DAT_0804d384;
            *(int *)(iVar2 + 0x10) = iVar4 + 0x3fc;
            *(undefined4 *)(iVar2 + 0x24) = 0;
            FUN_08000274(iVar2,&local_30,1);
            FUN_080003f0();
            FUN_080003f0();
            break;
          }
          iVar2 = iVar2 + 0x28;
        }
      }
    }
    iVar2 = FUN_080020f4();
    iVar2 = iVar2 * 0x154 + DAT_0804d478;
    *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) & 0xfffffffe;
    FUN_0800ca58();
  }
  return unaff_lr;
}

