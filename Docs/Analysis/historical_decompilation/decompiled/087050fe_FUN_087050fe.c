
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_087050fe(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined1 in_q8 [16];
  
  if (in_NG == in_OV) {
    param_1 = (int)sRam087050fa;
  }
  else {
    *param_2 = unaff_r11;
    param_2 = (undefined4 *)((int)param_2 + ((uint)param_2 >> 0xb));
  }
  if (in_ZR) {
    unaff_r7 = (int)*(short *)(param_1 + 0xf0);
    param_1 = (int)*(short *)(*(short *)(param_1 + 0x100) + 0x10);
  }
  VectorShiftRightAccumulate(in_q8,in_q8,0x40);
  if (in_ZR || in_NG != in_OV) {
    if (in_NG == in_OV) {
      software_interrupt(0xf310cc);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iRam0870511e = param_1;
  puRam08705122 = param_2;
  uRam08705126 = param_3;
  uRam0870512a = param_4;
  uRam0870512e = unaff_r5;
  iRam08705132 = unaff_r7;
  s_rDrErFrG_08705133._3_4_ = unaff_r8;
  ram0x0870513a = unaff_r9;
  uRam0870513e = in_r12;
  uRam08705142 = unaff_lr;
  uRam08705146 = 0x870511e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

