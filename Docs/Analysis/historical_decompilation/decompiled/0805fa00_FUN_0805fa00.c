
undefined4 FUN_0805fa00(int param_1)

{
  char cVar1;
  undefined4 unaff_lr;
  
  if (((int)(uint)*DAT_0805fa40 >> *(sbyte *)(param_1 + 0x31) & 1U) != 0) {
    cVar1 = *(char *)(param_1 + 0x30);
    if ((((cVar1 == '\x01') || (cVar1 == '\x03')) || (cVar1 == '\x04')) || (cVar1 == '\x02')) {
      *(char *)(param_1 + 0x30) = '\x04';
      FUN_08059a8c(0xdd);
    }
  }
  return unaff_lr;
}

