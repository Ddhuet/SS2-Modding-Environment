
undefined8 FUN_080222b4(short param_1,short param_2)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  sVar1 = FUN_080ba8a4((param_1 + 10) * 0x7d,(int)param_1 + (int)param_2 + 0x14);
  uVar2 = FUN_080008c8();
  uVar3 = FUN_080baaf4(uVar2,100);
  return CONCAT44(unaff_lr,(uint)((int)(uVar3 & 0xffff) <= (int)sVar1));
}

