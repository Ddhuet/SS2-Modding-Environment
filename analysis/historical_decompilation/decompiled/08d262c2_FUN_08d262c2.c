
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d262c2(void)

{
  undefined4 unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  int unaff_r10;
  undefined1 extraout_r12;
  undefined1 extraout_r12_00;
  undefined1 uVar1;
  int in_r12;
  int extraout_r12_01;
  int extraout_r12_02;
  int extraout_r12_03;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    if (!(bool)in_ZR && in_NG == in_OV) {
      coprocessor_moveto2(8,9,unaff_r6,unaff_r7,in_cr11);
    }
    if (in_NG == in_OV) {
      coprocessor_load(8,in_cr12,unaff_r4);
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x07f7554a();
      in_r12 = extraout_r12_01;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      unaff_r6 = *(int *)(unaff_r10 + 0xc);
      in_r12 = *(int *)(unaff_r10 + 0x1c);
    }
    if (in_NG != in_OV) {
      func_0x0768f502();
      in_r12 = extraout_r12_02;
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      *unaff_r5 = (char)unaff_r5 + -0x56;
      *(char *)(in_r12 + -0x1461) = (char)*(undefined4 *)(in_r12 + -0x9a8);
      func_0x09e838ea();
      in_r12 = extraout_r12_03;
    }
    uVar1 = (undefined1)in_r12;
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x0a299566();
      uVar1 = extraout_r12;
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x07bd722a();
      uVar1 = extraout_r12_00;
    }
    if (!(bool)in_CY) {
      *(undefined1 *)(unaff_r6 + -0x44c) = uVar1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

