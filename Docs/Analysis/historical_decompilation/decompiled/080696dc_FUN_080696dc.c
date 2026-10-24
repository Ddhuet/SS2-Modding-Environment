
undefined4
FUN_080696dc(short *param_1,uint param_2,int param_3,undefined4 param_4,uint param_5,uint param_6)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *unaff_r10;
  undefined4 unaff_lr;
  undefined4 local_28;
  uint local_24;
  
  uVar2 = FUN_080008c8();
  iVar3 = FUN_080baaf4(uVar2,100);
  if (param_6 == 1) {
    iVar4 = (param_3 * 10 + 5) * (100 - *param_1);
    uVar2 = 0x19;
  }
  else {
    if (param_6 != 4) {
      return unaff_lr;
    }
    iVar4 = (param_3 * 10 + 5) * (100 - param_1[3]);
    uVar2 = 0x32;
  }
  iVar4 = FUN_080baa7c(iVar4,uVar2);
  uVar5 = FUN_080020f4();
  if ((param_5 == uVar5) || ((iVar6 = FUN_0800c8d0(), iVar6 != 0 && (param_5 < 4)))) {
    iVar4 = FUN_080ba8a4(iVar4 * *(char *)(param_5 * 0x154 + DAT_0806979c + 0x7b),100);
  }
  if (iVar3 < iVar4) {
    local_28 = local_28 & DAT_080697a0 | (param_6 & 0xff) << 8;
  }
  uVar5 = local_28 >> 8 & 0xff;
  if (uVar5 == 1) {
    uVar2 = FUN_080008c8();
    iVar3 = FUN_080baaf4(uVar2,100);
    iVar3 = iVar3 + 0x1c2;
  }
  else {
    if (uVar5 != 4) {
      return unaff_lr;
    }
    uVar2 = FUN_080008c8();
    iVar3 = FUN_080baaf4(uVar2,100);
    iVar3 = iVar3 + 700;
  }
  uVar5 = FUN_080ba8a4(iVar3 * (param_2 & 0xffff),1000);
  if (param_5 < 4) {
    unaff_r10 = (byte *)(param_5 * 0x154 + DAT_080697f4);
    bVar1 = *unaff_r10;
  }
  else {
    iVar3 = *DAT_0806986c + DAT_08069870 * param_5 + DAT_08069874;
    if (*(char *)(iVar3 + DAT_08069878) == '\x03') {
      return unaff_lr;
    }
    bVar1 = *(byte *)(iVar3 + 2);
  }
  local_28 = local_28 & DAT_0806987c | (uint)bVar1;
  local_24 = local_24 & DAT_08069880 | uVar5 & 0xffff;
  FUN_08068364(&local_28);
  uVar7 = FUN_080020f4();
  if ((param_5 == uVar7) && (iVar3 = FUN_0800c8d0(), iVar3 == 0)) {
    FUN_08069888(local_28._1_1_,uVar5 & 0xffff,*DAT_08069884 + 0x2c);
    *(uint *)(unaff_r10 + 0xe8) = param_6;
  }
  return unaff_lr;
}

