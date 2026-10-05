
/* WARNING: Control flow encountered bad instruction data */

void FUN_08699c08(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 unaff_r4;
  undefined4 uVar3;
  uint unaff_r5;
  int unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool bVar4;
  undefined4 in_cr5;
  undefined4 in_cr8;
  
  lVar2 = CONCAT44(unaff_r9,unaff_r4);
  if (!in_NG) {
    unaff_r11 = *(int *)(unaff_r11 + 0x520);
  }
  bVar4 = false;
  if (in_ZR) {
    lVar2 = (ulonglong)unaff_r5 * (ulonglong)unaff_r10;
    in_NG = lVar2 < 0;
    bVar4 = lVar2 == 0;
  }
  uVar3 = (undefined4)lVar2;
  uVar1 = (undefined1)((ulonglong)lVar2 >> 0x20);
  if (!in_CY || bVar4) {
    *(undefined1 *)(unaff_r5 - ((int)unaff_r5 >> 0x10)) = uVar1;
    *(undefined1 *)(unaff_r5 - 0x645) = uVar1;
  }
  if (in_NG) {
    uVar3 = *(undefined4 *)(param_3 + 0x593);
  }
  if (!in_CY || bVar4) {
    param_1 = param_2 * param_1 + param_1 + unaff_r5;
  }
  else {
    coprocessor_function(0xf,4,2,in_cr8,in_cr5,in_cr5);
  }
  if (in_NG) {
    *(undefined4 *)(param_1 + -0xd45) = unaff_r8;
    *(undefined4 *)(unaff_r11 + 0x58c) = uVar3;
  }
  if (in_CY && !bVar4) {
    *(undefined4 *)((int)((ulonglong)lVar2 >> 0x20) + unaff_r10 * 0x800) = uVar3;
  }
  if (in_NG) {
    *(undefined4 *)(unaff_r6 + -0xb80) = unaff_lr;
  }
  software_interrupt(0x905525);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

