
undefined8
FUN_08008978(int param_1,int param_2,undefined2 param_3,undefined2 param_4,byte param_5,int param_6,
            int param_7,int param_8)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  uVar5 = *DAT_0800899c;
  if (uVar5 < 0x32) {
    piVar2 = (int *)(uVar5 * 0x2c + DAT_08008a0c);
    *DAT_0800899c = uVar5 + 1;
    piVar2[2] = param_1;
    piVar2[3] = param_2;
    *(undefined2 *)(piVar2 + 4) = param_3;
    *(undefined2 *)((int)piVar2 + 0x12) = param_4;
    pbVar3 = (byte *)((int)piVar2 + 0x22);
    *pbVar3 = *pbVar3 & 0xf8 | param_5 & 7;
    piVar2[7] = param_6;
    piVar2[5] = param_7;
    piVar2[6] = param_8;
    *pbVar3 = *pbVar3 & 0x87;
    *(undefined2 *)(piVar2 + 9) = 0;
    *(undefined2 *)((int)piVar2 + 0x26) = 0;
    *(undefined2 *)(piVar2 + 10) = 0;
    piVar1 = DAT_08008a10;
    iVar4 = *DAT_08008a10;
    if (iVar4 == 0) {
      *DAT_08008a2c = piVar2;
      *piVar1 = (int)piVar2;
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    else {
      *(int **)(iVar4 + 4) = piVar2;
      *piVar2 = iVar4;
      piVar2[1] = 0;
      *piVar1 = (int)piVar2;
    }
  }
  else {
    piVar2 = (int *)0x0;
  }
  return CONCAT44(unaff_lr,piVar2);
}

