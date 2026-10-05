/*
 * equip_check_type4  (0x0805D8C8)
 * 功能: 装备可用性helper(类型4)
 * 来源: 矿石打造
 * 原始Ghidra名: 0805d8c8_FUN_0805d8c8.c
 */

undefined8 FUN_0805d8c8(short *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_lr;
  
  if (((param_1 != (short *)0x0) && (*param_1 == 4)) && ((char)param_1[4] == '\0')) {
    iVar1 = FUN_08006d98((ushort)param_1[1] | 0xd0000);
    uVar2 = FUN_0801dc54();
    if ((((int)(uint)*(ushort *)(iVar1 + 0x17e) >> (uVar2 & 0xff) & 1U) != 0) &&
       (iVar3 = FUN_080020f4(),
       (int)(uint)*(ushort *)(iVar1 + 0x17c) <= (int)*(short *)(iVar3 * 0x154 + DAT_0805d92c + 0x40)
       )) {
      uVar4 = 1;
      goto LAB_0805d932;
    }
  }
  uVar4 = 0;
LAB_0805d932:
  return CONCAT44(unaff_lr,uVar4);
}

