
/* WARNING: Control flow encountered bad instruction data */

void FUN_085683d6(void)

{
  undefined4 unaff_r4;
  undefined1 unaff_r5;
  undefined1 *unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  int *in_r12;
  int *extraout_r12;
  undefined4 *puVar1;
  undefined1 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr8;
  
  if ((bool)in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY) {
    unaff_lr = 0xde;
    func_0x07c92f12();
    in_r12 = extraout_r12;
  }
  if ((bool)in_NG) {
    register0x00000054 = (BADSPACEBASE *)(&stack0x00000000 + (unaff_r11 >> 0x17 | unaff_r11 << 9));
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    puVar1 = (undefined4 *)register0x00000054;
    if ((bool)in_OV) {
      puVar1 = (undefined4 *)((int)register0x00000054 + 0x222);
      *(undefined1 **)register0x00000054 = unaff_r6;
    }
    if (in_NG == in_OV) {
      func_0x08078d12();
    }
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_NG != in_OV) {
      coprocessor_load(3,in_cr3,unaff_r11);
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      coprocessor_load(8,in_cr8,unaff_r11);
    }
    if (in_NG != in_OV) {
      coprocessor_storelong(4,in_cr6,puVar1 + 0x6a);
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      *puVar1 = unaff_r4;
      *unaff_r6 = unaff_r5;
    }
    if (in_NG == in_OV) {
      func_0x07423b4a();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_r12 = (int)in_r12 + (unaff_r8 >> 0x19);
  *(undefined1 *)register0x00000054 = unaff_lr;
  return;
}

