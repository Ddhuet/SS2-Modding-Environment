
/* WARNING: Removing unreachable block (ram,0x08024ba8) */
/* WARNING: Removing unreachable block (ram,0x08024bb4) */

undefined4 FUN_08024c00(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  short *unaff_r5;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 in_stack_00000044;
  undefined4 in_stack_0000004c;
  undefined2 in_stack_00000078;
  ushort uStack0000007c;
  ushort uStack0000007e;
  int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_00000098;
  int in_stack_000000a4;
  uint in_stack_000000a8;
  int in_stack_000000b8;
  int in_stack_000000c8;
  int in_stack_000000d8;
  int in_stack_000000dc;
  uint uStack000000e0;
  undefined4 in_stack_00000100;
  
  uStack000000e0 = param_4;
code_r0x08024c00:
  param_2 = -param_2;
LAB_08024c02:
  if (param_2 < in_stack_00000094 + 0x20) {
    iVar4 = *unaff_r5 - in_stack_00000090;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 < in_stack_00000098 + 0x20) goto LAB_08024c34;
  }
  param_3 = DAT_08024c58;
  if ((*(byte *)(*unaff_r6 + 4) & 0x20) == 0) goto LAB_08024cbe;
LAB_08024c34:
  pbVar5 = (byte *)*unaff_r6;
  if (-1 < (int)((uint)pbVar5[7] * 0x8000000)) {
    if ((pbVar5[4] & 0x20) == 0) goto LAB_08024cbe;
    if ((*pbVar5 & 0xf) == 0xc) goto LAB_08024ca0;
  }
  do {
    unaff_r7 = unaff_r7 + 1;
LAB_08024ca0:
    do {
      do {
        while( true ) {
          if (((((byte *)*unaff_r6)[4] & 0x20) != 0) && ((*(byte *)*unaff_r6 & 0xf) != 0xc)) {
            unaff_r10 = unaff_r10 + 1;
          }
LAB_08024cbe:
          if ((*(uint *)(in_stack_000000d8 + param_3 + 0x38) & 0x2000) != 0) {
            unaff_r9 = unaff_r9 + 1;
          }
          iVar4 = FUN_0800c8d0();
          if (iVar4 != 0) {
            unaff_r9 = 0;
          }
          in_stack_000000d8 = in_stack_000000d8 + 0x154;
          unaff_r6 = unaff_r6 + 0x55;
          uStack000000e0 = uStack000000e0 + 1;
          uVar2 = FUN_08002164();
          if (uVar2 <= uStack000000e0) {
            iVar4 = FUN_08002164();
            if ((unaff_r7 == iVar4) && (iVar4 = FUN_08002164(), unaff_r10 != iVar4)) {
              if ((in_stack_000000a4 == 0) || (in_stack_000000c8 != 0)) {
                if ((unaff_r10 == 0) && (iVar4 = FUN_08002164(), unaff_r9 != iVar4)) {
                  in_stack_000000a8 = in_stack_000000a8 + 1;
                }
              }
              else {
                in_stack_000000a8 = in_stack_000000a8 + 1;
              }
            }
            else {
              in_stack_000000a8 = 0;
            }
            iVar4 = in_stack_000000b8;
            piVar1 = DAT_08024d78;
            if (in_stack_000000a8 < 3) {
              FUN_0806599c(&stack0x00000044,in_stack_000000b8,&stack0x00000078,&stack0x0000007a);
              iVar3 = FUN_0800c684();
              if ((((iVar3 == 0) && (iVar3 = FUN_0800c5e8(), iVar3 == 0)) &&
                  (iVar3 = FUN_0800c61c(), iVar3 == 0)) && (iVar3 = FUN_0800c6dc(), iVar3 == 0)) {
                FUN_0800b5ac(in_stack_0000008c,in_stack_00000090,0);
                FUN_0800b570((int)(short)in_stack_0000008c,(int)(short)in_stack_00000090,
                             &stack0x0000007c,(int)&stack0x0000007c + 2);
                if ((*DAT_08024e2c & 1) != 0) {
                  if (in_stack_000000b8 == 2) {
                    FUN_08007378((short)uStack0000007c + 0x10,(int)(short)uStack0000007e,2,
                                 in_stack_00000078);
                  }
                  else {
                    if (in_stack_000000b8 == 6) {
                      iVar3 = (short)uStack0000007c + -0x10;
                      iVar4 = 6;
                    }
                    else {
                      iVar3 = (int)(short)uStack0000007c;
                    }
                    FUN_08007378(iVar3,(int)(short)uStack0000007e,iVar4,in_stack_00000078);
                  }
                }
              }
              FUN_080003f0();
              if ((*(ushort *)(*DAT_08024ea8 + 4) >> 4 & 1) == 0) {
                FUN_08024696();
              }
            }
            else {
              *(uint *)(*DAT_08024d78 + 0x40) = (uint)*(ushort *)(in_stack_00000084 + 4);
              if (((*(short *)(DAT_08024d7c + 0x8c) == 10) &&
                  (*(short *)(DAT_08024d7c + 0x90) == 0x10)) && (iVar4 = FUN_0800c780(), iVar4 != 0)
                 ) {
                *(undefined4 *)(*piVar1 + 0x40) = 0x12;
              }
              while (iVar4 = FUN_08068408(), iVar4 == 0) {
                FUN_080003f0();
              }
            }
            if ((*(ushort *)(*DAT_08024ea8 + 4) >> 3 & 1) != 0) {
              FUN_08059a8c(0x24);
            }
            if (*(ushort *)(in_stack_00000084 + 6) == 0) {
              *(undefined4 *)(*DAT_080256f8 + 0x44) = 0;
            }
            else {
              *(uint *)(*DAT_08025630 + 0x44) = (uint)(*(ushort *)(in_stack_00000084 + 6) >> 8);
            }
            if (in_stack_000000a4 == 0) {
              iVar3 = FUN_080020f4();
              iVar4 = DAT_080256fc;
              FUN_0801e07c(iVar3 * 0x154 + DAT_080256fc,6);
              iVar3 = FUN_080020f4();
              FUN_0801e07c(iVar3 * 0x154 + iVar4,7);
            }
            *(uint *)(unaff_r8 + 0x38) = *(uint *)(unaff_r8 + 0x38) & DAT_08025700;
            piVar1 = DAT_08025704;
            iVar4 = *DAT_08025704;
            while (iVar4 != 0) {
              FUN_080003f0();
              iVar4 = *piVar1;
            }
            FUN_0800c964();
            piVar1 = DAT_080256f8;
            uVar2 = 0;
            do {
              uVar6 = 0;
              uVar7 = uVar2 + 1;
              do {
                *(undefined1 *)(*piVar1 + 0x1c8 + uVar6 + uVar2 * 5) = 0;
                uVar6 = uVar6 + 1;
              } while (uVar6 < 5);
              uVar2 = uVar7;
            } while (uVar7 < 0x14);
            FUN_080003f0();
            FUN_0801a23c(0x12,2);
            FUN_08058ae8(3);
            return in_stack_00000100;
          }
          uStack0000007c = *(ushort *)*unaff_r6 >> 4;
          unaff_r5 = (short *)((int)&stack0x0000007c + 2);
          uStack0000007e = ((ushort *)*unaff_r6)[1] & 0xfff;
          in_stack_000000dc = DAT_08024bf0;
          iVar4 = FUN_0800c4ec();
          if (iVar4 == 0) break;
          iVar4 = FUN_0800c8d0();
          param_3 = in_stack_000000dc;
          if (iVar4 == 0) {
            param_2 = (short)uStack0000007c - in_stack_0000008c;
            if (param_2 < 0) goto code_r0x08024c00;
            goto LAB_08024c02;
          }
          if (((int)((uint)*(byte *)(*unaff_r6 + 7) * 0x8000000) < 0) ||
             ((*(byte *)(*unaff_r6 + 4) & 0x3f) == 0)) {
            unaff_r7 = unaff_r7 + 1;
          }
        }
        iVar4 = (short)uStack0000007c - in_stack_0000008c;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        param_3 = in_stack_000000dc;
      } while (in_stack_00000094 + 0x20 <= iVar4);
      iVar4 = (short)uStack0000007e - in_stack_00000090;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
    } while ((in_stack_00000098 + 0x20 <= iVar4) ||
            ((*(uint *)(in_stack_000000d8 + in_stack_000000dc + 0x38) & 0x400) == 0));
  } while( true );
}

