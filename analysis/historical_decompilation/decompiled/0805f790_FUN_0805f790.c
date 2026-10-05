
/* WARNING: Removing unreachable block (ram,0x0805f7c8) */
/* WARNING: Removing unreachable block (ram,0x0805f7cc) */

undefined8 FUN_0805f790(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    if (*(char *)(iVar2 + 0x30) == '\x03') {
      if (((int)(uint)*DAT_0805f7e4 >> *(sbyte *)(iVar2 + 0x31) & 1U) != 0) {
        *(undefined1 *)(iVar2 + 0x30) = 4;
        FUN_08059a8c(0xdd);
      }
      *(undefined4 *)(param_1 + 0x74) = 7;
    }
    else if (*(char *)(iVar2 + 0x30) != '\0') {
      uVar1 = 0;
      goto LAB_0805f7fa;
    }
  }
  uVar1 = 1;
LAB_0805f7fa:
  return CONCAT44(unaff_lr,uVar1);
}

