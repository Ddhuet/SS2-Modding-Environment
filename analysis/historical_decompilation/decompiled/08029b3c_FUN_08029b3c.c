
undefined4 FUN_08029b3c(uint param_1,undefined2 param_2,uint param_3)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 unaff_lr;
  undefined1 uStack_2c;
  undefined1 local_2b;
  uint local_24;
  
  local_24 = param_3;
  iVar3 = FUN_080020f4();
  puVar5 = (undefined2 *)(iVar3 * 0x154 + DAT_08029c28);
  iVar3 = FUN_0800c748();
  if ((((iVar3 == 0) && (iVar3 = FUN_0805a1e4(), iVar3 == 0)) &&
      (sVar2 = puVar5[0x13], sVar2 != 0xe)) &&
     (((*(char *)(puVar5 + 0x38) != '\0' && (sVar2 != 0xb)) &&
      (((*(uint *)(puVar5 + 0x1c) & 0x2000) == 0 && (sVar2 != 10)))))) {
    uVar1 = FUN_08021b84(param_2,puVar5[0x31],200);
    puVar4 = puVar5 + 0x2a;
    FUN_080699ec(&uStack_2c,puVar4,local_24 & 0xffff,param_1 & 0xffff,*puVar5);
    iVar3 = FUN_0801df68(puVar5,0);
    if (iVar3 != 0) {
      FUN_0801d968(*puVar5,iVar3,local_2b);
    }
    sVar2 = FUN_08021c10(param_1 & 0xffff,uVar1,puVar4);
    puVar5[0x13] = 10;
    puVar5[0x48] = puVar5[0x48] + sVar2;
    *(undefined4 *)(puVar5 + 0x8c) = 0;
    puVar5[0x68] = 0;
    puVar5[0x69] = 0;
    *(undefined4 *)(puVar5 + 0x74) = 0;
    if (puVar5[9] == 8) {
      FUN_08059a8c(0x4b);
    }
    else {
      FUN_08059a8c((ushort)puVar5[9] + 0x45);
    }
    FUN_080696dc(puVar4,sVar2,local_24,0,*puVar5,param_1);
  }
  return unaff_lr;
}

