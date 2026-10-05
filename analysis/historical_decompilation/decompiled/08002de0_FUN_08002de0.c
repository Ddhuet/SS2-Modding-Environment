
/* WARNING: Control flow encountered bad instruction data */

void FUN_08002de0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  undefined4 unaff_pc;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr6;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_NG) {
    *unaff_r8 = 0x8002de8;
    unaff_r8[-1] = unaff_lr;
    unaff_r8[-2] = register0x00000054;
    unaff_r8[-3] = in_r12;
    unaff_r8[-4] = unaff_r11;
    unaff_r8[-5] = unaff_r10;
    unaff_r8[-6] = unaff_r9;
    unaff_r8[-7] = unaff_r6;
    unaff_r8[-8] = unaff_r4;
    unaff_r8[-9] = param_3;
    unaff_r8[-10] = param_1;
  }
  if (in_CY) {
    unaff_r8 = (undefined4 *)((uint)param_1 ^ param_2 << 0x10);
    *param_1 = unaff_lr;
    param_1[-1] = param_4;
  }
  coprocessor_moveto(0,2,2,unaff_pc,in_cr12,in_cr6);
  if (in_CY) {
    software_interrupt(0x39f96);
  }
  if (!in_ZR) {
    coprocessor_load(9,in_cr13,unaff_r8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

