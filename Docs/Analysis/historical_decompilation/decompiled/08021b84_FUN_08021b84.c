
undefined8 FUN_08021b84(uint param_1,uint param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  param_1 = param_1 & 0xffff;
  uVar1 = FUN_080008c8();
  iVar2 = FUN_080baaf4(uVar1,0x32);
  iVar3 = FUN_080ba8a4(param_1 * param_1 * 10,param_1 + (param_2 & 0xffff));
  uVar1 = FUN_080ba8a4((iVar2 * 0x10000 + 0x640000U >> 0x10) * iVar3,param_3);
  uVar4 = FUN_080baa7c(uVar1,10);
  uVar4 = uVar4 & 0xffff;
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  return CONCAT44(unaff_lr,uVar4);
}

