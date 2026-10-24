/*
 * equip_check_type3  (0x0805D938)
 * 功能: 装备可用性helper(类型3)
 * 来源: 矿石打造
 * 原始Ghidra名: 0805d938_FUN_0805d938.c
 */

undefined8 FUN_0805d938(short *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_lr;
  
  if (((param_1 != (short *)0x0) && (*param_1 == 3)) && ((char)param_1[4] == '\0')) {
    iVar1 = FUN_08006d98((ushort)param_1[1] | 0xc0000);
    uVar2 = FUN_0801dc54();
    if ((((int)(uint)*(ushort *)(iVar1 + 0x17e) >> (uVar2 & 0xff) & 1U) != 0) &&
       (iVar3 = FUN_080020f4(),
       (int)(uint)*(ushort *)(iVar1 + 0x17c) <= (int)*(short *)(iVar3 * 0x154 + DAT_0805d99c + 0x40)
       )) {
      uVar4 = 1;
      goto LAB_0805d9a2;
    }
  }
  uVar4 = 0;
LAB_0805d9a2:
  return CONCAT44(unaff_lr,uVar4);
}

