
undefined4 FUN_0804f6a4(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = DAT_0804f6f8;
  if ((*(uint *)(*DAT_0804f6f4 + 0x38) & 1) == 0) {
    if ((*(uint *)(*DAT_0804f6f4 + 0x38) & 2) == 0) {
      iVar2 = FUN_080020f4();
      iVar2 = iVar2 * 0x154 + DAT_0804f768;
      *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
      FUN_0800ca44();
      iVar2 = FUN_0800c5e8();
      if (iVar2 == 0) {
        iVar2 = FUN_0801a720();
        if (iVar2 == 1) {
          FUN_0801a74c(6);
        }
        else if (iVar2 < 2) {
          if (iVar2 == 0) {
            FUN_08058b6c();
          }
        }
        else if (iVar2 == 2) {
          FUN_0801a78c(6);
        }
        while (iVar2 = FUN_0801a6dc(), iVar2 == 0) {
          FUN_080003f0();
        }
      }
      uVar1 = DAT_0804f7a4;
      iVar2 = *DAT_0804f7a8 + DAT_0804f7ac;
      for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
        iVar3 = FUN_08000470(iVar2);
        if (iVar3 == 0) {
          local_20 = uVar1;
          local_1c = 0;
          *(undefined4 *)(iVar2 + 8) = 0x3c;
          iVar3 = FUN_08001494(0x400);
          *(int *)(iVar2 + 0x20) = iVar3;
          *(undefined4 *)(iVar2 + 0xc) = DAT_0804f808;
          *(int *)(iVar2 + 0x10) = iVar3 + 0x3fc;
          *(undefined4 *)(iVar2 + 0x24) = 0;
          FUN_08000274(iVar2,auStack_2c,6);
          FUN_080003f0();
          FUN_080003f0();
          break;
        }
        iVar2 = iVar2 + 0x28;
      }
      uVar1 = DAT_0804f80c;
      iVar2 = *DAT_0804f810 + DAT_0804f814;
      for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
        iVar3 = FUN_08000470(iVar2);
        if (iVar3 == 0) {
          while( true ) {
            iVar3 = FUN_08001494(0x400);
            *(int *)(iVar2 + 0x20) = iVar3;
            if (iVar3 != 0) break;
            FUN_080003f0();
          }
          *(undefined4 *)(iVar2 + 8) = 0x3c;
          *(undefined4 *)(iVar2 + 0xc) = uVar1;
          *(int *)(iVar2 + 0x10) = iVar3 + 0x3fc;
          *(undefined4 *)(iVar2 + 0x24) = 0;
          FUN_08000274(iVar2,0);
          return unaff_lr;
        }
        iVar2 = iVar2 + 0x28;
      }
    }
    else {
      iVar2 = FUN_0800c5e8();
      if (iVar2 == 0) {
        iVar2 = FUN_0801a720();
        if (iVar2 == 1) {
          FUN_0801a74c(6);
        }
        else if (iVar2 < 2) {
          if (iVar2 == 0) {
            FUN_08058b6c();
          }
        }
        else if (iVar2 == 2) {
          FUN_0801a78c(6);
        }
        while (iVar2 = FUN_0801a6dc(), iVar2 == 0) {
          FUN_080003f0();
        }
      }
      uVar1 = DAT_0804f8b0;
      iVar2 = *DAT_0804f8b4 + DAT_0804f8b8;
      for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
        iVar3 = FUN_08000470(iVar2);
        if (iVar3 == 0) {
          local_20 = uVar1;
          local_1c = 0;
          *(undefined4 *)(iVar2 + 8) = 0x3c;
          iVar3 = FUN_08001494(0x400);
          *(int *)(iVar2 + 0x20) = iVar3;
          *(undefined4 *)(iVar2 + 0xc) = DAT_0804f914;
          *(int *)(iVar2 + 0x10) = iVar3 + 0x3fc;
          *(undefined4 *)(iVar2 + 0x24) = 0;
          FUN_08000274(iVar2,auStack_2c,6);
          FUN_080003f0();
          FUN_080003f0();
          break;
        }
        iVar2 = iVar2 + 0x28;
      }
      uVar1 = DAT_0804f918;
      iVar2 = *DAT_0804f91c + DAT_0804f920;
      for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
        iVar3 = FUN_08000470(iVar2);
        if (iVar3 == 0) {
          while( true ) {
            iVar3 = FUN_08001494(0x400);
            *(int *)(iVar2 + 0x20) = iVar3;
            if (iVar3 != 0) break;
            FUN_080003f0();
          }
          *(undefined4 *)(iVar2 + 8) = 0x3c;
          *(undefined4 *)(iVar2 + 0xc) = uVar1;
          *(int *)(iVar2 + 0x10) = iVar3 + 0x3fc;
          *(undefined4 *)(iVar2 + 0x24) = 0;
          FUN_08000274(iVar2,1);
          return unaff_lr;
        }
        iVar2 = iVar2 + 0x28;
      }
    }
  }
  else {
    FUN_08028b3c(6,DAT_0804f6f8,DAT_0804f6f8,0);
    FUN_08028b3c(7,uVar1,uVar1,0);
    iVar2 = FUN_0800c5e8();
    if (iVar2 == 0) {
      iVar2 = FUN_0801a720();
      if (iVar2 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar2 < 2) {
        if (iVar2 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar2 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar2 = FUN_0801a6dc(), iVar2 == 0) {
        FUN_080003f0();
      }
    }
  }
  return unaff_lr;
}

