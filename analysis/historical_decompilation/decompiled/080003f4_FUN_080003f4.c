
undefined8 FUN_080003f4(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_08000418;
  *(undefined4 *)(iVar2 + 0x14) = param_1;
  *(undefined4 *)(iVar2 + 0xc) = unaff_lr;
  *(undefined1 **)(iVar2 + 0x10) = &stack0xffffffd0;
  *(undefined4 *)(iVar2 + 4) = 4;
  if (*(int *)(*DAT_08000350 + 4) != 4) {
    *(undefined4 *)(*DAT_08000350 + 4) = 3;
  }
  while (piVar1 = (int *)*DAT_08000350, piVar1[1] != 1) {
    iVar2 = *piVar1;
    *DAT_08000350 = iVar2;
    if (iVar2 == 0) {
      FUN_08001204();
      piVar1 = (int *)*DAT_0800034c;
      do {
        if (piVar1[1] != 4) {
          piVar1[1] = 1;
        }
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)0x0);
      *DAT_08000350 = *DAT_0800034c;
    }
  }
  piVar1[1] = 2;
  iVar2 = piVar1[4];
  *(int *)(iVar2 + 0x2c) = piVar1[3];
  return *(undefined8 *)(iVar2 + 0xc);
}

