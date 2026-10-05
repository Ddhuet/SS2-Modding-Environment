
/* WARNING: Control flow encountered bad instruction data */

void FUN_08188774(uint param_1,undefined1 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *unaff_r5;
  int *unaff_r7;
  undefined4 *unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  uint in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar2;
  bool bVar3;
  undefined4 in_cr6;
  undefined4 in_cr15;
  
  *(char *)((int)unaff_r9 + (in_r12 >> 0xb)) = (char)unaff_r11;
  if (in_NG) {
    unaff_r9 = (undefined4 *)((int)unaff_r9 + -0x302);
    *unaff_r9 = param_2;
  }
  if (!(bool)in_OV) {
    coprocessor_storelong(4,in_cr6,0x8188784);
    unaff_r7 = (int *)coprocessor_movefromRt(0xe,3,3,in_cr15,in_cr15);
  }
  if (!in_CY) {
    software_interrupt(0x4c5b70);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    software_interrupt(0xf30b29);
  }
  if (in_NG == (bool)in_OV) {
    unaff_r7 = unaff_r7 + 0x32;
    *unaff_r7 = unaff_r11;
  }
  else {
    unaff_r5 = (undefined4 *)((int)unaff_r5 + 0xb97);
    *unaff_r5 = unaff_r9;
  }
  bVar2 = false;
  bVar3 = in_CY;
  if (in_ZR) {
    bVar3 = param_1 < 0xc40000 || 0xc40000 - param_1 < (uint)in_CY;
    in_OV = SBORROW4(0xc40000,param_1) != SBORROW4(0xc40000 - param_1,(uint)!in_CY);
    in_NG = (int)(-(param_1 + !in_CY) + 0xc40000) < 0;
    bVar2 = -(param_1 + !in_CY) == -0xc40000;
  }
  if (in_NG) {
    iVar1 = *unaff_r7;
  }
  else {
    iVar1 = (int)param_2 - (unaff_r11 >> 10);
    *param_2 = (char)unaff_r5;
  }
  if (bVar2) {
    param_4 = unaff_r10 ^ 0x11000;
  }
  if (in_NG == (bool)in_OV) {
    *(char *)(param_1 + 0x5d7) = (char)in_r12;
  }
  if (!bVar3 || bVar2) {
    func_0x068ec1dc(param_1,iVar1,param_3,param_4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

