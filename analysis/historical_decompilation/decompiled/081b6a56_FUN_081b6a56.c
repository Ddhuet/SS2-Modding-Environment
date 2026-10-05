
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x081b6a76) */
/* WARNING: Removing unreachable block (ram,0x081b6a6a) */
/* WARNING: Removing unreachable block (ram,0x081b6a72) */

undefined8 FUN_081b6a56(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined1 *unaff_lr;
  undefined1 *puVar1;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined8 uVar2;
  
  coprocessor_load2(5,in_cr11,unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x081b6a5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_CY) {
    uVar2 = (*(code *)(0x280000 - unaff_r8))();
    return uVar2;
  }
  if (in_ZR) {
    return *(undefined8 *)(unaff_r8 + 4);
  }
  puVar1 = unaff_lr;
  if (in_NG == in_OV) {
    puVar1 = unaff_lr + (unaff_r11 >> 7);
    *unaff_lr = (char)unaff_r11;
  }
  *param_3 = puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

