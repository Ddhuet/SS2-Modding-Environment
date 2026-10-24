
undefined8
FUN_0801ede8(int param_1,uint param_2,int *param_3,int *param_4,uint param_5,uint param_6)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_lr;
  
  if (*(short *)(param_1 + 0x174) == 3) {
LAB_0801ee1c:
    cVar2 = FUN_0801dc54();
    if (cVar2 != '\x02') {
LAB_0801ee2a:
      iVar7 = (param_2 & 0xffff) * 2;
      psVar4 = (short *)(DAT_0801ef7c + iVar7);
      iVar5 = (int)(((uint)*(byte *)(DAT_0801ef80 + param_1) *
                     (int)*(short *)(*psVar4 * 0x20 + DAT_0801ef78) + DAT_0801ef74 + param_3[1]) -
                   param_4[1]) >> 8;
      iVar6 = (int)((*param_3 +
                    (uint)*(byte *)(DAT_0801ef80 + param_1) *
                    (int)*(short *)(*psVar4 * 0x20 + 0x80 + DAT_0801ef78)) - *param_4) >> 8;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if ((int)((uint)*(byte *)(param_1 + 0x17e) + (param_5 & 0xffff)) >> 1 < iVar6) {
LAB_0801eed2:
        bVar1 = false;
      }
      else {
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        bVar1 = true;
        if ((int)((uint)*(byte *)(param_1 + 0x17e) + (param_6 & 0xffff)) >> 1 < iVar5)
        goto LAB_0801eed2;
      }
      if (!bVar1) {
        if (*(short *)(param_1 + 0x174) == 9) goto LAB_0801ef6e;
        psVar4 = (short *)(iVar7 + DAT_0801ef7c);
        iVar5 = (int)((DAT_0801ef74 + param_3[1] +
                      (int)*(short *)(*psVar4 * 0x20 + DAT_0801ef78) *
                      (uint)*(byte *)(DAT_0801ef84 + param_1)) - param_4[1]) >> 8;
        iVar6 = (int)((*param_3 +
                      (int)*(short *)(*psVar4 * 0x20 + 0x80 + DAT_0801ef78) *
                      (uint)*(byte *)(DAT_0801ef84 + param_1)) - *param_4) >> 8;
        if (iVar6 < 0) {
          iVar6 = -iVar6;
        }
        if ((int)((uint)(ushort)*(byte *)(param_1 + 0x180) + (param_5 & 0xffff)) >> 1 < iVar6) {
LAB_0801ef68:
          bVar1 = false;
        }
        else {
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          bVar1 = true;
          if ((int)((uint)(ushort)*(byte *)(param_1 + 0x180) + (param_6 & 0xffff)) >> 1 < iVar5)
          goto LAB_0801ef68;
        }
        if (!bVar1) goto LAB_0801ef6e;
      }
      uVar3 = 1;
      goto LAB_0801ef8a;
    }
  }
  else {
    if (*(short *)(param_1 + 0x174) != 8) goto LAB_0801ee2a;
    cVar2 = FUN_0801dc54();
    if (cVar2 != '\a') goto LAB_0801ee1c;
  }
LAB_0801ef6e:
  uVar3 = 0;
LAB_0801ef8a:
  return CONCAT44(unaff_lr,uVar3);
}

