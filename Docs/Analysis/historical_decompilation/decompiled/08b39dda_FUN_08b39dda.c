
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b39dda(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int unaff_r5;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r11;
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  undefined1 uVar2;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_CY) {
    unaff_r11 = param_3 ^ 0x8800000;
    register0x00000054 = (BADSPACEBASE *)(param_3 & 0x14800);
    in_ZR = (undefined1 *)register0x00000054 == (undefined1 *)0x0;
    in_NG = '\0';
  }
  uVar2 = false;
  if (in_NG == in_OV) {
    func_0x09ff9daa();
    coprocessor_storelong(0xf,in_cr15,unaff_r5 + -0x3f8);
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_load(0xe,in_cr14,unaff_r11 + 0x3f8);
      coprocessor_loadlong(0xe,in_cr14,(undefined1 *)((int)register0x00000054 + 0x3b8));
    }
    coprocessor_loadlong(0xe,in_cr13,unaff_r11 + 0x378);
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_load(0xd,in_cr14,unaff_r9 + 0x3b4);
    }
    coprocessor_moveto(0xd,7,6,register0x00000054,in_cr15,in_cr13);
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_moveto(0xd,7,6,unaff_r11,in_cr15,in_cr13);
    }
    coprocessor_storelong(0xd,in_cr11,0x8b3a166);
    if ((bool)in_ZR || in_NG != in_OV) {
      iVar1 = coprocessor_movefromRt(0xd,6,6,in_cr14,in_cr13);
      register0x00000054 = (BADSPACEBASE *)(iVar1 + 0x374);
      coprocessor_storelong(0xd,in_cr13,iVar1 + 0x374);
      coprocessor_loadlong(0xd,in_cr13,0x8b3a4da);
      coprocessor_loadlong(0xe,in_cr14,iVar1 + 0x6e8);
      coprocessor_loadlong(0xe,in_cr13,iVar1 + 0x728);
    }
    if (!(bool)uVar2 || (bool)in_ZR) {
      func_0x07a299e2();
    }
    if (!(bool)uVar2 || (bool)in_ZR) {
      func_0x07a39002();
    }
    if (in_NG != in_OV) {
      func_0x07a38f8a();
    }
    if (in_NG != in_OV) {
      func_0x07aab3da();
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_loadlong(5,in_cr7,(undefined1 *)((int)register0x00000054 + 0x26c));
    }
    if (!(bool)in_OV) {
      coprocessor_loadlong(0xd,in_cr11,0x8b39e4a);
      software_interrupt(0xfffffc);
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      software_interrupt(0xffffc7);
      software_interrupt(0xfcffc7);
      software_interrupt(0xf7fc77);
      software_interrupt(0xc5c77c);
      coprocessor_loadlong(7,in_cr7,unaff_r5 + -0x3f8);
      coprocessor_movefromRt(4,7,in_cr12);
      coprocessor_movefromRt2(4,7,in_cr12);
    }
    if (!(bool)in_OV) {
      coprocessor_loadlong(4,in_cr7,0x8b39e6a);
      software_interrupt(0xfffffc);
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      software_interrupt(0xffffe7);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(BADSPACEBASE **)(unaff_r8 + 0xd95) = register0x00000054;
  return;
}

