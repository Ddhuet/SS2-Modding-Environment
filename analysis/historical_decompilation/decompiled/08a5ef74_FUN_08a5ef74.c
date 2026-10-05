
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a5ef74(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_r8;
  int unaff_r11;
  int extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined8 uVar4;
  
  if (in_NG != in_OV) {
    unaff_r11 = unaff_r11 + 0x2dc;
    coprocessor_load(5,in_cr11,unaff_r11);
  }
  uVar4 = func_0x07d8de6e();
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  piVar1 = (int *)uVar4;
  if ((bool)in_CY && !(bool)in_ZR) {
    software_interrupt(0xdddddc);
  }
  coprocessor_storelong2(0xf,in_cr11,unaff_r11 + 0x3f4);
  if (!(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar2 = (int *)((int)piVar1 - extraout_r12);
  *piVar1 = (int)piVar2;
  piVar1[1] = iVar3;
  *piVar2 = (int)(piVar2 + -0x2297be4);
  piVar2[1] = iVar3;
                    /* WARNING: Could not recover jumptable at 0x08a5ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_r8 * 0x8a5ef94 & 0x7cc00000))();
  return;
}

