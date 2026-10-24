
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0879706a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 *unaff_r9;
  undefined4 *puVar3;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr13;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    unaff_lr = 0x879706e;
    uVar5 = func_0x09e847de();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8797072;
    uVar5 = func_0x0768e7e2();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (in_NG != in_OV) {
    puVar4 = &stack0x00000374;
    register0x00000054 = (BADSPACEBASE *)&stack0x00000374;
    coprocessor_load(0xd,in_cr13,puVar4);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return (int)uVar5;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return unaff_r9[1];
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return unaff_r9[1];
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x879708a;
    uVar5 = func_0x07679732();
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar1 = (undefined4)uVar5;
  if ((bool)in_CY && !(bool)in_ZR) {
    return uVar1;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    return uVar1;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_r8[1] = param_4;
    unaff_r8[2] = unaff_r7;
    unaff_r8[3] = unaff_r11;
    unaff_r8[4] = register0x00000054;
    unaff_r8[5] = 0x879709a;
  }
  if ((bool)in_OV) {
    *unaff_r8 = param_4;
    unaff_r8[1] = unaff_r7;
    unaff_r8[2] = unaff_r11;
    unaff_r8[3] = in_r12;
    unaff_r8[4] = 0x879709e;
    *unaff_r8 = uVar2;
    unaff_r8[1] = param_3;
    unaff_r8[2] = unaff_r5;
    unaff_r8[3] = unaff_r6;
    unaff_r8[4] = unaff_r8;
    unaff_r8[5] = unaff_r9;
    unaff_r8[6] = unaff_r10;
    unaff_r8[7] = register0x00000054;
    unaff_r8[8] = 0x87970a2;
  }
  else {
    uVar2 = *unaff_r8;
    param_3 = unaff_r8[1];
    unaff_r5 = unaff_r8[2];
    unaff_r6 = unaff_r8[3];
    unaff_r9 = (undefined4 *)unaff_r8[4];
    unaff_r10 = unaff_r8[5];
    register0x00000054 = (BADSPACEBASE *)unaff_r8[6];
    unaff_lr = unaff_r8[7];
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    puVar3 = unaff_r9;
    if ((bool)in_CY && !(bool)in_ZR) {
      uVar2 = *unaff_r9;
      param_3 = unaff_r9[1];
      unaff_r5 = unaff_r9[2];
      unaff_r6 = unaff_r9[3];
      puVar3 = (undefined4 *)unaff_r9[4];
      unaff_r10 = unaff_r9[5];
      register0x00000054 = (BADSPACEBASE *)unaff_r9[7];
      unaff_lr = unaff_r9[8];
    }
    if (in_NG == in_OV) {
      *(undefined4 *)(unaff_r10 + 4) = uVar1;
      *(undefined4 *)(unaff_r10 + 8) = uVar2;
      *(undefined4 *)(unaff_r10 + 0xc) = param_3;
      *(undefined4 *)(unaff_r10 + 0x10) = unaff_r5;
      *(undefined4 *)(unaff_r10 + 0x14) = unaff_r6;
      *(undefined4 **)(unaff_r10 + 0x18) = puVar3;
      *(int *)(unaff_r10 + 0x1c) = unaff_r10;
      *(BADSPACEBASE **)(unaff_r10 + 0x20) = register0x00000054;
      *(undefined4 *)(unaff_r10 + 0x24) = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

