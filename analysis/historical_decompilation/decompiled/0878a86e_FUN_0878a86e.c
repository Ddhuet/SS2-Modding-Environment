
/* WARNING: Control flow encountered bad instruction data */

void FUN_0878a86e(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint unaff_r9;
  int iVar1;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool bVar2;
  char in_OV;
  undefined4 in_cr0;
  
  if (in_NG != in_OV) {
    return;
  }
  bVar2 = in_CY;
  if (!in_CY || in_ZR) {
    bVar2 = CARRY4(unaff_r9,(uint)in_CY);
    in_OV = SCARRY4(unaff_r9,(uint)in_CY);
    in_NG = (int)(unaff_r9 + in_CY) < 0;
    in_ZR = unaff_r9 + in_CY == 0;
  }
  if (!bVar2 || in_ZR) {
    in_OV = SCARRY4(unaff_r11,-0x5ffffff5) != SCARRY4(unaff_r11 + -0x5ffffff5,(uint)bVar2);
    iVar1 = unaff_r11 + -0x5ffffff5 + (uint)bVar2;
    in_NG = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  if (in_NG != in_OV) {
    coprocessor_load(0,in_cr0,param_3 + 0x2f0);
    software_interrupt(0x92be82);
  }
  if (in_ZR || in_NG != in_OV) {
    if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!in_ZR && in_NG == in_OV) {
      software_interrupt(0x7200ce);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

