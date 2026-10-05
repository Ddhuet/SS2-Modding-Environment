
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08c7c478) */
/* WARNING: Removing unreachable block (ram,0x08c7c4f0) */
/* WARNING: Removing unreachable block (ram,0x08c7c4f4) */
/* WARNING: Removing unreachable block (ram,0x08c7c502) */
/* WARNING: Removing unreachable block (ram,0x08c7c50e) */
/* WARNING: Type propagation algorithm not settling */

void FUN_08272af6(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r2;
  int extraout_r3;
  uint unaff_r6;
  uint unaff_r9;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 in_cr1;
  undefined4 in_cr13;
  undefined4 extraout_s6;
  undefined8 in_d3;
  undefined4 extraout_s7;
  undefined8 uVar9;
  undefined1 in_q15 [16];
  
  uVar9 = in_q15._0_8_;
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x074a39fe();
    uVar9 = in_q15._0_8_;
    in_d3 = CONCAT44(extraout_s7,extraout_s6);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    software_interrupt(0xdbd7d2);
  }
  uVar2 = VectorGetElement(in_d3,1,4,0);
  VectorMultiply(uVar9,uVar2,4);
  bVar8 = false;
  if ((bool)in_CY) {
    uVar1 = unaff_r9 & 0xff;
    bVar8 = uVar1 == 0 || uVar1 != 0 && (bool)((byte)(unaff_r6 >> 0x20 - uVar1) & 1);
  }
  if (!bVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    iVar3 = param_3 >> 4;
  } while (iVar3 == 0 || iVar3 < 0 != (bool)in_OV);
LAB_08c7c440:
  do {
    bVar8 = SCARRY4(param_3,7);
    iVar4 = param_3 + 7;
    if (iVar4 == 0 || param_3 < -7) break;
LAB_08c7c458:
    iVar4 = param_3 >> 8;
    bVar8 = SCARRY4(param_4,7);
  } while (iVar3 == 0 || iVar3 < 0 != bVar8);
  bVar6 = param_4 >> 7 < 0;
  bVar7 = false;
  if (param_4 >> 7 == 0) goto LAB_08c7c440;
LAB_08c7c49a:
  if (!bVar7 && bVar6 == bVar8) {
LAB_08c7c4be:
    iVar4 = iVar4 >> 0x1f;
    do {
      iVar4 = iVar4 >> 0x20;
      while( true ) {
        iVar5 = iVar4;
        iVar4 = iVar5 >> 0x1f;
        bVar8 = SCARRY4(param_4,7);
        if (iVar3 == 0 || iVar3 < 0 != bVar8) {
          bVar6 = iVar3 < 0;
          bVar7 = iVar3 == 0;
          if ((bVar7 || bVar6 != bVar8) || (bVar7 || bVar6 != bVar8)) goto LAB_08c7c458;
          if (!bVar7 && bVar6 == bVar8) goto LAB_08c7c49a;
          goto LAB_08c7c4be;
        }
        if (param_4 >> 4 == 0) goto LAB_08c7c4be;
        if (param_4 >> 4 < 0 != bVar8) break;
        if (iVar3 != 0 && iVar3 < 0 == bVar8) {
          if (-1 < iVar5 || iVar4 < 0 != bVar8) {
            coprocessor_loadlong(0xd,in_cr13,&stack0x00000044);
            coprocessor_loadlong(1,in_cr1,iVar4 + 0x44);
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    } while( true );
  }
  goto LAB_08c7c458;
}

