
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a63faa) */

void FUN_08a63f56(uint param_1)

{
  int unaff_r11;
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar2;
  undefined4 in_cr2;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    param_1 = func_0x079513ba();
  }
  if (in_NG != in_OV) {
    param_1 = func_0x07852e4e();
  }
  iVar1 = unaff_r11;
  if ((bool)in_ZR || in_NG != in_OV) {
    iVar1 = unaff_r11 + 0x370;
    coprocessor_load(0xd,in_cr13,unaff_r11);
  }
  if (in_NG != in_OV) {
    param_1 = func_0x0784ca1e();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(3,in_cr2,iVar1);
    iVar1 = iVar1 + 0x2f0;
  }
  if (in_NG != in_OV) {
    coprocessor_load(0xe,in_cr13,iVar1 + 0x2c8);
    param_1 = func_0x07da0c2a();
  }
  if (in_NG != in_OV) {
    param_1 = func_0x081a7eae();
  }
  if (in_NG != in_OV) {
    param_1 = func_0x078e7eb6();
  }
  bVar2 = false;
  if ((bool)in_ZR) {
    software_interrupt(0x32f0fc);
    software_interrupt(0x330000);
    param_1 = param_1 - (int)(&stack0x00000000 + !(bool)in_CY);
    bVar2 = param_1 == 0;
  }
  if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x08a63fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(param_1 & 0x8a63f86))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

