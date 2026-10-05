
/* WARNING: Control flow encountered bad instruction data */

void FUN_08818a12(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 *unaff_r4;
  undefined4 *puVar2;
  int unaff_r6;
  int unaff_r7;
  undefined1 *unaff_r9;
  undefined1 *unaff_r11;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  int iVar3;
  char in_NG;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr11;
  
  if (!(bool)in_NG) {
    func_0x07706106();
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    func_0x0a30790a();
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_OV) {
    func_0x07b0b7ce();
    in_r12 = extraout_r12_01;
  }
  iVar3 = in_r12;
  if (in_NG != in_OV) {
    iVar3 = in_r12 + -0x2ec;
    coprocessor_storelong(0xb,in_cr11,in_r12);
  }
  if ((bool)in_OV) {
    coprocessor_storelong(0xc,in_cr6,&stack0x00000000);
  }
  if ((bool)in_NG) {
    *unaff_r9 = (char)iVar3;
    *unaff_r11 = (char)unaff_r4;
    uVar1 = *(undefined4 *)(unaff_r11 + -0x440);
    unaff_r6 = *(int *)(unaff_r11 + -0x43c);
  }
  else {
    func_0x0a2e9b4e();
    uVar1 = extraout_r2;
  }
  if ((bool)in_OV) {
    uVar1 = *(undefined4 *)(unaff_r6 + 4);
    unaff_r4 = *(undefined4 **)(unaff_r6 + 8);
    unaff_r7 = *(int *)(unaff_r6 + 0x10);
    unaff_r6 = unaff_r6 + 0x24;
  }
  if ((bool)in_CY) {
    puVar2 = (undefined4 *)((int)unaff_r4 + -0x222);
    *unaff_r4 = uVar1;
    unaff_r4 = unaff_r4 + -0x111;
    *puVar2 = uVar1;
  }
  if ((bool)in_NG) {
    *(char *)unaff_r4 = (char)uVar1;
    *(char *)((int)unaff_r4 + -0x242) = (char)(char *)((int)unaff_r4 + -0x242) + -0x42;
  }
  else {
    *(int *)(unaff_r6 + 0x575) = unaff_r7 + -0x434;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

