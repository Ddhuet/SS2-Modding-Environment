
undefined4 FUN_08095248(char param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_lr;
  undefined1 local_b4 [12];
  int local_a8;
  undefined1 local_91;
  undefined1 auStack_80 [36];
  undefined1 local_5c;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_30 = (uint)(param_1 * 0x3000000) >> 0x18;
  FUN_08065784(local_b4,(param_2 * 0x1000000 + -0x1000000 >> 0x18) + DAT_080952d8,7,0xffffffff,1);
  local_91 = 0;
  FUN_08065784(auStack_80,DAT_080952dc,8,0xffffffff,1);
  local_5c = 1;
  local_44 = 0x7800;
  local_40 = 0x5000;
  local_46 = 0;
  local_48 = 0;
  local_4a = 0;
  local_4c = 0;
  local_2c = 0;
  local_3c = 0;
  local_38 = 0x10;
  local_34 = 0;
  FUN_0801a74c(6);
  while (iVar1 = FUN_0801a6dc(), iVar1 == 0) {
    FUN_080003f0();
  }
  *(undefined2 *)(DAT_08095360 + 0x3a) = 0x3400;
  local_28 = 4;
  local_24 = 0x30;
  iVar1 = 7;
  FUN_08059a8c(0x198);
  do {
    FUN_08008b40(local_28,local_24,1,local_38,local_34,0);
    local_2c = local_2c + 2 & 0xff;
    FUN_0809591c();
    FUN_08095704();
    FUN_08000af0(0x10,local_a8 + 0xe0,1);
    FUN_0806599c(local_b4,0,&local_4c,&local_4a,1);
    if (iVar1 - 1U < 7) {
                    /* WARNING: Could not recover jumptable at 0x0809535e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)((iVar1 - 1U) * 4 + DAT_08095364))();
      return uVar2;
    }
    FUN_080003f0();
    iVar3 = FUN_080021a8();
    if (iVar3 == 1) {
      iVar1 = 0;
    }
  } while (iVar1 != 0);
  FUN_0801a7e4(6);
  while (iVar1 = FUN_0801a6dc(), iVar1 == 0) {
    FUN_080003f0();
  }
  FUN_08059b00(3);
  FUN_0800c568();
  FUN_0800c5b8();
  FUN_0809833c();
  *(undefined2 *)(DAT_08095700 + 0x3a) = 0;
  FUN_08008b40(0,0,0,0,0,0);
  FUN_080009f8(0xf00,0x8000,0);
  return unaff_lr;
}

