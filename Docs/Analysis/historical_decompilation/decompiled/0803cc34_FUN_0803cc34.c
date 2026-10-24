
undefined4 FUN_0803cc34(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  byte *pbVar5;
  undefined4 unaff_lr;
  
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_0803cc74;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
  FUN_0800ca44();
  iVar1 = FUN_08002164();
  if (iVar1 == 1) {
    iVar1 = FUN_0800c780();
    if (iVar1 == 0) {
      iVar2 = *DAT_0803cc98;
      iVar1 = DAT_0803cc9c;
    }
    else {
      iVar2 = *DAT_0803cc78;
      iVar1 = DAT_0803cc7c;
    }
    if (((int)(uint)*(byte *)(iVar2 + iVar1) >> 3 & 1U) == 0) {
      while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
        FUN_080003f0();
      }
      uVar3 = FUN_0805e608(1,0xf,2,0,0xfffffffe,DAT_0803ccc8);
      while (iVar1 = FUN_0805f820(uVar3), iVar1 == 0) {
        FUN_080003f0();
      }
      iVar1 = FUN_0805f838(uVar3);
      if (iVar1 == 0) {
        do {
          while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
            FUN_080003f0();
          }
          uVar3 = FUN_0805e608(1,0xf,2,0,0xfffffffe,DAT_0803cd10);
          while (iVar1 = FUN_0805f820(uVar3), iVar1 == 0) {
            FUN_080003f0();
          }
          iVar1 = FUN_0805f838(uVar3);
        } while (iVar1 != 0);
      }
      while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
        FUN_080003f0();
      }
      uVar3 = FUN_0805e608(1,0xf,2,0,0xfffffffe,DAT_0803cd54);
      while (iVar1 = FUN_0805f820(uVar3), iVar1 == 0) {
        FUN_080003f0();
      }
      iVar1 = FUN_0805f838(uVar3);
      if (iVar1 == 1) {
        iVar1 = 0;
        psVar4 = (short *)(*DAT_0803cdc4 + 0x158);
        iVar2 = 0x18;
        do {
          if (*psVar4 == 10) {
            iVar1 = iVar1 + *(int *)(psVar4 + 2);
          }
          iVar2 = iVar2 + -1;
          psVar4 = psVar4 + 8;
        } while (-1 < iVar2);
        psVar4 = (short *)(*DAT_0803cdc4 + 0x2e8);
        for (iVar2 = (uint)*(ushort *)(*DAT_0803cdc4 + 0x72) * 0xf; iVar2 != 0; iVar2 = iVar2 + -1)
        {
          if (*psVar4 == 10) {
            iVar1 = iVar1 + *(int *)(psVar4 + 2);
          }
          psVar4 = psVar4 + 8;
        }
        if (iVar1 < 100) {
          while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
            FUN_080003f0();
          }
          while (iVar1 = FUN_0805f8b4(), iVar1 != 0) {
            FUN_080003f0();
          }
          uVar3 = FUN_0805e608(1,0xf,2,0,0xffffffff,DAT_0803ceb0);
          while (iVar1 = FUN_0805f820(uVar3), iVar1 == 0) {
            iVar1 = FUN_0800c748();
            if (iVar1 != 0) {
              FUN_0805f8e0();
              break;
            }
            FUN_080003f0();
          }
        }
        else {
          while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
            FUN_080003f0();
          }
          while (iVar1 = FUN_0805f8b4(), iVar1 != 0) {
            FUN_080003f0();
          }
          uVar3 = FUN_0805e608(1,0xf,2,0,0xffffffff,DAT_0803cdfc);
          while (iVar1 = FUN_0805f820(uVar3), iVar1 == 0) {
            iVar1 = FUN_0800c748();
            if (iVar1 != 0) {
              FUN_0805f8e0();
              break;
            }
            FUN_080003f0();
          }
          if ((*DAT_0803ce50 & 0x20) == 0) {
            FUN_080067e8(0x23);
          }
          FUN_08028b3c(6,DAT_0803ce54,DAT_0803ce54,0);
          FUN_0807c778(100);
          iVar1 = FUN_0800c780();
          if (iVar1 == 0) {
            pbVar5 = (byte *)(*DAT_0803ce74 + DAT_0803ce78);
          }
          else {
            pbVar5 = (byte *)(*DAT_0803ce58 + DAT_0803ce5c);
          }
          *pbVar5 = *pbVar5 | 8;
        }
      }
      else {
        while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
          FUN_080003f0();
        }
        while (iVar1 = FUN_0805f8b4(), iVar1 != 0) {
          FUN_080003f0();
        }
        uVar3 = FUN_0805e608(1,0xf,2,0,0xffffffff,DAT_0803cf08);
        while (iVar1 = FUN_0805f820(uVar3), iVar1 == 0) {
          iVar1 = FUN_0800c748();
          if (iVar1 != 0) {
            FUN_0805f8e0();
            break;
          }
          FUN_080003f0();
        }
      }
    }
    else {
      while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
        FUN_080003f0();
      }
      while (iVar1 = FUN_0805f8b4(), iVar1 != 0) {
        FUN_080003f0();
      }
      uVar3 = FUN_0805e608(1,0xf,2,0,0xffffffff,DAT_0803cf5c);
      while (iVar1 = FUN_0805f820(uVar3), iVar1 == 0) {
        iVar1 = FUN_0800c748();
        if (iVar1 != 0) {
          FUN_0805f8e0();
          break;
        }
        FUN_080003f0();
      }
    }
  }
  else {
    while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
      FUN_080003f0();
    }
    while (iVar1 = FUN_0805f8b4(), iVar1 != 0) {
      FUN_080003f0();
    }
    uVar3 = FUN_0805e608(1,0xf,2,0,0xffffffff,DAT_0803cfb0);
    while (iVar1 = FUN_0805f820(uVar3), iVar1 == 0) {
      iVar1 = FUN_0800c748();
      if (iVar1 != 0) {
        FUN_0805f8e0();
        break;
      }
      FUN_080003f0();
    }
  }
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_0803cff8;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  return unaff_lr;
}

