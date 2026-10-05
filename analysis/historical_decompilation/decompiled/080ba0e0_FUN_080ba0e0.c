
ulonglong FUN_080ba0e0(void)

{
  ushort uVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 unaff_lr;
  undefined1 auStack_50 [64];
  
  puVar2 = DAT_080ba13c;
  uVar1 = (ushort)DAT_080ba140;
  *DAT_080ba13c = *DAT_080ba13c & uVar1 | *(ushort *)(*DAT_080ba144 + 0x10);
  puVar3 = DAT_080ba148;
  *DAT_080ba148 = 0xaa;
  puVar4 = DAT_080ba14c;
  *DAT_080ba14c = 0x55;
  *puVar3 = 0x80;
  *puVar3 = 0xaa;
  *puVar4 = 0x55;
  *puVar3 = 0x10;
  FUN_080b9cd8(auStack_50);
  uVar5 = FUN_080ba440(3,0xe000000,0xff,*DAT_080ba150);
  *puVar2 = *puVar2 & uVar1 | 3;
  return CONCAT44(unaff_lr,uVar5) & 0xffffffff0000ffff;
}

