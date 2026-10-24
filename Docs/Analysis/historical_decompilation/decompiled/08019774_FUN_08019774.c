
undefined8 FUN_08019774(void)

{
  undefined4 uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  if (*DAT_080197b0 != 0) {
    uVar3 = 0;
    puVar2 = (ushort *)(*DAT_080197b4 + 0x4a);
    do {
      if (((1 << (uVar3 & 0xff) & *DAT_080197b0) != 0) &&
         (0 < (int)((int)(short)puVar2[9] - (uint)*puVar2))) {
        uVar1 = 1;
        goto LAB_080197c2;
      }
      uVar3 = uVar3 + 1;
      puVar2 = (ushort *)((int)puVar2 + DAT_080197b8);
    } while (uVar3 < 5);
  }
  uVar1 = 0;
LAB_080197c2:
  return CONCAT44(unaff_lr,uVar1);
}

