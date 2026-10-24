
undefined8 FUN_080685a0(uint param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  puVar1 = DAT_080685d8;
  uVar3 = *DAT_080685d8;
  if (uVar3 < 0x32) {
    puVar2 = (undefined1 *)(*DAT_080685dc + uVar3 * 0x88);
    *(undefined4 *)(puVar2 + 4) = 1;
    *puVar2 = 0x9c;
    *(uint *)(puVar2 + 8) = param_2 << 0x10 | param_1;
    *(undefined4 *)(puVar2 + 0xc) = param_3;
    puVar2[1] = 1;
    *puVar1 = *puVar1 + 1;
  }
  return CONCAT44(unaff_lr,(uint)(uVar3 < 0x32));
}

