
/* WARNING: Control flow encountered bad instruction data */

void FUN_08649da4(int param_1)

{
  int iVar1;
  int unaff_r7;
  uint unaff_r8;
  int *unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  
  if (in_NG != in_OV) {
    param_1 = param_1 * -0x7ff;
  }
  if (in_CY && !in_ZR) {
    iVar1 = param_1 << (unaff_r8 & 0xff);
    in_OV = SCARRY4(unaff_r7,iVar1) != SCARRY4(unaff_r7 + iVar1,(uint)in_CY);
    in_NG = (int)(unaff_r7 + iVar1 + (uint)in_CY) < 0;
  }
  if ((bool)in_OV) {
    param_1 = param_1 + 0x40;
    coprocessor_loadlong(0xb,in_cr0,param_1);
  }
  if (!(bool)in_NG) {
    *unaff_r10 = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

