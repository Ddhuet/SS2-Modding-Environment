
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x081de4f6) */

void FUN_081de4de(undefined4 param_1,int param_2)

{
  int extraout_r1;
  int extraout_r3;
  uint unaff_r4;
  int unaff_r9;
  uint uVar1;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined1 uVar2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  if (!in_CY || in_ZR) {
    software_interrupt(0xa4b5bf);
  }
  if (in_ZR) {
    return;
  }
  if (!in_OV) {
    *(char *)(unaff_r9 + -0xc31) = (char)unaff_r4;
  }
  uVar1 = *(uint *)(param_2 + -8);
  if ((bool)in_NG == in_OV) {
    coprocessor_function(5,0xe,0,in_cr15,in_cr4,in_cr12);
  }
  uVar2 = 0;
  if (!in_OV) {
    unaff_r4 = 0x270000 - (param_2 + -0x1c);
  }
  coprocessor_function(2,3,3,in_cr5,in_cr8,in_cr9);
                    /* WARNING: Could not recover jumptable at 0x081de502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((bool)in_NG != in_OV) {
    (*(code *)(0xd000 - (*(int *)(param_2 + -0x14) + (uint)!in_CY)))();
    return;
  }
  if (!in_CY) {
    coprocessor_function(8,10,6,in_cr11,in_cr10,in_cr3);
  }
  func_0x0764af84(*(undefined4 *)(param_2 + -0x18));
  if (!in_OV) {
    unaff_r4 = 0x27000000 - extraout_r1;
  }
  if (in_CY) {
    uVar1 = uVar1 ^ (unaff_r4 >> 4 | unaff_r4 << 0x1c);
    in_NG = (int)uVar1 < 0;
    uVar2 = uVar1 == 0;
  }
  if ((bool)uVar2 || (bool)in_NG != in_OV) {
    UnsignedSaturate(extraout_r3 << 0x1c,10);
    UnsignedDoesSaturate(extraout_r3 << 0x1c,10);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

