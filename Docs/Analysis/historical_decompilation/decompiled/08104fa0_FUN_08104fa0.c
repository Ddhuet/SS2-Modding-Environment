
/* WARNING: Control flow encountered bad instruction data */

void FUN_08104fa0(void)

{
  undefined4 *extraout_r3;
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte *unaff_r5;
  uint unaff_r7;
  undefined4 unaff_r11;
  int extraout_r12;
  int iVar3;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 uVar4;
  
  uVar4 = func_0x06bf2718();
  puVar1 = extraout_r3;
  if ((bool)in_NG) {
    puVar1 = (undefined4 *)(uint)*unaff_r5;
  }
  iVar3 = extraout_r12;
  if ((bool)in_ZR || in_NG != in_OV) {
    iVar3 = *(int *)(unaff_r7 + 0x50a);
  }
  if (!(bool)in_ZR) {
    *(undefined1 *)uVar4 = (char)((ulonglong)uVar4 >> 0x20);
  }
  if (in_NG != in_OV) {
    *(char *)(iVar3 + (unaff_r7 >> 0xb | unaff_r7 << 0x15)) = (char)uVar4;
  }
  if ((bool)in_OV) {
    coprocessor_function(0xd,3,6,in_cr14,in_cr15,in_cr7);
  }
  if (in_NG != in_OV) {
    return;
  }
  if ((bool)in_CY) {
    coprocessor_function(0xe,2,0,in_cr2,in_cr8,in_cr6);
  }
  if (in_NG == in_OV) {
    coprocessor_loadlong(0xe,in_cr0,unaff_r11);
  }
  puVar2 = puVar1;
  if (!(bool)in_CY) {
    puVar2 = (undefined4 *)((int)puVar1 + -0x2de);
    *puVar1 = (int)((ulonglong)uVar4 >> 0x20);
  }
  software_interrupt(0xdcd40d);
                    /* WARNING: Could not recover jumptable at 0x08104fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((bool)in_CY) {
    (*(code *)*puVar2)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

