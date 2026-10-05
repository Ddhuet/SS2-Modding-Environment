
undefined8 FUN_0801df08(int param_1)

{
  short *psVar1;
  uint uVar2;
  undefined4 unaff_lr;
  
  psVar1 = (short *)(param_1 + 0x8c);
  uVar2 = 0;
  do {
    if (*psVar1 == -1) goto LAB_0801df2a;
    uVar2 = uVar2 + 1;
    psVar1 = psVar1 + 0x14;
  } while (uVar2 < 8);
  psVar1 = (short *)0x0;
LAB_0801df2a:
  return CONCAT44(unaff_lr,psVar1);
}

