
/* WARNING: Control flow encountered bad instruction data */

void FUN_082699d4(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint extraout_r2;
  int iVar4;
  int unaff_r7;
  undefined4 unaff_r9;
  byte *unaff_r10;
  undefined4 unaff_r11;
  uint in_r12;
  undefined4 uVar5;
  int unaff_lr;
  uint unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar6;
  undefined4 in_cr1;
  undefined4 in_cr5;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 uVar7;
  
  uVar7 = CONCAT44(param_2,param_1);
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(undefined4 *)(unaff_r7 + (in_r12 >> 0xb | in_r12 << 0x15)) = unaff_r11;
  }
  if (!(bool)in_NG) {
    coprocessor_loadlong(8,in_cr1,0x8269ad4);
    if (!(bool)in_CY) {
      unaff_lr = 0x82699e4;
      uVar7 = func_0x0871e120();
      param_3 = extraout_r2;
    }
    uVar3 = (uint)((ulonglong)uVar7 >> 0x20);
    puVar2 = (uint *)uVar7;
    if ((bool)in_ZR) {
      unaff_r10 = unaff_r10 + (param_3 >> 0x1a);
      unaff_pc = (uint)*unaff_r10;
    }
    bVar6 = false;
    if ((bool)in_CY) {
      uVar1 = (uint)unaff_r10 >> 0x1f | (int)unaff_r10 << 1;
      bVar6 = uVar3 <= uVar1;
      in_OV = SBORROW4(uVar1,uVar3);
      in_NG = (int)(uVar1 - uVar3) < 0;
      in_ZR = uVar1 == uVar3;
    }
    uVar5 = *(undefined4 *)(param_3 - 4);
    iVar4 = *(int *)(param_3 - 0xc);
    if ((bool)in_ZR || in_NG != in_OV) {
      software_interrupt(0xc9a6b0);
    }
    if (!bVar6) {
      *(undefined4 *)unaff_r10 = *(undefined4 *)param_3;
      *(undefined4 *)(unaff_r10 + -4) = uVar5;
      *(byte **)(unaff_r10 + -8) = unaff_r10;
      *(undefined4 *)(unaff_r10 + -0xc) = unaff_r9;
      *(undefined8 *)(unaff_r10 + -0x14) = uVar7;
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      coprocessor_storelong(0xb,in_cr15,unaff_r10 + 0x4c);
    }
    if (!(bool)in_ZR) {
      software_interrupt(0x3814d5);
    }
    *(uint *)(iVar4 + -0xafc) = unaff_pc;
    if (!bVar6) {
      puVar2 = (uint *)((int)puVar2 - (unaff_lr >> 7));
      *puVar2 = unaff_pc;
    }
    if (in_NG == in_OV) {
      coprocessor_function(0,0xe,1,in_cr1,in_cr5,in_cr14);
    }
    if ((bool)in_ZR) {
      *(char *)puVar2 = (char)uVar5;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

