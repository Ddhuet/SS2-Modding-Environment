
undefined4 FUN_0801563c(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 unaff_lr;
  
  iVar1 = FUN_080020f4();
  puVar2 = (uint *)(iVar1 * 0x154 + DAT_08015660 + 0x38);
  *puVar2 = *puVar2 & 0xfffffffe;
  return unaff_lr;
}

