
undefined4 FUN_08048e08(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_lr;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  if (param_1 == 2) {
    if ((*DAT_0804937c & 0x20) == 0) {
      FUN_080067e8(0x45);
    }
    FUN_08019a00(*(undefined2 *)(*DAT_08049380 + 2),3);
    FUN_08029548(1,0);
  }
  else if (param_1 < 3) {
    if (param_1 == 0) {
      sVar2 = 0x1e;
      do {
        FUN_080003f0();
        iVar3 = FUN_080021a8();
        if (iVar3 != 0) break;
        sVar2 = sVar2 + -1;
      } while (sVar2 != 0);
      FUN_08028b3c(1,0x40,0xb0,0x1e);
      sVar2 = 0x1e;
      do {
        FUN_080003f0();
        iVar3 = FUN_080021a8();
        if (iVar3 != 0) break;
        sVar2 = sVar2 + -1;
      } while (sVar2 != 0);
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
        FUN_080003f0();
      }
      uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,0x140000);
      while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
        FUN_080003f0();
      }
      uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_08048f04);
      FUN_08028e2c(2,0,0xfffffffd,3);
      FUN_08028e2c(2,0,3,3);
      while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
        FUN_080003f0();
      }
      sVar2 = *(short *)(DAT_08048f8c + 0x80);
      sVar1 = *(short *)(DAT_08048f8c + 0x82);
      iVar3 = 0;
      do {
        FUN_08066020(local_28,(int)sVar2,0,iVar3);
        FUN_08066020(local_24,(int)sVar1,0,iVar3);
        FUN_0800b4e8((int)local_28._0_2_,(int)local_24._0_2_);
        FUN_080003f0();
        iVar3 = iVar3 + 0x22;
      } while (iVar3 < 0x401);
      iVar3 = FUN_080020f4();
      iVar3 = iVar3 * 0x154 + DAT_08048f90;
      *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xfffffffe;
      FUN_0800ca58();
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
        FUN_080003f0();
      }
      uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_08048fe0);
      FUN_08028e2c(1,0,0xfffffffd,3);
      FUN_08028e2c(1,0,3,3);
      while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
        FUN_080003f0();
      }
      uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_08049040);
      FUN_08028e2c(2,0,0xfffffffd,3);
      FUN_08028e2c(2,0,3,3);
      while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
        FUN_080003f0();
      }
      uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_080490a0);
      FUN_08028e2c(1,0,0xfffffffd,3);
      FUN_08028e2c(1,0,3,3);
      while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
        FUN_080003f0();
      }
      uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_08049100);
      FUN_08028e2c(2,0,0xfffffffd,3);
      FUN_08028e2c(2,0,3,3);
      while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
        FUN_080003f0();
      }
      uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_08049160);
      FUN_08028e2c(1,0,0xfffffffd,3);
      FUN_08028e2c(1,0,3,3);
      while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
        FUN_080003f0();
      }
      uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_080491c0);
      FUN_08028e2c(2,0,0xfffffffd,3);
      FUN_08028e2c(2,0,3,3);
      while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
        FUN_080003f0();
      }
      uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_08049220);
      FUN_08028e2c(1,0,0xfffffffd,3);
      FUN_08028e2c(1,0,3,3);
      while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
        FUN_080003f0();
      }
      uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_08049280);
      FUN_08028e2c(2,0,0xfffffffd,3);
      FUN_08028e2c(2,0,3,3);
      while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
        FUN_080003f0();
      }
      uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_080492e0);
      FUN_08028e2c(1,0,0xfffffffd,3);
      FUN_08028e2c(1,0,3,3);
      while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
        FUN_080003f0();
      }
      uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_08049340);
      FUN_08028e2c(2,0,0xfffffffd,3);
      FUN_08028e2c(2,0,3,3);
      while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
        FUN_080003f0();
      }
    }
  }
  else if (param_1 == 3) {
    if ((*DAT_080493c0 & 0x20) == 0) {
      FUN_080067e8(0x45);
    }
    FUN_08019a00(*(undefined2 *)(*DAT_080493c4 + DAT_080493c8 + 2),3);
    FUN_08029548(2,0);
  }
  return unaff_lr;
}

