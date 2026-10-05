
/* WARNING: Control flow encountered bad instruction data */

void FUN_08779856(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int unaff_r7;
  int unaff_lr;
  int unaff_pc;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar2;
  
  if (in_NG != (bool)in_OV) {
    param_1 = param_1 - (param_1 >> 10);
  }
  if (!in_CY || in_ZR) {
    software_interrupt(0xdfd130);
  }
  bVar2 = false;
  if (in_NG) {
    iVar1 = param_1 << (param_4 & 0xff);
    in_OV = SCARRY4(unaff_r7,iVar1) != SCARRY4(unaff_r7 + iVar1,(uint)in_CY);
    iVar1 = unaff_r7 + iVar1 + (uint)in_CY;
    bVar2 = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  if (in_ZR) {
    unaff_pc = (int)*(short *)(param_1 + 0x77);
  }
  if (!in_ZR && bVar2 == (bool)in_OV) {
    *(int *)(unaff_lr + -0x7f7) = unaff_pc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

