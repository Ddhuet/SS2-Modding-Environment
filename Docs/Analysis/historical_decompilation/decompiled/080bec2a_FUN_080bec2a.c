
/* WARNING: Control flow encountered bad instruction data */

void FUN_080bec2a(void)

{
  undefined4 unaff_r7;
  int iVar1;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_NG == in_OV) {
    if (!in_ZR && in_NG == in_OV) {
      in_OV = SCARRY4(unaff_lr,0xba0) != SCARRY4(unaff_lr + 0xba0,(uint)in_CY);
      iVar1 = unaff_lr + 0xba0 + (uint)in_CY;
      in_NG = iVar1 < 0;
      in_ZR = iVar1 == 0;
    }
    if (in_ZR || in_NG != in_OV) {
      coprocessor_loadlong(5,in_cr13,unaff_r7);
    }
    else {
      coprocessor_function(8,0xc,6,in_cr12,in_cr11,in_cr5);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

