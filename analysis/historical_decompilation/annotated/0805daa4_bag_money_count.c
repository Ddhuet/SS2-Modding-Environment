/*
 * bag_money_count  (0x0805DAA4)
 * 功能: 背包金钱统计(25格+0x158)
 * 来源: 物品共享
 * 原始Ghidra名: 0805daa4_FUN_0805daa4.c
 */

undefined8 FUN_0805daa4(void)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  iVar3 = 0;
  uVar2 = 0;
  psVar1 = (short *)(*DAT_0805dad0 + 0x158);
  do {
    if (*psVar1 == 10) {
      iVar3 = iVar3 + *(int *)(psVar1 + 2);
    }
    psVar1 = psVar1 + 8;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x19);
  return CONCAT44(unaff_lr,iVar3);
}

