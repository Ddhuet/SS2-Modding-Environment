
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08b2a594) */

void FUN_08b2a568(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_r11;
  int iVar4;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    unaff_r11 = unaff_r11 + 0x5c;
    coprocessor_load(5,in_cr11,unaff_r11);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar5 = func_0x07e59460();
  }
  coprocessor_loadlong2(0xd,in_cr13,&stack0x00000370);
  if (in_NG != in_OV) {
    uVar5 = func_0x075d2e70();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    uVar5 = func_0x081cf028();
  }
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  iVar4 = unaff_r11;
  if (!(bool)in_CY) {
    iVar4 = unaff_r11 + 0x88;
    coprocessor_load(9,in_cr13,unaff_r11);
  }
  if ((bool)in_ZR) {
    piVar1 = (int *)((uint)uVar5 & 0x8b2a58c);
    puVar2 = (undefined4 *)((int)piVar1 - iVar4);
    *piVar1 = (int)puVar2;
    piVar1[1] = iVar3;
    *puVar2 = puVar2 + -0x22ca965;
    puVar2[1] = iVar3;
                    /* WARNING: Could not recover jumptable at 0x08b2a590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(puVar2 + -0x22ca965))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

