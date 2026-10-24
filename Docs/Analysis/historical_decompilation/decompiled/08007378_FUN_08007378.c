
undefined8
FUN_08007378(int param_1,int param_2,undefined2 param_3,undefined2 param_4,byte param_5,int param_6,
            int param_7,int param_8)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  uVar6 = *DAT_080073a0;
  if (uVar6 < 0x32) {
    piVar2 = (int *)(uVar6 * 0x2c + DAT_08007418);
    *DAT_080073a0 = uVar6 + 1;
    piVar2[2] = param_1;
    piVar2[3] = param_2;
    *(undefined2 *)(piVar2 + 4) = param_3;
    *(undefined2 *)((int)piVar2 + 0x12) = param_4;
    pbVar3 = (byte *)((int)piVar2 + 0x22);
    *pbVar3 = *pbVar3 & 0xf8 | param_5 & 7;
    piVar2[7] = param_6;
    piVar2[5] = param_7;
    piVar2[6] = param_8;
    *piVar2 = 0;
    piVar2[1] = 0;
    *pbVar3 = *pbVar3 & 0x87;
    *(undefined2 *)(piVar2 + 9) = 0;
    *(undefined2 *)((int)piVar2 + 0x26) = 0;
    *(undefined2 *)(piVar2 + 10) = 0;
    piVar1 = DAT_0800741c;
    if (*DAT_0800741c == 0) {
      *DAT_08007420 = piVar2;
      *piVar1 = (int)piVar2;
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    else {
      for (piVar5 = (int *)*DAT_0800742c; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
        if ((piVar5[3] < param_2) && (param_5 <= (*(byte *)((int)piVar5 + 0x22) & 7))) {
          if (*piVar5 == 0) {
            *DAT_0800742c = piVar2;
            *piVar5 = (int)piVar2;
            piVar2[1] = (int)piVar5;
          }
          else {
            *(int **)(*piVar5 + 4) = piVar2;
            piVar2[1] = (int)piVar5;
            *piVar2 = *piVar5;
            *piVar5 = (int)piVar2;
          }
          goto LAB_08007472;
        }
      }
      iVar4 = *DAT_0800741c;
      *(int **)(iVar4 + 4) = piVar2;
      *piVar2 = iVar4;
      piVar2[1] = 0;
      *piVar1 = (int)piVar2;
    }
  }
  else {
    piVar2 = (int *)0x0;
  }
LAB_08007472:
  return CONCAT44(unaff_lr,piVar2);
}

