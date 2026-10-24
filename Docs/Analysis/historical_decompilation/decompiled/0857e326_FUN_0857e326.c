
/* WARNING: Control flow encountered bad instruction data */

undefined4 * FUN_0857e326(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_r4;
  int unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 uVar2;
  uint unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar3;
  undefined4 in_cr0;
  undefined4 in_cr5;
  undefined4 in_cr6;
  
  if (in_NG == in_OV) {
    uVar2 = coprocessor_movefromRt(0,5,5,in_cr0,in_cr0);
    bVar3 = in_CY;
  }
  else {
    param_1 = param_1 + 0x16e;
    uVar2 = *param_1;
    uVar1 = unaff_lr >> 0x1d;
    bVar3 = CARRY4((uint)param_1,uVar1) || CARRY4((int)param_1 + uVar1,(uint)in_CY);
    in_OV = SCARRY4((int)param_1,uVar1) != SCARRY4((int)param_1 + uVar1,(uint)in_CY);
    unaff_r10 = (int)param_1 + in_CY + uVar1;
    in_NG = unaff_r10 < 0;
    in_ZR = unaff_r10 == 0;
  }
  if (in_NG != in_OV) {
    if (in_NG == in_OV) {
      *(undefined4 **)(unaff_r9 + 4) = param_1;
      *(undefined4 *)(unaff_r9 + 8) = param_4;
      *(int *)(unaff_r9 + 0xc) = unaff_r5;
      *(undefined4 *)(unaff_r9 + 0x10) = unaff_r7;
      *(undefined4 *)(unaff_r9 + 0x14) = unaff_r8;
      *(undefined4 *)(unaff_r9 + 0x18) = uVar2;
      *(BADSPACEBASE **)(unaff_r9 + 0x1c) = register0x00000054;
      *(undefined4 *)(unaff_r9 + 0x20) = 0x857e33e;
      *(int *)(unaff_r5 + 0x4a4) = unaff_r10;
      *(int *)(unaff_r5 + 0xa49) = unaff_r10;
    }
    if ((bool)bVar3 && !(bool)in_ZR) {
      *unaff_r4 = unaff_r10;
      *(undefined4 *)((int)unaff_r4 + 0x5a5) = unaff_r8;
    }
    if (!(bool)in_NG) {
      coprocessor_storelong(2,in_cr6,param_3 + -0x188);
    }
    if (in_NG != in_OV) {
      coprocessor_storelong(0xd,in_cr5,param_2 + 0x174);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1 + 6;
}

