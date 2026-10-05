
/* WARNING: Control flow encountered bad instruction data */

void FUN_0822284a(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  int *unaff_r5;
  uint unaff_r6;
  int unaff_r8;
  uint unaff_r9;
  undefined4 unaff_r10;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  lVar1 = CONCAT44(param_4,unaff_r9);
  iVar2 = param_1;
  if (in_NG == in_OV) {
    iVar2 = param_1 + 0x2e4;
    coprocessor_load(5,in_cr11,param_1);
  }
  if (!in_CY || in_ZR) {
    coprocessor_store(4,in_cr10,iVar2);
    lVar1 = (ulonglong)unaff_r6 * (ulonglong)unaff_r9;
    in_NG = lVar1 < 0;
    in_ZR = lVar1 == 0;
  }
  iVar2 = (int)lVar1;
  if (in_CY && !in_ZR) {
    *(int *)(iVar2 + (int)&stack0x00000000 * 0x800000) = unaff_r8;
    unaff_r8 = param_3 + 0x20000008;
    *unaff_r5 = unaff_r8;
    coprocessor_store(9,in_cr8,unaff_r10);
  }
  else {
    iVar2 = *(int *)((ulonglong)lVar1 >> 0x20);
  }
  if (in_NG == in_OV) {
    in_OV = SCARRY4(unaff_lr,0x26400);
    iVar2 = unaff_lr + 0x26400;
    in_NG = iVar2 < 0;
    in_ZR = iVar2 == 0;
  }
  if (in_NG == in_OV) {
    software_interrupt(0xaca8a5);
  }
  else {
    coprocessor_movefromRt(6,5,5,in_cr10,in_cr3);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(4,in_cr13,unaff_r8);
  }
  else {
    coprocessor_storelong(5,in_cr12,iVar2 + 0x304);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

