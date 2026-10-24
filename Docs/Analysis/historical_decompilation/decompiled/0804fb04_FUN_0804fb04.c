
void FUN_0804fb04(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    FUN_0806870c(DAT_0804fb20,1);
  }
  else if (param_1 == 1) {
    uVar6 = *(uint *)(*DAT_0804fb70 + 0x38);
    if ((uVar6 & 1) == 0) {
      *(uint *)(*DAT_0804fb70 + 0x38) = uVar6 | 1;
      iVar2 = FUN_0800c61c();
      if (iVar2 == 0) {
        iVar2 = FUN_080020f4();
        iVar2 = iVar2 * 0x154 + DAT_0804fb74;
        *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
        FUN_0800ca44();
        FUN_080745a8(0x4000,0x4000,0x29,1);
        sVar1 = 2;
        do {
          FUN_080003f0();
          iVar2 = FUN_080021a8();
          if (iVar2 != 0) break;
          sVar1 = sVar1 + -1;
        } while (sVar1 != 0);
        FUN_080745a8(0x3800,0x4000,0x29,1);
        FUN_080745a8(0x4400,0x3800,0x29,1);
        sVar1 = 2;
        do {
          FUN_080003f0();
          iVar2 = FUN_080021a8();
          if (iVar2 != 0) break;
          sVar1 = sVar1 + -1;
        } while (sVar1 != 0);
        FUN_080745a8(0x4800,0x4000,0x29,1);
        FUN_080745a8(0x3c00,0x3800,0x29,1);
        sVar1 = 8;
        do {
          FUN_080003f0();
          iVar2 = FUN_080021a8();
          if (iVar2 != 0) break;
          sVar1 = sVar1 + -1;
        } while (sVar1 != 0);
        iVar2 = FUN_08028a50(0x2f,0x40,0x40);
        FUN_08028e2c(iVar2,0,0xfffffff6,2);
        FUN_08028e2c(iVar2,0,0xfffffff6,3);
        FUN_08028e2c(iVar2,0,0xfffffff6,4);
        FUN_08028e2c(iVar2,0,0xfffffff6,5);
        FUN_08028e2c(iVar2,0,0xc,5);
        FUN_08028e2c(iVar2,0,0xc,4);
        FUN_08028e2c(iVar2,0,0xc,3);
        FUN_08028e2c(iVar2,0,0xc,2);
        while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
          FUN_080003f0();
        }
        while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
          FUN_080003f0();
        }
        uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804fca4);
        while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
          FUN_080003f0();
        }
        FUN_08029444(iVar2,8);
        FUN_0802917c(iVar2,6);
        FUN_08028b3c(iVar2,0x72,0x48,0x28);
        FUN_08029210(iVar2,0);
        FUN_0802917c(iVar2,4);
        FUN_08028e2c(iVar2,0,0xfffffffe,4);
        FUN_08028e2c(iVar2,0,2,4);
        FUN_08028e2c(iVar2,0,0xfffffffe,4);
        FUN_08028e2c(iVar2,0,2,4);
        while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
          FUN_080003f0();
        }
        while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
          FUN_080003f0();
        }
        uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804fd4c);
        while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
          FUN_080003f0();
        }
        FUN_08028b3c(7,DAT_0804fdfc,DAT_0804fdfc,0);
        iVar3 = FUN_080020f4();
        iVar3 = iVar3 * 0x154 + DAT_0804fe00;
        *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xfffffffe;
        FUN_0800ca58();
        FUN_08029444(iVar2,8);
        FUN_0802917c(iVar2,0);
        FUN_08028b3c(iVar2,0x72,0x72,0x14);
        FUN_0802917c(iVar2,6);
        FUN_08028b3c(iVar2,0xb0,0x90,0x1e);
        FUN_0802917c(iVar2,4);
        FUN_08028b3c(iVar2,0xac,0,0x3c);
        piVar5 = (int *)(*DAT_0804fe04 + DAT_0804fe08);
        uVar6 = 0;
        do {
          if (*piVar5 == iVar2) goto LAB_0804fdec;
          uVar6 = uVar6 + 1;
          piVar5 = piVar5 + 0x1c;
        } while (uVar6 < 0xf);
        FUN_080003f0();
        piVar5 = (int *)0x0;
LAB_0804fdec:
        if (piVar5 != (int *)0x0) {
          *(undefined2 *)((int)piVar5 + 0x36) = 4;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0804fdfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

