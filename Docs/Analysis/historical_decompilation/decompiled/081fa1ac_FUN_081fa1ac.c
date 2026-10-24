
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_081fa1ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  int extraout_r2;
  int unaff_r4;
  int unaff_r5;
  undefined8 *unaff_r7;
  int unaff_r9;
  undefined4 *puVar1;
  undefined4 unaff_r10;
  int unaff_r11;
  int iVar2;
  int in_r12;
  int extraout_r12;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    return *unaff_r7;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x81fa1b4;
    uVar3 = func_0x070a889c();
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    if (!(bool)in_ZR && in_NG == in_OV) {
      in_r12 = unaff_r4 - (!(bool)in_CY + 0xc800000);
    }
    if (in_NG == in_OV) {
      if (in_NG == in_OV) {
        software_interrupt(0xb1b2b3);
        puVar1 = (undefined4 *)(unaff_r9 + ((uint)&stack0x00000000 >> 0x17));
        *puVar1 = unaff_r10;
        *(undefined4 *)(unaff_r5 + 0x5a6) = unaff_r10;
        *(int *)unaff_r7 = (int)uVar3;
        *(int *)((int)unaff_r7 + 4) = param_3;
        *(undefined4 **)(unaff_r7 + 1) = (undefined4 *)(unaff_r5 + 0x5a6);
        *(undefined8 **)((int)unaff_r7 + 0xc) = unaff_r7;
        *(undefined4 **)(unaff_r7 + 2) = puVar1;
        *(undefined4 *)((int)unaff_r7 + 0x14) = unaff_r10;
        *(BADSPACEBASE **)(unaff_r7 + 3) = register0x00000054;
        *(undefined4 *)((int)unaff_r7 + 0x1c) = 0x81fa1ec;
        iVar2 = unaff_r11 + 0x2a4;
        coprocessor_store(0xb,in_cr10,unaff_r11);
        coprocessor_store(0xc,in_cr10,in_r12 + 0x2b0);
      }
      else {
        iVar2 = *(int *)(param_3 + 0xaf);
      }
      if (!(bool)in_ZR && in_NG == in_OV) {
        coprocessor_moveto(0xf,6,5,iVar2,in_cr6,in_cr9);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    coprocessor_load(0xf,in_cr11,unaff_lr + 0x304);
    return uVar3;
  }
  *(undefined1 *)((ulonglong)uVar3 >> 0x20) = (char)unaff_r11;
  coprocessor_storelong(9,in_cr12,unaff_r11);
  coprocessor_storelong(0xe,in_cr12,&stack0x00000334);
  coprocessor_storelong(0xd,in_cr12,&stack0x00000334);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

