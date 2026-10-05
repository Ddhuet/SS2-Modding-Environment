
undefined8 FUN_080ba058(uint param_1,undefined4 param_2,char param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  FUN_080b9be8(param_1 & 0xff);
  puVar1 = DAT_080ba080;
  uVar3 = param_1 & 0xff | 0xc000;
  do {
    cVar2 = FUN_080ba438(param_2,*puVar1);
    uVar4 = 0;
    if (cVar2 == param_3) goto LAB_080ba0cc;
  } while (*DAT_080ba0dc == '\0');
  cVar2 = FUN_080ba438(param_2,*puVar1);
  if ((cVar2 != param_3) && (uVar4 = uVar3, *(char *)(*DAT_080ba09c + 0x14) == -0x3e)) {
    *DAT_080ba0a0 = 0xf0;
  }
LAB_080ba0cc:
  FUN_080b9c90();
  return CONCAT44(unaff_lr,uVar4);
}

