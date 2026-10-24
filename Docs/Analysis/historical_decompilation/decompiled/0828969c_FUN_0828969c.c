
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828969c(uint param_1,undefined4 param_2,uint param_3)

{
  uint extraout_r2;
  uint unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int iVar1;
  uint unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  int unaff_lr;
  undefined4 unaff_pc;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar2;
  undefined4 in_cr7;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    *(uint *)(unaff_lr + 4) = param_1;
    *(undefined4 *)(unaff_lr + 8) = param_2;
    *(int *)(unaff_lr + 0xc) = unaff_r6;
    *(uint *)(unaff_lr + 0x10) = unaff_r7;
    *(undefined4 *)(unaff_lr + 0x14) = unaff_r8;
    *(undefined4 *)(unaff_lr + 0x18) = unaff_r10;
    *(undefined4 *)(unaff_lr + 0x1c) = in_r12;
    *(BADSPACEBASE **)(unaff_lr + 0x20) = register0x00000054;
    *(undefined4 *)(unaff_lr + 0x24) = 0x82896a4;
  }
  coprocessor_storelong(7,in_cr11,0x82896a8);
  if (!(bool)in_NG) {
    param_1 = func_0x09293ad8();
    param_3 = extraout_r2;
  }
  iVar1 = unaff_r6;
  if ((bool)in_NG) {
    iVar1 = unaff_r6 + -0x1c4;
    coprocessor_storelong(0xb,in_cr7,unaff_r6);
  }
  bVar2 = (bool)in_CY;
  if (in_NG != in_OV) {
    bVar2 = 0x2a000000 < unaff_r7 || unaff_r7 + 0xd6000000 < (uint)(byte)in_CY;
    in_OV = SBORROW4(unaff_r7,0x2a000000) != SBORROW4(unaff_r7 + 0xd6000000,(uint)!(bool)in_CY);
    param_1 = unaff_r7 - (!(bool)in_CY + 0x2a000000);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
  }
  if (!bVar2 || (bool)in_ZR) {
    if (!(bool)in_ZR && in_NG == in_OV) {
      unaff_pc = (undefined4)
                 ((ulonglong)param_3 * (ulonglong)unaff_r4 + CONCAT44(unaff_pc,unaff_r10) >> 0x20);
    }
    if ((bool)in_NG) {
      *(undefined4 *)(unaff_r5 - (param_1 >> 0x1f | param_1 << 1)) = unaff_pc;
    }
    if ((bool)in_ZR) {
      *(uint *)(iVar1 - (param_1 >> 0xc | param_1 << 0x14)) = unaff_r4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

