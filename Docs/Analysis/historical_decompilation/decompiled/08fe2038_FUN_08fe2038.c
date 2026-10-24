
void FUN_08fe2038(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_08fe2014(param_1,0x40);
  FUN_08fe2028();
  iVar3 = 0x11;
  puVar1 = DAT_08fe2110;
  puVar2 = (undefined4 *)&LAB_02000000;
  do {
    *puVar2 = *puVar1;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  (*(code *)&LAB_02000000)();
  return;
}

