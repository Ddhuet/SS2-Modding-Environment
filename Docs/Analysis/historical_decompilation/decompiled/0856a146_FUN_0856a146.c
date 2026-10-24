
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0856a15a) */

undefined4 FUN_0856a146(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  undefined4 *unaff_lr;
  undefined1 in_NG;
  bool in_ZR;
  undefined1 in_CY;
  
  if ((bool)in_CY && !in_ZR) {
    *unaff_lr = param_4;
    unaff_lr[1] = unaff_r4;
    unaff_lr[2] = unaff_r6;
    unaff_lr[3] = unaff_r8;
    unaff_lr[4] = unaff_r10;
    unaff_lr[5] = in_r12;
    unaff_lr[6] = register0x00000054;
    unaff_lr[7] = 0x856a14e;
  }
  if ((bool)in_CY) {
    func_0x084bf69a();
    param_2 = extraout_r1;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_CY) {
    *in_r12 = param_2;
    in_r12[1] = unaff_r7;
    in_r12[2] = unaff_r11;
    in_r12[3] = in_r12;
    in_r12[4] = register0x00000054;
    in_r12 = in_r12 + 5;
  }
  if (!(bool)in_NG) {
    return *(undefined4 *)((int)in_r12 + 0x447);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

