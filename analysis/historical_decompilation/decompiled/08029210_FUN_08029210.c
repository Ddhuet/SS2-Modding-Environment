
undefined4 FUN_08029210(uint param_1,ushort param_2)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar5;
  undefined4 unaff_lr;
  uint uVar4;
  
  uVar5 = (uint)param_2;
  if (param_1 < 0x100001) {
    if (param_1 == 0) {
      iVar3 = FUN_080020f4();
      iVar3 = iVar3 * 0x154 + DAT_080292d0;
      if ((param_2 & 0x8000) == 0) {
        *(ushort *)(iVar3 + 200) = param_2 & 0x8000;
      }
      else {
        *(undefined2 *)(iVar3 + 200) = 1;
        uVar5 = uVar5 & DAT_080292d4;
      }
      uVar4 = uVar5 >> 8 & 0xf;
      uVar2 = (undefined2)uVar4;
      if (uVar4 == 0) {
        uVar2 = *(undefined2 *)(iVar3 + 0x16);
      }
      *(ushort *)(iVar3 + 0xc2) = (ushort)uVar5 & 0xff;
      *(undefined2 *)(iVar3 + 0xc4) = uVar2;
      *(undefined2 *)(iVar3 + 0xc6) = 0;
      *(undefined2 *)(iVar3 + 0x26) = 0xc;
      *(undefined2 *)(iVar3 + 0x28) = 5;
    }
    else if (param_1 - 1 < 5) {
      iVar3 = *DAT_08029298 + DAT_0802929c * (param_1 - 1);
      *(undefined2 *)(iVar3 + 0xc) = 0xc;
      *(undefined2 *)(iVar3 + 0xe) = 5;
      *(ushort *)(iVar3 + 0x70) = param_2;
      *(undefined2 *)(iVar3 + 0x6c) = 0;
      *(undefined2 *)(iVar3 + 0x6a) = 0;
      *(undefined2 *)(iVar3 + 0x72) = 0;
    }
  }
  else {
    puVar1 = (uint *)(*DAT_08029258 + DAT_0802925c);
    uVar5 = 0;
    do {
      if (*puVar1 == param_1) goto LAB_0802923e;
      uVar5 = uVar5 + 1;
      puVar1 = puVar1 + 0x1c;
    } while (uVar5 < 0xf);
    FUN_080003f0();
    puVar1 = (uint *)0x0;
LAB_0802923e:
    if (puVar1 != (uint *)0x0) {
      *(ushort *)(puVar1 + 0xe) = param_2;
      *(ushort *)(puVar1 + 0xb) = param_2 + (short)puVar1[9];
      *(undefined2 *)(puVar1 + 0xc) = 0;
      *(undefined2 *)((int)puVar1 + 0x2e) = 0;
      *(undefined2 *)((int)puVar1 + 0x32) = 0;
      *(undefined2 *)(puVar1 + 0xd) = 0;
    }
  }
  return unaff_lr;
}

