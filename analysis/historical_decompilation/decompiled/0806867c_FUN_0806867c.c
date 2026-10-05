
undefined8 FUN_0806867c(int param_1,uint param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  
  puVar1 = DAT_08068694;
  if (*DAT_08068694 < 0x32) {
    if ((param_2 & 0xffff) != 0) {
      puVar3 = (undefined1 *)(*DAT_080686c8 + *DAT_08068694 * 0x88);
      *(undefined4 *)(puVar3 + 4) = 1;
      *puVar3 = 0xa0;
      *(uint *)(puVar3 + 8) = param_2 & 0xffff | param_1 << 0x10;
      puVar3[1] = 1;
      *puVar1 = *puVar1 + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(unaff_lr,uVar2);
}

