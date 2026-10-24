
void FUN_0801a23c(int param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      pcVar1 = (char *)(param_1 + uVar3 + DAT_0801a260);
      if (*pcVar1 == '\0') {
        *pcVar1 = '\x01';
        iVar2 = iVar2 + 1;
      }
      else {
        if (iVar2 != 0) {
          FUN_08001348(param_1 * 0x40 + DAT_0801a2a8,param_1 * 0x40 + DAT_0801a2a4,iVar2 << 6);
          param_1 = param_1 + iVar2;
          iVar2 = 0;
        }
        param_1 = param_1 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  if (iVar2 != 0) {
    FUN_08001348(param_1 * 0x40 + DAT_0801a2a8,param_1 * 0x40 + DAT_0801a2a4,iVar2 << 6);
  }
  return;
}

