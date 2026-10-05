
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802e310) */

void FUN_0802e2f8(uint param_1)

{
  uint uVar1;
  undefined4 extraout_r2;
  undefined4 *unaff_r4;
  uint unaff_r5;
  uint unaff_r8;
  undefined4 unaff_r10;
  uint unaff_r11;
  undefined4 extraout_r12;
  undefined1 in_NG;
  bool in_CY;
  bool bVar2;
  
  bVar2 = false;
  if (in_CY) {
    uVar1 = unaff_r5 & 0xff;
    bVar2 = uVar1 == 0 || uVar1 != 0 && (bool)((byte)(param_1 >> uVar1 - 1) & 1);
    unaff_r11 = unaff_r8 ^ param_1 >> uVar1;
    in_NG = (int)unaff_r11 < 0;
  }
  if (bVar2) {
    in_NG = (int)&stack0x3fffffe5 < 0;
  }
  func_0x069ec2f2();
  if ((bool)in_NG) {
    *unaff_r4 = extraout_r2;
    unaff_r4[1] = unaff_r10;
    unaff_r4[2] = unaff_r11;
    unaff_r4[3] = extraout_r12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

