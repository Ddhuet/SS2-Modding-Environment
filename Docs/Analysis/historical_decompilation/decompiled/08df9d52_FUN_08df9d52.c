
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df9d52(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r10;
  int iVar2;
  undefined4 *in_r12;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  undefined1 in_OV;
  bool bVar3;
  undefined4 in_cr10;
  
  bVar3 = false;
  if (in_ZR) {
    uVar1 = unaff_r5 >> (unaff_r5 & 0x1f) | unaff_r5 << 0x20 - (unaff_r5 & 0x1f);
    in_OV = SCARRY4(unaff_r5,uVar1) != SCARRY4(unaff_r5 + uVar1,(uint)in_CY);
    iVar2 = unaff_r5 + uVar1 + (uint)in_CY;
    in_NG = iVar2 < 0;
    bVar3 = iVar2 == 0;
  }
  if (bVar3 || in_NG != in_OV) {
    param_4 = param_4 + 0x5b4;
  }
  if (in_NG == in_OV) {
    unaff_r10 = *(undefined4 **)(param_2 + 0x5b2);
    software_interrupt(0xa5b000);
    coprocessor_storelong(0xe,in_cr10,unaff_r5 + 0x294);
  }
  if (bVar3 || in_NG != in_OV) {
    in_r12 = (undefined4 *)((int)in_r12 + 0xc5);
    *in_r12 = param_1;
  }
  if ((bool)in_OV) {
    unaff_r10 = (undefined4 *)((int)unaff_r10 + 0x5ab);
    *unaff_r10 = unaff_r6;
  }
  if (in_NG == in_OV) {
    *param_1 = 0x8df9d76;
    param_1[-1] = in_r12;
    param_1[-2] = unaff_r10;
    param_1[-3] = unaff_r8;
    param_1[-4] = unaff_r7;
    param_1[-5] = unaff_r5;
    param_1[-6] = param_4;
    param_1[-7] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

