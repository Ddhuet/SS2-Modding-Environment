
undefined8 FUN_0805ddf0(ushort param_1,ushort param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  param_3 = param_3 & 0xff;
  param_4 = param_4 & 0xff;
  uVar5 = 0;
  do {
    if (((int)(uint)*DAT_0805de30 >> uVar5 & 1U) == 0) goto LAB_0805de22;
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 4);
  uVar5 = 0xff;
LAB_0805de22:
  if (uVar5 == 0xff) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(*DAT_0805de68 + uVar5 * 0x34);
    *(char *)((int)puVar3 + 0x31) = (char)uVar5;
    *(ushort *)(puVar3 + 10) = (param_1 & 0xff) + (short)(param_3 >> 1) + 1;
    *(ushort *)((int)puVar3 + 0x2a) = (short)(param_4 >> 1) + 1 + (param_2 & 0xff);
    if (param_3 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0x1c;
      if (param_3 < 0x1d) {
        uVar2 = (undefined2)param_3;
      }
    }
    *(undefined2 *)(puVar3 + 0xb) = uVar2;
    if (param_4 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0x12;
      if (param_4 < 0x13) {
        uVar2 = (undefined2)param_4;
      }
    }
    *(undefined2 *)((int)puVar3 + 0x2e) = uVar2;
    uVar1 = *(ushort *)(puVar3 + 0xb) >> 1;
    if (0x1e < (uint)*(ushort *)(puVar3 + 10) + (uint)uVar1) {
      *(ushort *)(puVar3 + 10) = 0x1e - uVar1;
    }
    if (((uint)*(ushort *)(puVar3 + 10) - (uint)uVar1 & 0x80) != 0) {
      *(ushort *)(puVar3 + 10) = uVar1;
    }
    uVar1 = *(ushort *)((int)puVar3 + 0x2e) >> 1;
    if (0x14 < (uint)*(ushort *)((int)puVar3 + 0x2a) + (uint)uVar1) {
      *(ushort *)((int)puVar3 + 0x2a) = 0x1e - uVar1;
    }
    if (((uint)*(ushort *)((int)puVar3 + 0x2a) - (uint)uVar1 & 0x80) != 0) {
      *(ushort *)((int)puVar3 + 0x2a) = uVar1;
    }
    *(undefined1 *)(puVar3 + 0xc) = 0;
    puVar3[3] = DAT_0805ded8;
    while( true ) {
      iVar4 = FUN_08001494(0x400);
      puVar3[8] = iVar4;
      if (iVar4 != 0) break;
      FUN_080003f0();
    }
    puVar3[4] = iVar4 + 0x3fc;
    puVar3[2] = 0x14;
    *puVar3 = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    FUN_08000274(puVar3,puVar3);
    *DAT_0805df20 = (byte)(1 << *(sbyte *)((int)puVar3 + 0x31)) | *DAT_0805df20;
  }
  return CONCAT44(unaff_lr,puVar3);
}

