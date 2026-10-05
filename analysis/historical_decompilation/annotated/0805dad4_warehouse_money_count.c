/*
 * warehouse_money_count  (0x0805DAD4)
 * 功能: 仓库金钱统计(75格+0x2E8)
 * 来源: 物品共享/矿石
 * 原始Ghidra名: 0805dad4_FUN_0805dad4.c
 */

undefined8 FUN_0805dad4(void)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  iVar3 = 0;
  uVar2 = 0;
  psVar1 = (short *)(*DAT_0805db00 + 0x2e8);
  do {
    if (*psVar1 == 10) {
      iVar3 = iVar3 + *(int *)(psVar1 + 2);
    }
    psVar1 = psVar1 + 8;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x4b);
  return CONCAT44(unaff_lr,iVar3);
}

