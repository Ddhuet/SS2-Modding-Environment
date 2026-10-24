
undefined4 FUN_080b8f24(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  if ((*param_2 & 1) != 0) {
    uVar6 = (uint)param_2[0x12] * (uint)param_2[0x13] >> 5;
    if (param_2[0x18] == 1) {
      uVar6 = uVar6 * ((char)param_2[0x16] + 0x80) >> 7;
    }
    iVar4 = (char)param_2[0x14] * 2 + (int)(char)param_2[0x15];
    if (param_2[0x18] == 2) {
      iVar4 = iVar4 + (char)param_2[0x16];
    }
    iVar5 = -0x80;
    if ((-0x81 < iVar4) && (iVar5 = iVar4, 0x7f < iVar4)) {
      iVar5 = 0x7f;
    }
    uVar2 = uVar6 * (iVar5 + 0x80);
    bVar1 = (byte)(uVar2 >> 8);
    if (0xff < (uVar2 >> 8 & 0xff)) {
      bVar1 = 0xff;
    }
    param_2[0x10] = bVar1;
    uVar6 = uVar6 * (0x7f - iVar5);
    bVar1 = (byte)(uVar6 >> 8);
    if (0xff < (uVar6 >> 8 & 0xff)) {
      bVar1 = 0xff;
    }
    param_2[0x11] = bVar1;
  }
  if ((*param_2 & 4) != 0) {
    sVar3 = (ushort)param_2[0xd] +
            ((short)(char)param_2[0xc] + (ushort)param_2[0xf] * (short)(char)param_2[0xe]) * 4 +
            (char)param_2[10] * 0x100 + (char)param_2[0xb] * 0x100;
    if (param_2[0x18] == 0) {
      sVar3 = sVar3 + (char)param_2[0x16] * 0x10;
    }
    param_2[8] = (byte)((ushort)sVar3 >> 8);
    param_2[9] = (byte)sVar3;
  }
  *param_2 = *param_2 & 0xfa;
  return unaff_lr;
}

