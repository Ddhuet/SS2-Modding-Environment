
undefined4 FUN_08065a50(int param_1,undefined4 param_2,int param_3,uint param_4,uint param_5)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 unaff_lr;
  char local_3c [12];
  int local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  
  local_2c = param_2;
  param_4 = param_4 & 0xff;
  param_5 = param_5 & 0xff;
  if (param_3 < 0) {
    param_3 = DAT_08065b24;
  }
  if ((((param_4 != 1) && (1 < param_4)) && (param_4 != 2)) && (param_4 == 3)) {
    param_4 = 0xd;
  }
  local_30 = param_3;
  puVar6 = (undefined4 *)((10 - param_5) * 4 + DAT_08065b28);
  pcVar4 = local_3c;
  uVar5 = 0;
  if (param_5 != 0) {
    do {
      uVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      local_24 = param_4;
      cVar2 = FUN_08000498(&local_30,uVar3);
      *pcVar4 = cVar2;
      uVar5 = uVar5 + 1;
      pcVar4 = pcVar4 + 1;
      param_4 = local_24;
    } while (uVar5 < param_5);
  }
  puVar6 = DAT_08065b2c;
  bVar1 = false;
  param_1 = param_1 + (param_5 - 1) * -6;
  pcVar4 = local_3c;
  uVar5 = 0;
  if (param_5 != 0) {
    local_28 = param_4 << 0x10;
    do {
      if (((bVar1) || (*pcVar4 != '\0')) || (uVar5 == param_5 - 1)) {
        bVar1 = true;
        FUN_080077f8(param_1,local_2c,local_28 >> 0x10,*pcVar4,0,puVar6 + 7,puVar6[2],*puVar6);
      }
      uVar5 = uVar5 + 1;
      param_1 = param_1 + 6;
      pcVar4 = pcVar4 + 1;
    } while (uVar5 < param_5);
  }
  return unaff_lr;
}

