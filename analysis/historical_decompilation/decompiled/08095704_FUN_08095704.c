
undefined4 FUN_08095704(void)

{
  undefined2 *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_lr;
  
  puVar1 = DAT_0809581c;
  iVar7 = DAT_08095818;
  sVar5 = *(short *)((*(byte *)(DAT_0809581c + 6) + 0x40) * 2 + DAT_08095818);
  uVar6 = FUN_08090838(*DAT_0809581c);
  sVar2 = FUN_080907d8((int)sVar5,uVar6);
  sVar5 = *(short *)((uint)*(byte *)(puVar1 + 6) * 2 + iVar7);
  uVar6 = FUN_08090838(*puVar1);
  sVar3 = FUN_080907d8((int)sVar5,uVar6);
  sVar5 = *(short *)((uint)*(byte *)(puVar1 + 6) * 2 + iVar7);
  uVar6 = FUN_08090838(puVar1[1]);
  sVar4 = FUN_080907d8(-(int)sVar5,uVar6);
  sVar5 = *(short *)((*(byte *)(puVar1 + 6) + 0x40) * 2 + iVar7);
  uVar6 = FUN_08090838(puVar1[1]);
  sVar5 = FUN_080907d8((int)sVar5,uVar6);
  iVar10 = (0x78 - ((int)(((uint)(ushort)puVar1[4] + (uint)(ushort)puVar1[2]) * 0x10000) >> 0x10)) *
           0x100 + sVar2 * -0x78 + sVar3 * -0x50;
  iVar9 = (0x78 - ((int)(((uint)(ushort)puVar1[5] + (uint)(ushort)puVar1[3]) * 0x10000) >> 0x10)) *
          0x100 + sVar4 * -0x78 + sVar5 * -0x50;
  iVar7 = FUN_0800c61c();
  if (((iVar7 == 0) && (iVar7 = FUN_0800c5e8(), iVar7 == 0)) &&
     (iVar8 = FUN_0800c684(), iVar7 = DAT_08095820, iVar8 == 0)) {
    *(short *)(DAT_08095820 + 0x10) = sVar2;
    *(short *)(iVar7 + 0x12) = sVar3;
    *(short *)(iVar7 + 0x14) = sVar4;
    *(short *)(iVar7 + 0x16) = sVar5;
    *(short *)(iVar7 + 0x18) = (short)iVar10;
    *(short *)(iVar7 + 0x1c) = (short)iVar9;
    *(short *)(iVar7 + 0x1a) = (short)((uint)iVar10 >> 0x10);
    *(short *)(iVar7 + 0x1e) = (short)((uint)iVar9 >> 0x10);
  }
  return unaff_lr;
}

