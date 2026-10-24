
undefined4
FUN_08029c5c(uint param_1,uint param_2,undefined2 param_3,uint param_4,uint param_5,uint param_6)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  undefined4 unaff_lr;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  ushort local_2c;
  uint local_28;
  uint local_24;
  
  local_28 = param_5 & 0xffff;
  local_24 = param_6 & 0xffff;
  if (((((*DAT_08029da4 & 1 << (param_1 & 0xff)) != 0) &&
       (puVar6 = (ushort *)(*DAT_08029da8 + DAT_08029dac * param_1), (char)puVar6[0xee] != '\0')) &&
      (puVar6[6] != 0xb)) && (puVar6[6] != 10)) {
    uVar1 = FUN_08021b84(param_3,puVar6[0xe7],200);
    if (*(char *)((int)puVar6 + DAT_08029db0) != '\x03') {
      FUN_080699ec(&local_30,puVar6 + 0x1c6,param_4 & 0xffff,param_2 & 0xffff,*puVar6 + 4);
      iVar4 = FUN_0801df08(puVar6,0);
      if (iVar4 != 0) {
        FUN_0801d968(*puVar6 + 4,iVar4,local_2f);
      }
    }
    uVar2 = FUN_08021c10(param_2 & 0xffff,uVar1,puVar6 + 0x1c6);
    puVar6[6] = 10;
    local_30 = (undefined1)puVar6[1];
    local_2e = (undefined1)local_28;
    local_2d = (undefined1)local_24;
    local_2c = uVar2;
    FUN_0801f0a8(puVar6,&local_30);
    uVar3 = FUN_080020f4();
    puVar6[0x2c] = uVar3;
    puVar6[0x25] = uVar2;
    *(uint *)(puVar6 + 0x26) = (uint)uVar2;
    uVar5 = FUN_080020f4();
    puVar6[0x2d] = (ushort)(1 << (uVar5 & 0xff)) | puVar6[0x2d];
    FUN_0806671c(&local_30);
    if (*(char *)((int)puVar6 + DAT_08029db0) != '\x03') {
      FUN_080696dc(puVar6 + 0x1c6,local_2c,param_4,param_1,param_1 + 4,param_2);
    }
  }
  return unaff_lr;
}

