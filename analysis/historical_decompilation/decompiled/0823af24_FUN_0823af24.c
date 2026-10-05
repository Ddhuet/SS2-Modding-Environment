
/* WARNING: Control flow encountered bad instruction data */

void FUN_0823af24(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  undefined4 *unaff_r10;
  uint in_r12;
  uint unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar3;
  bool bVar4;
  undefined4 in_cr0;
  undefined4 in_cr15;
  
  if (in_NG == in_OV) {
    software_interrupt(0xa8b5d8);
  }
  if (!(bool)in_CY) {
    in_CY = unaff_lr < 0xc3000;
    in_OV = SBORROW4(0xc3000,unaff_lr) != SBORROW4(0xc3000 - unaff_lr,1);
    iVar2 = -(unaff_lr + 1);
    register0x00000054 = (BADSPACEBASE *)(iVar2 + 0xc3000);
    in_NG = iVar2 + 0xc3000 < 0;
    in_ZR = iVar2 == -0xc3000;
  }
  bVar3 = false;
  if ((bool)in_NG) {
    uVar1 = (int)in_r12 >> 0xc;
    in_CY = unaff_r9 <= uVar1;
    in_OV = SBORROW4(uVar1,unaff_r9);
    unaff_r7 = uVar1 - unaff_r9;
    bVar3 = unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *unaff_r10 = param_1;
    unaff_r10[1] = unaff_r8;
    unaff_r10[2] = unaff_r9;
    unaff_r10[3] = in_r12;
    unaff_r10[4] = unaff_lr;
    unaff_r10[5] = 0x823af38;
    unaff_r10 = unaff_r10 + 6;
  }
  if (!(bool)in_ZR) {
    bVar4 = false;
    if (!(bool)in_OV) {
      uVar1 = unaff_r9 >> ((uint)register0x00000054 & 0xff);
      in_CY = in_r12 <= uVar1;
      in_OV = SBORROW4(uVar1,in_r12);
      bVar3 = (int)(uVar1 - in_r12) < 0;
      bVar4 = uVar1 == in_r12;
    }
    if (!(bool)in_CY || bVar4) {
      coprocessor_storelong(7,in_cr15,param_3);
    }
    SignedSaturate((int)unaff_r10 << 0xf,0x1e);
    SignedDoesSaturate((int)unaff_r10 << 0xf,0x1e);
    if (!(bool)in_OV) {
      software_interrupt(0x6c451b);
    }
    if (bVar3 != (bool)in_OV) {
      *(char *)(unaff_r8 + (unaff_r8 >> 0x10 | unaff_r8 << 0x10)) = (char)param_3;
      software_interrupt(0xa29395);
    }
    if (!(bool)in_OV) {
      register0x00000054 = *(BADSPACEBASE **)unaff_r7;
      unaff_r6 = *(int *)(unaff_r7 + -0x10);
    }
    if (bVar4 || bVar3 != (bool)in_OV) {
      in_r12 = *(uint *)(unaff_r6 + -8);
      param_4 = *(int *)(unaff_r6 + -0x24);
    }
    if (bVar3 == (bool)in_OV) {
      in_OV = SCARRY4(param_4,(uint)register0x00000054 >> 0x1d);
    }
    if ((bool)in_OV) {
      coprocessor_load(8,in_cr0,in_r12 - 0x32c);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

