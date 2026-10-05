
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08d2bb2e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  undefined1 *unaff_r7;
  undefined1 *puVar1;
  undefined1 *unaff_r8;
  undefined1 *puVar2;
  uint unaff_r9;
  undefined4 unaff_r10;
  undefined1 *unaff_r11;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint in_r12;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr10;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  puVar3 = unaff_r11;
  if ((bool)in_NG) {
    puVar3 = unaff_r11 + -0x514;
    *unaff_r11 = (char)puVar3;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x8d2bb36;
    uVar5 = func_0x07b193aa();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  puVar1 = unaff_r7;
  if ((bool)in_NG) {
    puVar1 = unaff_r7 + -0x61c;
    *unaff_r7 = (char)puVar3;
  }
  puVar2 = unaff_r8;
  if (!(bool)in_ZR && in_NG == in_OV) {
    puVar2 = unaff_r8 + -0x81c;
    *unaff_r8 = (char)puVar3;
    unaff_lr = 0x8d2bb42;
    uVar5 = func_0x07999fb6();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar4 = puVar3;
  if (!(bool)in_NG) {
    puVar4 = puVar3 + 0x2e0;
    coprocessor_load(1,in_cr1,puVar3);
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return *(undefined8 *)(unaff_r9 + 4);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    unaff_lr = 0x8d2bb76;
    uVar5 = func_0x0785eea6();
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r5 = (int)uVar5;
    unaff_r5[1] = param_4;
    unaff_r5[2] = unaff_r5;
    unaff_r5[3] = puVar1;
    unaff_r5[4] = puVar2;
    unaff_r5[5] = unaff_r9;
    unaff_r5[6] = puVar4;
    unaff_r5[7] = unaff_lr;
    unaff_r5[8] = 0x8d2bb86;
    in_r12 = in_r12 & ~(unaff_r9 >> 0x17);
  }
  if (!(bool)in_ZR) {
    coprocessor_load(0xd,in_cr10,in_r12);
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8d2bb8e;
    uVar5 = func_0x07bf2282();
    param_3 = extraout_r2_02;
    param_4 = extraout_r3_02;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x8d2bb92;
    uVar5 = func_0x07bf2ec6();
    param_3 = extraout_r2_03;
    param_4 = extraout_r3_03;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x8d2bb96;
    uVar5 = func_0x0781a61e();
    param_3 = extraout_r2_04;
    param_4 = extraout_r3_04;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    *(undefined4 *)(puVar4 + 4) = param_3;
    *(undefined4 *)(puVar4 + 8) = param_4;
    *(undefined4 *)(puVar4 + 0xc) = unaff_r4;
    *(undefined4 *)(puVar4 + 0x10) = unaff_r6;
    *(undefined1 **)(puVar4 + 0x14) = puVar1;
    *(undefined1 **)(puVar4 + 0x18) = puVar2;
    *(undefined4 *)(puVar4 + 0x1c) = unaff_r10;
    *(undefined1 **)(puVar4 + 0x20) = puVar4;
    *(undefined4 *)(puVar4 + 0x24) = unaff_lr;
    *(undefined4 *)(puVar4 + 0x28) = 0x8d2bba2;
    *(undefined8 *)(puVar4 + 0x2c) = uVar5;
    *(undefined4 *)(puVar4 + 0x34) = param_4;
    *(undefined4 *)(puVar4 + 0x38) = unaff_r6;
    *(undefined1 **)(puVar4 + 0x3c) = puVar1;
    *(undefined1 **)(puVar4 + 0x40) = puVar2;
    *(uint *)(puVar4 + 0x44) = unaff_r9;
    *(undefined1 **)(puVar4 + 0x48) = puVar4 + 0x28;
    *(BADSPACEBASE **)(puVar4 + 0x4c) = register0x00000054;
    *(undefined4 *)(puVar4 + 0x50) = 0x8d2bba6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

