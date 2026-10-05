
int FUN_08002118(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*DAT_08002130 & 2) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_08002134 & 0x3f) >> 4;
  }
  uVar2 = 0;
  iVar3 = DAT_08002154;
  do {
    if (param_1 == uVar2) {
      if (uVar2 == uVar1) {
        return DAT_0800213c;
      }
      return iVar3;
    }
    iVar3 = iVar3 + 0x18;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return 0;
}

