
undefined8 FUN_08017888(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_lr;
  short local_20;
  short local_1e;
  
  FUN_0800b570((*(int *)(param_1 + 0x14) << 8) >> 0x10,(*(int *)(param_1 + 0x18) << 8) >> 0x10,
               &local_20,&local_1e,0x30,0);
  uVar4 = 0;
  uVar1 = FUN_08002164();
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = (int *)(DAT_08017920 + 0x150);
    do {
      if (((((*(byte *)(*piVar2 + 4) & 0x20) == 0) && ((ushort)(local_20 + 0x3fU) < 0x16b)) &&
          (-0x40 < local_1e)) && (local_1e < 200)) {
        uVar4 = 1;
      }
      piVar2 = piVar2 + 0x55;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return CONCAT44(unaff_lr,uVar4);
}

