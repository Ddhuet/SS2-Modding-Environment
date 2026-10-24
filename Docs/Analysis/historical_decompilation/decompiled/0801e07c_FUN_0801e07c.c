
undefined4 FUN_0801e07c(undefined2 *param_1,uint param_2)

{
  short *psVar1;
  uint uVar2;
  undefined4 unaff_lr;
  
  do {
    psVar1 = *(short **)(param_1 + 0x1e);
    uVar2 = 0;
    do {
      if (((*psVar1 != -1) && ((ushort)psVar1[2] == param_2)) && (psVar1[1] == 100))
      goto LAB_0801e0b4;
      uVar2 = uVar2 + 1;
      psVar1 = psVar1 + 0x14;
    } while (uVar2 < 8);
    psVar1 = (short *)0x0;
LAB_0801e0b4:
    if ((psVar1 == (short *)0x0) || (FUN_0801d968(*param_1,psVar1,0), psVar1 == (short *)0x0)) {
      return unaff_lr;
    }
  } while( true );
}

