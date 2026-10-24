
undefined4 FUN_08029db4(uint param_1,undefined2 param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 unaff_lr;
  undefined1 uStack_2c;
  undefined1 local_2b;
  uint local_24;
  
  local_24 = param_3;
  iVar2 = FUN_080020f4();
  puVar4 = (undefined2 *)(iVar2 * 0x154 + DAT_08029ea0);
  iVar2 = FUN_0800c748();
  if ((((iVar2 == 0) && (iVar2 = FUN_0805a1e4(), iVar2 == 0)) &&
      (sVar1 = puVar4[0x13], sVar1 != 0xe)) &&
     (((*(char *)(puVar4 + 0x38) != '\0' && (sVar1 != 0xb)) &&
      (((*(uint *)(puVar4 + 0x1c) & 0x2000) == 0 && (sVar1 != 10)))))) {
    puVar3 = puVar4 + 0x2a;
    FUN_080699ec(&uStack_2c,puVar3,local_24 & 0xffff,param_1 & 0xffff,*puVar4);
    iVar2 = FUN_0801df68(puVar4,0);
    if (iVar2 != 0) {
      FUN_0801d968(*puVar4,iVar2,local_2b);
    }
    sVar1 = FUN_08021c10(param_1 & 0xffff,param_2,puVar3);
    *(uint *)(puVar4 + 0x74) = param_1;
    FUN_08069888(param_1,sVar1,*DAT_08029ea4 + 0x2c);
    puVar4[0x13] = 10;
    puVar4[0x48] = puVar4[0x48] + sVar1;
    *(undefined4 *)(puVar4 + 0x8c) = 0;
    puVar4[0x68] = 0;
    puVar4[0x69] = 0;
    if (puVar4[9] == 8) {
      FUN_08059a8c(0x4b);
    }
    else {
      FUN_08059a8c((ushort)puVar4[9] + 0x45);
    }
    FUN_080696dc(puVar3,sVar1,local_24,0,*puVar4,param_1);
  }
  return unaff_lr;
}

