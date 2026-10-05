
undefined4 FUN_0801a8b4(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_lr;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined1 local_38;
  short *local_30;
  short *local_2c;
  short *local_28;
  undefined2 *local_24;
  
  iVar8 = *DAT_0801a908;
  iVar2 = FUN_080020f4();
  iVar2 = iVar2 * 0x154 + DAT_0801a90c;
  puVar3 = (undefined4 *)((uint)*(ushort *)(iVar8 + 0x10) * 0x20 + DAT_0801a910);
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  *(undefined4 *)(iVar8 + 0x18) = *puVar3;
  *(undefined4 *)(iVar8 + 0x1c) = uVar6;
  *(undefined4 *)(iVar8 + 0x20) = uVar7;
  uVar6 = puVar3[4];
  uVar7 = puVar3[5];
  *(undefined4 *)(iVar8 + 0x24) = puVar3[3];
  *(undefined4 *)(iVar8 + 0x28) = uVar6;
  *(undefined4 *)(iVar8 + 0x2c) = uVar7;
  uVar6 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x30) = puVar3[6];
  *(undefined4 *)(iVar8 + 0x34) = uVar6;
  uVar4 = FUN_0801dc54(puVar3 + 8,iVar8 + 0x38);
  if ((uVar4 & 0xff) < 9) {
                    /* WARNING: Could not recover jumptable at 0x0801a906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)((uVar4 & 0xff) * 4 + DAT_0801a914))();
    return uVar6;
  }
  FUN_0805b37c(0);
  FUN_0805d748();
  FUN_0805d79c();
  FUN_0805d7f0();
  FUN_0805d844();
  FUN_0805d898();
  iVar1 = DAT_0801ad48;
  uVar4 = 0;
  local_24 = (undefined2 *)(iVar8 + 0x70);
  local_30 = (short *)(iVar2 + 0xca);
  local_2c = (short *)(iVar2 + 0xcc);
  local_28 = (short *)(iVar2 + 0x6a);
  do {
    puVar5 = (undefined2 *)(uVar4 * 4 + iVar1);
    local_3e = puVar5[1];
    local_40 = *puVar5;
    local_3c = 0;
    local_38 = 0;
    FUN_0805d6ac(uVar4,&local_40);
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 5);
  FUN_0805d6ac(0x18,DAT_0801ad4c);
  uVar4 = FUN_0802ab6c();
  if (uVar4 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x0801ad2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(uVar4 * 4 + DAT_0801ad50))();
    return uVar6;
  }
  *local_24 = 0;
  FUN_0801de28(iVar2);
  if (*(short *)(iVar2 + 0x68) < *local_30) {
    *local_30 = *(short *)(iVar2 + 0x68);
  }
  if (*local_28 < *local_2c) {
    *local_2c = *local_28;
  }
  return unaff_lr;
}

