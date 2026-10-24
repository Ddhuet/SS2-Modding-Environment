
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08172086) */

void FUN_08172066(int param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_r11;
  int in_r12;
  undefined1 *unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr8;
  
  if (in_NG == in_OV) {
    unaff_r11 = coprocessor_movefromRt(5,5,5,in_cr1,in_cr8);
  }
  if (in_CY && !in_ZR) {
    software_interrupt(0x9ba5aa);
    software_interrupt(0x858185);
  }
  if (in_NG == in_OV) {
    in_OV = SCARRY4(in_r12,0x97000);
    in_NG = in_r12 + 0x97000 < 0;
    in_ZR = in_r12 == -0x97000;
  }
  if (in_ZR || in_NG != in_OV) {
    *unaff_lr = (char)unaff_r11;
  }
  if (in_NG == in_OV) {
    if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = param_1;
    if (in_NG != in_OV) {
      iVar1 = param_1 + -0x260;
      coprocessor_loadlong(6,in_cr4,param_1);
    }
    if ((bool)in_NG) {
      *(undefined4 *)(iVar1 + param_2 * -0x1000000) = unaff_r11;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

