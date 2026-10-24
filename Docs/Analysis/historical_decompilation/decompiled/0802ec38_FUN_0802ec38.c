
undefined4 FUN_0802ec38(int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  bool bVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_lr;
  
  iVar1 = FUN_08028a50(0x21,0xb6,0x87);
  piVar7 = (int *)(*DAT_0802ed28 + DAT_0802ed2c);
  uVar8 = 0;
  do {
    if (*piVar7 == iVar1) goto LAB_0802ec68;
    uVar8 = uVar8 + 1;
    piVar7 = piVar7 + 0x1c;
  } while (uVar8 < 0xf);
  FUN_080003f0();
  piVar7 = (int *)0x0;
LAB_0802ec68:
  if (piVar7 != (int *)0x0) {
    *(undefined2 *)(piVar7 + 6) = 8;
    *(undefined2 *)((int)piVar7 + 0x1a) = 0x14;
    piVar7[0xf] = piVar7[0xf] | 0x10;
  }
  iVar2 = DAT_0802ed30;
  piVar7 = (int *)(*DAT_0802ed28 + DAT_0802ed2c);
  uVar8 = 0;
  do {
    if (*piVar7 == iVar1) goto LAB_0802ec9c;
    uVar8 = uVar8 + 1;
    piVar7 = piVar7 + 0x1c;
  } while (uVar8 < 0xf);
  FUN_080003f0();
  piVar7 = (int *)0x0;
LAB_0802ec9c:
  if (piVar7 != (int *)0x0) {
    piVar7[0x11] = iVar2;
  }
  iVar1 = FUN_08028a50(8,0x38,0x87);
  piVar7 = (int *)(*DAT_0802ed28 + DAT_0802ed2c);
  uVar8 = 0;
  do {
    if (*piVar7 == iVar1) goto LAB_0802eccc;
    uVar8 = uVar8 + 1;
    piVar7 = piVar7 + 0x1c;
  } while (uVar8 < 0xf);
  FUN_080003f0();
  piVar7 = (int *)0x0;
LAB_0802eccc:
  if (piVar7 != (int *)0x0) {
    *(undefined2 *)(piVar7 + 6) = 8;
    *(undefined2 *)((int)piVar7 + 0x1a) = 0x14;
    piVar7[0xf] = piVar7[0xf] | 0x10;
  }
  iVar2 = DAT_0802ed34;
  piVar7 = (int *)(*DAT_0802ed28 + DAT_0802ed2c);
  uVar8 = 0;
  do {
    if (*piVar7 == iVar1) goto LAB_0802ed00;
    uVar8 = uVar8 + 1;
    piVar7 = piVar7 + 0x1c;
  } while (uVar8 < 0xf);
  FUN_080003f0();
  piVar7 = (int *)0x0;
LAB_0802ed00:
  if (piVar7 != (int *)0x0) {
    piVar7[0x11] = iVar2;
  }
  FUN_08029444(iVar1,2);
  iVar1 = FUN_08002164();
  iVar2 = FUN_0800c780();
  if (iVar2 == 0) {
    pbVar3 = (byte *)(*DAT_0802edb0 + DAT_0802edb4);
  }
  else {
    pbVar3 = (byte *)(*DAT_0802ed28 + DAT_0802ed38);
  }
  if ((((int)(uint)*pbVar3 >> 3 & 1U) != 0) || (iVar1 != 1)) {
    FUN_08028b3c(6,DAT_0802edb8,DAT_0802edb8,0);
  }
  if (param_1 != 0) {
    FUN_08028b3c(0,0xb8,0xa0,0);
    FUN_0802917c(0,4);
  }
  if (param_1 == 1) {
    iVar1 = FUN_080020f4();
    iVar1 = iVar1 * 0x154 + DAT_0802edf4;
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
    FUN_0800ca44();
    iVar1 = FUN_0800c5e8();
    if (iVar1 == 0) {
      iVar1 = FUN_0801a720();
      if (iVar1 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar1 < 2) {
        if (iVar1 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar1 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar1 = FUN_0801a6dc(), iVar1 == 0) {
        FUN_080003f0();
      }
    }
    piVar7 = DAT_0802ee44;
    uVar9 = 0;
    uVar8 = 0;
    do {
      iVar1 = FUN_0800c780();
      if (iVar1 == 0) {
        bVar6 = true;
        if ((1 << (uVar8 & 0xff) & *(uint *)(*piVar7 + 0x84)) == 0) goto LAB_0802ee5a;
LAB_0802ee5c:
        if (bVar6) goto LAB_0802ee60;
      }
      else {
        if ((1 << (uVar8 & 0xff) & *(uint *)(*piVar7 + 0x88)) == 0) {
LAB_0802ee5a:
          bVar6 = false;
          goto LAB_0802ee5c;
        }
LAB_0802ee60:
        uVar9 = uVar9 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0xb);
    iVar1 = FUN_0800c780();
    if (iVar1 == 0) {
      pbVar3 = (byte *)(*DAT_0802eeac + 0x1b4);
    }
    else {
      pbVar3 = (byte *)(*DAT_0802ee80 + 0x1c0);
    }
    if (uVar9 != *pbVar3) {
      if (uVar9 - 2 < 10) {
                    /* WARNING: Could not recover jumptable at 0x0802eea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(PTR_PTR_0802eeb0 + (uVar9 - 2) * 4))();
        return uVar5;
      }
      iVar1 = FUN_0800c780();
      if (iVar1 == 0) {
        puVar4 = (undefined1 *)(*DAT_0802f2d8 + 0x1b4);
      }
      else {
        puVar4 = (undefined1 *)(*DAT_0802f2c4 + 0x1c0);
      }
      *puVar4 = (char)uVar9;
    }
  }
  else {
    if (param_1 != 2) {
      iVar1 = FUN_0800c5e8();
      if (iVar1 != 0) {
        return unaff_lr;
      }
      iVar1 = FUN_0801a720();
      if (iVar1 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar1 < 2) {
        if (iVar1 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar1 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar1 = FUN_0801a6dc(), iVar1 == 0) {
        FUN_080003f0();
      }
      return unaff_lr;
    }
    iVar1 = FUN_080020f4();
    iVar1 = iVar1 * 0x154 + DAT_0802f314;
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
    FUN_0800ca44();
    iVar1 = FUN_0800c5e8();
    if (iVar1 == 0) {
      iVar1 = FUN_0801a720();
      if (iVar1 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar1 < 2) {
        if (iVar1 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar1 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar1 = FUN_0801a6dc(), iVar1 == 0) {
        FUN_080003f0();
      }
    }
    while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
      FUN_080003f0();
    }
    while (iVar1 = FUN_0805f8b4(), iVar1 != 0) {
      FUN_080003f0();
    }
    uVar5 = FUN_0805e608(1,0xf,2,0,0xffffffff,DAT_0802f378);
    while (iVar1 = FUN_0805f820(uVar5), iVar1 == 0) {
      iVar1 = FUN_0800c748();
      if (iVar1 != 0) {
        FUN_0805f8e0();
        break;
      }
      FUN_080003f0();
    }
  }
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_0802f3b8;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  return unaff_lr;
}

