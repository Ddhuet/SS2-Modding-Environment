
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e39bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  int unaff_lr;
  undefined1 in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr15;
  
  if (in_ZR) {
    uRam082e39ec = 0x82e39c4;
    in_NG = (int)(-0x3ffffff1 - (unaff_lr + (uint)!in_CY)) < 0;
    uRam082e39c4 = param_2;
    uRam082e39c8 = param_3;
    uRam082e39cc = param_4;
    iRam082e39d0 = unaff_r4;
    uRam082e39d4 = unaff_r5;
    uRam082e39d8 = unaff_r7;
    uRam082e39dc = unaff_r8;
    uRam082e39e0 = unaff_r10;
    uRam082e39e4 = in_r12;
    puRam082e39e8 = (undefined1 *)register0x00000054;
  }
  if ((bool)in_NG) {
    software_interrupt(0x4205fe);
  }
  coprocessor_store2(5,in_cr15,unaff_r4 + -0x98);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

