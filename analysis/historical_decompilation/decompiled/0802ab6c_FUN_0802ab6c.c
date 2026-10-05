
undefined8 FUN_0802ab6c(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  uVar3 = DAT_0802abd8;
  uVar2 = DAT_0802abd4;
  uVar7 = DAT_0802abd0;
  do {
    iVar4 = FUN_08006d98(uVar7 | 0x140000);
    bVar1 = true;
    iVar6 = 0;
    if (*(ushort *)(iVar4 + 4) == uVar2) {
LAB_0802abb8:
      if ((bVar1) && (*(ushort *)(*DAT_0802abdc + iVar6 * 2) == uVar3)) {
        iVar4 = uVar7 + DAT_0802abe0;
        goto LAB_0802abf0;
      }
    }
    else if ((uint)*(ushort *)(iVar4 + 4) == (uint)*(ushort *)*DAT_0802abdc) {
      do {
        iVar6 = iVar6 + 1;
        uVar5 = (uint)*(ushort *)(iVar6 * 2 + iVar4 + 4);
        if (uVar5 == uVar2) goto LAB_0802abb8;
      } while (uVar5 == *(ushort *)(*DAT_0802abdc + iVar6 * 2));
      bVar1 = false;
      goto LAB_0802abb8;
    }
    uVar7 = uVar7 + 1;
    if (DAT_0802abfc < uVar7) {
      iVar4 = -1;
LAB_0802abf0:
      return CONCAT44(unaff_lr,iVar4);
    }
  } while( true );
}

