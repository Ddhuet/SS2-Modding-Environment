
/* WARNING: Control flow encountered bad instruction data */

void FUN_0852c516(uint *param_1,undefined4 *param_2,uint param_3,char *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 in_d0;
  undefined8 in_d17;
  
  puVar4 = param_2;
  if (in_NG != in_OV) {
    puVar4 = param_2 + unaff_r6 * -0x100;
    *param_2 = unaff_r11;
  }
  if (!in_CY) {
    software_interrupt(0xf0b701);
  }
  if (in_ZR) {
    param_3 = (uint)param_4 ^ 0x18000000;
  }
  if (in_CY) {
    param_3 = 0;
  }
  else {
    *(uint *)((int)param_1 * 2) = param_3;
  }
  puVar3 = param_1;
  if (!in_NG) {
    puVar3 = (uint *)((int)param_1 + -0x853);
    *param_1 = (uint)puVar3;
  }
  if (in_ZR) {
    *(undefined4 *)((int)puVar3 * -0x3ff) = unaff_r5;
    puVar3 = (uint *)(int)*param_4;
  }
  if (in_ZR || in_NG != in_OV) {
    *(BADSPACEBASE **)((int)puVar4 + -0x401) = register0x00000054;
    *(BADSPACEBASE **)((int)puVar4 * -0xfff) = register0x00000054;
  }
                    /* WARNING: Could not recover jumptable at 0x0852c53e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_OV) {
    if (in_CY) {
      *puVar3 = param_3;
    }
    else {
      software_interrupt(0xa02500);
    }
    VectorHalvingAdd(in_d17,in_d0,1,0);
    puVar1 = (undefined1 *)0x378;
    puVar2 = (undefined1 *)0x388;
    lVar5 = 8;
    while( true ) {
      *(undefined1 *)puVar4 = *puVar1;
      *(undefined1 *)((int)puVar4 + 1) = *puVar2;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
      lVar5 = lVar5 + -1;
      if (lVar5 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined1 *)0x380;
    puVar2 = (undefined1 *)0x390;
    lVar5 = 8;
    while( true ) {
      *(undefined1 *)puVar4 = *puVar1;
      *(undefined1 *)((int)puVar4 + 1) = *puVar2;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
      lVar5 = lVar5 + -1;
      if (lVar5 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)((int)puVar4 >> 1 ^ 0x852c546))();
  return;
}

