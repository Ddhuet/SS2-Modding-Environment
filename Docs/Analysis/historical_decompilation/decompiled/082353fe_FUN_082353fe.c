
/* WARNING: Control flow encountered bad instruction data */

void FUN_082353fe(void)

{
  int iVar1;
  int extraout_r1;
  undefined4 *unaff_r4;
  undefined4 *puVar2;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int *unaff_r8;
  int unaff_r9;
  undefined4 unaff_r11;
  int extraout_r12;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr7;
  undefined8 uVar3;
  
  puVar2 = unaff_r4;
  if (!in_CY || (bool)in_ZR) {
    puVar2 = (undefined4 *)((int)unaff_r4 + 0x5b5);
    *unaff_r4 = unaff_r11;
  }
  uVar3 = func_0x085b9f52();
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  *unaff_r8 = (int)puVar2;
  unaff_r8[1] = unaff_r5;
  unaff_r8[2] = unaff_r6;
  unaff_r8[3] = unaff_r7;
  unaff_r8[4] = unaff_r9;
  unaff_r8[5] = extraout_r12;
  unaff_r8[6] = 0x8235406;
  unaff_r8[7] = 0x823540e;
  if (!in_CY) {
    iVar1 = *(int *)uVar3;
  }
  if ((bool)in_NG) {
    func_0x09d4c5a6();
    iVar1 = extraout_r1;
  }
  if (in_NG == in_OV) {
    if (!(bool)in_ZR && in_NG == in_OV) {
      software_interrupt(0xf1ef10);
    }
    if (!(bool)in_NG) {
      in_NG = iVar1 + -0xf8 < 0;
    }
    if ((bool)in_NG) {
      coprocessor_storelong(9,in_cr7,unaff_r7 + -0x1b8);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

