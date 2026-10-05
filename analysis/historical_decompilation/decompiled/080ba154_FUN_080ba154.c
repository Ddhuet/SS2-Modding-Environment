
undefined8 FUN_080ba154(uint param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 auStack_54 [64];
  
  puVar2 = DAT_080ba1c4;
  uVar5 = DAT_080ba1ec;
  if ((param_1 & 0xffff) < 0x10) {
    uVar1 = (ushort)DAT_080ba1c8;
    iVar6 = *DAT_080ba1cc;
    *DAT_080ba1c4 = *DAT_080ba1c4 & uVar1 | *(ushort *)(iVar6 + 0x10);
    puVar3 = DAT_080ba1d0;
    puVar7 = (undefined1 *)(((param_1 & 0xffff) << *(sbyte *)(iVar6 + 8)) + 0xe000000);
    *DAT_080ba1d0 = 0xaa;
    puVar4 = DAT_080ba1d4;
    *DAT_080ba1d4 = 0x55;
    *puVar3 = 0x80;
    *puVar3 = 0xaa;
    *puVar4 = 0x55;
    *puVar7 = 0x30;
    FUN_080b9cd8(auStack_54);
    uVar5 = FUN_080ba440(2,puVar7,0xff,*DAT_080ba1d8);
    *puVar2 = *puVar2 & uVar1 | 3;
    uVar5 = uVar5 & 0xffff;
  }
  return CONCAT44(unaff_lr,uVar5);
}

