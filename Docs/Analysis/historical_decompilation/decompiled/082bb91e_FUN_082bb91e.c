
/* WARNING: Control flow encountered bad instruction data */

void FUN_082bb91e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_r5;
  int unaff_r6;
  undefined4 unaff_r10;
  int iVar1;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_movefromRt(4,5,5,in_cr1,in_cr6);
    *(undefined4 *)(unaff_r6 + 0x7aa) = unaff_r10;
    *unaff_r5 = unaff_r10;
  }
  else {
    in_OV = SCARRY4(param_1,0xa800) != SCARRY4(param_1 + 0xa800,(uint)in_CY);
    iVar1 = param_1 + 0xa800 + (uint)in_CY;
    in_NG = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xc,in_cr11,param_4);
  }
  coprocessor_moveto(0,7,6,unaff_lr,in_cr7,in_cr5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

