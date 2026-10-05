
undefined8 FUN_0801df68(short *param_1,uint param_2)

{
  uint uVar1;
  short *psVar2;
  undefined4 unaff_lr;
  
  psVar2 = *(short **)(param_1 + 0x1e);
  uVar1 = 0;
  do {
    if ((*psVar2 == -1) ||
       (((*psVar2 == -2 && ((ushort)psVar2[2] == param_2)) && (*param_1 == psVar2[1]))))
    goto LAB_0801dfa2;
    uVar1 = uVar1 + 1;
    psVar2 = psVar2 + 0x14;
  } while (uVar1 < 8);
  psVar2 = (short *)0x0;
LAB_0801dfa2:
  return CONCAT44(unaff_lr,psVar2);
}

