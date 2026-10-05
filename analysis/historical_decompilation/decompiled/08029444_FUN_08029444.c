
undefined4 FUN_08029444(uint param_1,ushort param_2)

{
  undefined2 uVar1;
  uint *puVar2;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  uint uVar3;
  
  uVar5 = (uint)param_2;
  if (param_1 < 0x100001) {
    if (param_1 == 0) {
      iVar4 = FUN_080020f4();
      iVar4 = iVar4 * 0x154 + DAT_08029508;
      if ((param_2 & 0x8000) == 0) {
        *(ushort *)(iVar4 + 200) = param_2 & 0x8000;
      }
      else {
        *(undefined2 *)(iVar4 + 200) = 1;
        uVar5 = uVar5 & DAT_0802950c;
      }
      uVar3 = uVar5 >> 8 & 0xf;
      uVar1 = (undefined2)uVar3;
      if (uVar3 == 0) {
        uVar1 = *(undefined2 *)(iVar4 + 0x16);
      }
      *(ushort *)(iVar4 + 0xc2) = (ushort)uVar5 & 0xff;
      *(undefined2 *)(iVar4 + 0xc4) = uVar1;
      *(undefined2 *)(iVar4 + 0xc6) = 1;
      *(undefined2 *)(iVar4 + 0x26) = 0xc;
      *(undefined2 *)(iVar4 + 0x28) = 5;
    }
    else if (param_1 - 1 < 5) {
      iVar4 = *DAT_080294d0 + DAT_080294d4 * (param_1 - 1);
      *(undefined2 *)(iVar4 + 0xc) = 0xc;
      *(undefined2 *)(iVar4 + 0xe) = 5;
      *(ushort *)(iVar4 + 0x70) = param_2;
      *(undefined2 *)(iVar4 + 0x6c) = 0;
      *(undefined2 *)(iVar4 + 0x6a) = 0;
      *(undefined2 *)(iVar4 + 0x72) = 1;
    }
  }
  else {
    puVar2 = (uint *)(*DAT_0802948c + DAT_08029490);
    uVar5 = 0;
    do {
      if (*puVar2 == param_1) goto LAB_08029472;
      uVar5 = uVar5 + 1;
      puVar2 = puVar2 + 0x1c;
    } while (uVar5 < 0xf);
    FUN_080003f0();
    puVar2 = (uint *)0x0;
LAB_08029472:
    if (puVar2 != (uint *)0x0) {
      *(ushort *)(puVar2 + 0xe) = param_2;
      *(ushort *)(puVar2 + 0xb) = param_2 + (short)puVar2[9];
      *(undefined2 *)(puVar2 + 0xc) = 0;
      *(undefined2 *)((int)puVar2 + 0x2e) = 0;
      *(undefined2 *)((int)puVar2 + 0x32) = 0;
      *(undefined2 *)(puVar2 + 0xd) = 1;
    }
  }
  return unaff_lr;
}

