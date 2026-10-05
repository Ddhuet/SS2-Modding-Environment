
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ef4386(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  int unaff_r11;
  int iVar1;
  undefined8 *in_r12;
  undefined8 *extraout_r12;
  undefined8 *extraout_r12_00;
  undefined8 *extraout_r12_01;
  undefined8 *extraout_r12_02;
  undefined8 *puVar2;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = in_r12;
  iVar1 = unaff_r11;
  if (!(bool)in_ZR && in_NG == in_OV) {
    iVar1 = unaff_r11 + 0x2e8;
    coprocessor_load(0xc,in_cr5,unaff_r11);
    coprocessor_storelong(0xd,in_cr12,in_r12);
    coprocessor_storelong(0xd,in_cr13,in_r12);
    puVar2 = in_r12 + 0x66;
    coprocessor_load(0xc,in_cr12,in_r12);
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8ef43a6;
    uVar3 = func_0x081e36da();
    param_4 = extraout_r3;
    puVar2 = extraout_r12;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8ef43aa;
    uVar3 = func_0x07de329a();
    param_4 = extraout_r3_00;
    puVar2 = extraout_r12_00;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x8ef43ae;
    uVar3 = func_0x07e2751e();
    param_4 = extraout_r3_01;
    puVar2 = extraout_r12_01;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    iVar1 = iVar1 + 0x2b4;
    coprocessor_storelong(0xb,in_cr14,iVar1);
    coprocessor_loadlong(7,in_cr14,unaff_r7);
    coprocessor_function(0xc,8,7,in_cr12,in_cr12,in_cr13);
    unaff_lr = 0x8ef43be;
    uVar3 = func_0x07297b32();
    param_4 = extraout_r3_02;
    puVar2 = extraout_r12_02;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(char *)(iVar1 + 0xdcc) = (char)iVar1;
  }
  if (in_NG == in_OV) {
    if ((bool)in_ZR || in_NG != in_OV) {
      *puVar2 = uVar3;
      *(undefined4 *)(puVar2 + 1) = param_4;
      *(undefined4 *)((int)puVar2 + 0xc) = unaff_r4;
      *(undefined4 *)(puVar2 + 2) = unaff_r5;
      *(undefined4 *)((int)puVar2 + 0x14) = unaff_r7;
      *(int *)(puVar2 + 3) = unaff_r8;
      *(undefined4 *)((int)puVar2 + 0x1c) = unaff_r9;
      *(int *)(puVar2 + 4) = iVar1;
      *(undefined8 **)((int)puVar2 + 0x24) = puVar2;
      *(BADSPACEBASE **)(puVar2 + 5) = register0x00000054;
      *(undefined4 *)((int)puVar2 + 0x2c) = 0x8ef43ce;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      coprocessor_function(0,0xd,4,in_cr0,in_cr14,in_cr14);
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      coprocessor_storelong(10,in_cr0,&stack0x000003f8);
    }
    coprocessor_function(0xe,0xd,7,in_cr1,in_cr14,in_cr10);
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_loadlong(0xe,in_cr3,unaff_lr);
      coprocessor_loadlong(0xe,in_cr7,unaff_r8 + 0x370);
    }
    else {
      coprocessor_loadlong(0xc,in_cr7,unaff_r8);
    }
    if (in_NG == in_OV) {
      func_0x07993216();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

