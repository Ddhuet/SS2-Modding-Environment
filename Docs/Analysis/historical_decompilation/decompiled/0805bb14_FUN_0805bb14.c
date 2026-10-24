
undefined4 FUN_0805bb14(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_lr;
  int local_24;
  
  iVar6 = 0;
  do {
    iVar10 = *param_1 + (iVar6 + -10) * 0x400;
    iVar8 = iVar6 + 1;
    iVar7 = 0;
    do {
      iVar9 = *param_2 + (iVar7 + -10) * 0x400;
      uVar1 = FUN_0800a950(iVar10,iVar9,0);
      iVar4 = iVar7 + 1;
      if ((uVar1 & 7) == 0) {
        piVar5 = (int *)*DAT_0805bbbc;
        uVar1 = 0;
        do {
          if ((*(ushort *)((int)piVar5 + 10) & 1) != 0) {
            iVar3 = iVar10 - *piVar5 >> 8;
            if (iVar3 < 0) {
              iVar3 = -iVar3;
            }
            iVar2 = iVar9 - piVar5[1] >> 8;
            if (iVar2 < 0) {
              iVar2 = -iVar2;
            }
            if (((iVar3 < 8) && (iVar2 < 8)) && ((short)piVar5[2] == 0)) goto LAB_0805bba2;
          }
          uVar1 = uVar1 + 1;
          piVar5 = piVar5 + 8;
        } while (uVar1 < 0x10);
        piVar5 = (int *)0x0;
LAB_0805bba2:
        if (piVar5 != (int *)0x0) goto LAB_0805bbc8;
        *(undefined1 *)(*DAT_0805bbc0 + iVar7 * 0x15 + iVar6) = 1;
      }
      else {
LAB_0805bbc8:
        *(undefined1 *)(*DAT_0805bc30 + iVar7 * 0x15 + iVar6) = 0;
      }
      iVar7 = iVar4;
    } while (iVar4 < 0x15);
    iVar6 = iVar8;
    if (0x14 < iVar8) {
      iVar6 = 0;
      local_24 = 0;
      do {
        iVar7 = -iVar6;
        iVar8 = iVar7;
        if (iVar6 * -2 < 0 != SBORROW4(iVar7,iVar6)) {
          do {
            if (iVar6 * -2 < 0 != SBORROW4(iVar7,iVar6)) {
              iVar4 = local_24 + iVar8;
              iVar10 = iVar7;
              do {
                iVar9 = *param_2;
                if (*(char *)(iVar4 + *DAT_0805bc30 + 0xdc) != '\0') {
                  *param_1 = *param_1 + iVar8 * 0x400;
                  *param_2 = iVar9 + iVar10 * 0x400;
                  return unaff_lr;
                }
                iVar4 = iVar4 + 0x15;
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar6);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar6);
        }
        local_24 = local_24 + -0x15;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 10);
      return unaff_lr;
    }
  } while( true );
}

