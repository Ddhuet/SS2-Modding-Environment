
/* WARNING: Control flow encountered bad instruction data */

void FUN_0854dad4(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  uint unaff_r4;
  undefined4 *unaff_r5;
  undefined4 *puVar6;
  undefined1 *unaff_r6;
  undefined1 *unaff_r7;
  undefined4 unaff_r8;
  undefined1 *unaff_r9;
  int unaff_r10;
  undefined1 unaff_r11;
  undefined1 *puVar7;
  undefined4 extraout_r12;
  undefined4 in_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined4 extraout_r12_02;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 uVar8;
  
  *unaff_r7 = unaff_r11;
  if (in_NG == in_OV) {
    unaff_r10 = unaff_r10 + 0x390;
  }
  puVar4 = param_1;
  if (!(bool)in_ZR && in_NG == in_OV) {
    puVar4 = (uint *)((int)param_1 + ((int)unaff_r6 >> 8));
    unaff_r6 = (undefined1 *)*param_1;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    puVar4 = (uint *)((int)puVar4 + -0x441);
    unaff_r6 = (undefined1 *)(uint)*(byte *)puVar4;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x854daec;
    uVar8 = func_0x07582a64();
    param_2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    puVar4 = (uint *)uVar8;
    param_3 = extraout_r2;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  uVar8 = CONCAT44(param_2,puVar4);
  if (!(bool)in_OV) {
    unaff_lr = 0x854daf0;
    uVar8 = func_0x0a427818();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x854daf4;
    uVar8 = func_0x072b6d38();
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_02;
    in_r12 = extraout_r12_02;
  }
  uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
  puVar3 = (undefined1 *)uVar8;
  if (!(bool)in_OV) {
    in_CY = puVar3 == (undefined1 *)0x0;
    in_OV = SBORROW4(0,(int)puVar3);
    unaff_r4 = -(int)puVar3;
    in_NG = (int)unaff_r4 < 0;
    in_ZR = unaff_r4 == 0;
  }
  puVar6 = unaff_r5 + 0x164;
  puVar7 = (undefined1 *)*unaff_r5;
  if (!(bool)in_OV) {
    software_interrupt(0x442f2c);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    puVar6 = unaff_r5 + 0x219;
    coprocessor_load(6,in_cr12,puVar6);
  }
  if ((bool)in_OV) {
    param_4 = uRam0854db0c;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar1 = (uint)in_CY << 0x1f | unaff_r4 >> 1;
    in_CY = CARRY4((uint)&stack0x00000000,uVar1);
    in_OV = SCARRY4((int)&stack0x00000000,uVar1);
    unaff_r9 = &stack0x00000000 + uVar1;
    in_NG = (int)unaff_r9 < 0;
    in_ZR = unaff_r9 == (undefined1 *)0x0;
  }
  if (!(bool)in_CY) {
    software_interrupt(0x362030);
  }
  uVar2 = CONCAT44(uRam0854db20._4_4_,(undefined4)uRam0854db20);
  if (!(bool)in_ZR && in_NG == in_OV) {
    iRam0854db44 = 0x854db1c;
    uRam0854db28 = param_3;
    uRam0854db2c = param_4;
    puRam0854db30 = puVar6;
    puRam0854db34 = unaff_r7 + 0x57f;
    puRam0854db38 = unaff_r9;
    puRam0854db3c = puVar7;
    uRam0854db40 = unaff_lr;
    uVar2 = uVar8;
  }
  uRam0854db20._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uRam0854db20._0_4_ = (undefined4)uVar2;
  if (in_NG != in_OV) {
    software_interrupt(0xc9bdbd);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_function(5,0xe,6,in_cr14,in_cr1,in_cr13);
  }
  if (in_NG == in_OV) {
    if (!(bool)in_ZR && in_NG == in_OV) {
      uRam0854db50 = 0x854db30;
      puRam0854db34 = puVar3;
      puRam0854db38 = unaff_r6;
      puRam0854db3c = unaff_r7 + 0x57f;
      uRam0854db40 = unaff_r8;
      iRam0854db44 = unaff_r10;
      uRam0854db48 = in_r12;
      uRam0854db4c = unaff_lr;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xc9c9ca);
  if ((bool)in_NG) {
    unaff_r9 = *(undefined1 **)(puVar7 + -0xc);
    uVar5 = *(undefined4 *)(puVar7 + -0x14);
  }
  if ((bool)in_CY) {
    param_4 = uRam080086a0;
  }
  uRam0854db20 = uVar2;
  if (!(bool)in_CY || (bool)in_ZR) {
    puVar3 = (undefined1 *)func_0x08108cac(puVar3,uVar5);
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if ((bool)in_ZR) {
    *(undefined4 *)(puVar3 + 0x898) = unaff_r8;
  }
  if (!(bool)in_OV) {
    puVar7 = *(undefined1 **)(unaff_r9 + -4);
  }
  if ((bool)in_ZR) {
    software_interrupt(0x890709);
  }
  uVar8 = uRam0854db20;
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_load(1,in_cr0,unaff_r4 - 0x100);
    puVar6[-1] = in_r12;
    puVar6[-2] = puVar7;
    puVar6[-3] = puVar6;
    puVar6[-4] = param_4;
    uVar8 = uRam0854db20;
  }
  uRam0854db20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uRam0854db20._0_4_ = (undefined4)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

