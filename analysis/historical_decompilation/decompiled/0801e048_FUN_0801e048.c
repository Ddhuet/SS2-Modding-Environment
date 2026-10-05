
undefined8 FUN_0801e048(int param_1,uint param_2)

{
  short *psVar1;
  uint uVar2;
  undefined4 unaff_lr;
  
  psVar1 = (short *)(param_1 + 0x8c);
  uVar2 = 0;
  do {
    if (((*psVar1 != -1) && ((ushort)psVar1[2] == param_2)) && (psVar1[1] == 100))
    goto LAB_0801e076;
    uVar2 = uVar2 + 1;
    psVar1 = psVar1 + 0x14;
  } while (uVar2 < 8);
  psVar1 = (short *)0x0;
LAB_0801e076:
  return CONCAT44(unaff_lr,psVar1);
}

