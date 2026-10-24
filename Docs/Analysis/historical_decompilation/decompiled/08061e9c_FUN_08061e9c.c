
undefined4 FUN_08061e9c(int param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 unaff_lr;
  ushort local_38;
  ushort local_36;
  char local_34 [12];
  int local_28;
  undefined4 *local_24;
  
  iVar4 = FUN_0800c61c();
  if ((iVar4 == 0) && (iVar4 = FUN_0800c5e8(), iVar4 == 0)) {
    FUN_0800b570((*(int *)(param_1 + 0x14) << 8) >> 0x10,(*(int *)(param_1 + 0x18) << 8) >> 0x10,
                 &local_38,&local_36,0x30,0);
    uVar2 = local_36;
    if (param_2 < 0) {
      param_2 = DAT_08061fa4;
    }
    pcVar6 = local_34;
    uVar7 = 0;
    iVar4 = local_38 - 0x12;
    pcVar5 = pcVar6;
    puVar8 = (undefined4 *)(DAT_08061fa8 + 0x18);
    local_28 = param_2;
    do {
      cVar3 = FUN_08000498(&local_28,*puVar8,puVar8 + 1);
      *pcVar5 = cVar3;
      uVar7 = uVar7 + 1;
      pcVar5 = pcVar5 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar7 < 4);
    bVar1 = false;
    uVar7 = 0;
    local_24 = DAT_08061fac;
    do {
      if (((bVar1) || (*pcVar6 != '\0')) || (uVar7 == 3)) {
        bVar1 = true;
        FUN_080077f8(iVar4,uVar2,2,*pcVar6,0,local_24 + 7,local_24[2],*local_24);
      }
      uVar7 = uVar7 + 1;
      iVar4 = iVar4 + 6;
      pcVar6 = pcVar6 + 1;
    } while (uVar7 < 4);
    FUN_080077f8(local_38 - 6,local_36 - 8,4,6,0,DAT_08061fac + 7,DAT_08061fac[2],*DAT_08061fac);
  }
  return unaff_lr;
}

