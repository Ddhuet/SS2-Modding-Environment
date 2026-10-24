
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x073e5ce4) */
/* WARNING: Removing unreachable block (ram,0x08b2a594) */

void FUN_08b2a4fc(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int unaff_r11;
  int iVar5;
  int iVar6;
  int in_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined8 uVar7;
  
  coprocessor_storelong2(5,in_cr11,unaff_r11);
  iVar5 = unaff_r11 + 0x1b0;
  coprocessor_load2(6,in_cr5,iVar5);
  if ((bool)in_ZR) {
    puVar1 = (undefined4 *)((uint)param_1 & 0x8b2a51c);
    puVar2 = (uint *)((int)puVar1 - in_r12);
    *puVar1 = puVar2;
    puVar1[1] = param_2;
    param_1 = puVar2 + -0x22ca949;
    *puVar2 = (uint)param_1;
    puVar2[1] = param_2;
  }
  if ((bool)in_OV) {
    unaff_lr = 0x8b2a548;
    uVar7 = func_0x0a62654c();
    param_2 = (uint)((ulonglong)uVar7 >> 0x20);
    param_1 = (uint *)uVar7;
  }
  uVar7 = CONCAT44(param_2,param_1);
  if (!(bool)in_OV) {
    unaff_lr = 0x8b2a54c;
    uVar7 = func_0x07a5e150();
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8b2a550;
    uVar7 = func_0x07a19914();
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8b2a554;
    uVar7 = func_0x07909d18();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_load(0xf,in_cr13,iVar5);
  }
  if (!(bool)in_CY) {
    coprocessor_loadlong(0xf,in_cr15,unaff_lr);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    uVar7 = func_0x07dffb08();
  }
  if (in_NG != in_OV) {
    iVar5 = unaff_r11 + 0x20c;
    coprocessor_load(5,in_cr11,iVar5);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar7 = func_0x07e59460();
  }
  coprocessor_loadlong2(0xd,in_cr13,&stack0x00000370);
  if (in_NG != in_OV) {
    uVar7 = func_0x075d2e70();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    uVar7 = func_0x081cf028();
  }
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  iVar6 = iVar5;
  if (!(bool)in_CY) {
    iVar6 = iVar5 + 0x88;
    coprocessor_load(9,in_cr13,iVar5);
  }
  if (!(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar3 = (int *)((uint)uVar7 & 0x8b2a58c);
  puVar1 = (undefined4 *)((int)piVar3 - iVar6);
  *piVar3 = (int)puVar1;
  piVar3[1] = iVar4;
  *puVar1 = puVar1 + -0x22ca965;
  puVar1[1] = iVar4;
                    /* WARNING: Could not recover jumptable at 0x08b2a590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(puVar1 + -0x22ca965))();
  return;
}

