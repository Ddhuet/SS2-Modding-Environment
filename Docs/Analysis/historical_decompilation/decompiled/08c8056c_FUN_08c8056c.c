
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c8056c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar1;
  uint unaff_r9;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    software_interrupt(0xd95594);
  }
  if (!(bool)in_NG) {
    unaff_r9 = (uint)*(byte *)(unaff_r9 - 0x400);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar2 = func_0x07980588();
    param_3 = extraout_r2;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    param_3 = (undefined4 *)(uint)*(byte *)(unaff_r9 - 0x323);
  }
  if (in_NG != in_OV) {
    uVar2 = func_0x071c921c();
    param_3 = extraout_r2_00;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    software_interrupt(0xb52322);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    software_interrupt(0xd62222);
  }
  if ((bool)in_NG) {
    uVar1 = *(undefined4 *)((int)param_3 + 0x223);
  }
  else {
    uVar1 = *param_3;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x09d492f8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),uVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

