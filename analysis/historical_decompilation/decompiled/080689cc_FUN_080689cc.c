
undefined8 FUN_080689cc(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  
  puVar1 = DAT_08068a0c;
  if ((*DAT_08068a0c < 0x32) && (iVar2 = FUN_080020f4(), *(uint *)(iVar2 * 4 + DAT_08068a10) < 10))
  {
    puVar4 = (undefined1 *)(*DAT_08068a14 + *puVar1 * 0x88);
    *(undefined4 *)(puVar4 + 4) = 1;
    *puVar4 = 0x84;
    *(undefined4 *)(puVar4 + 8) = param_1;
    puVar4[1] = 1;
    *puVar1 = *puVar1 + 1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return CONCAT44(unaff_lr,uVar3);
}

