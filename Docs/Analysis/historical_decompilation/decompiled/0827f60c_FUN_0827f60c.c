
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0827f60c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r3;
  undefined4 *unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r10;
  undefined4 *unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (in_NG == in_OV) {
    uVar2 = func_0x06e6ccec();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (in_NG == in_OV) {
    unaff_r10 = param_4 + ((uint)&stack0x00000000 >> 0xf) + (uint)(byte)in_CY;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    uVar2 = func_0x0646305c();
    param_3 = extraout_r2_00;
  }
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r11 = unaff_r8;
    *(int *)uVar2 = param_3 + 0x21c000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return *(undefined4 *)*unaff_r4;
  }
  coprocessor_load(0xe,in_cr8,iVar1 + 0x230);
  if (!(bool)in_CY || (bool)in_ZR) {
    software_interrupt(0x9f9d9b);
  }
  if (in_NG == in_OV) {
    *(int *)(unaff_r6 + 4) = iVar1;
    *(undefined4 *)(unaff_r6 + 8) = unaff_r5;
    *(undefined4 *)(unaff_r6 + 0xc) = unaff_r7;
    *(undefined4 *)(unaff_r6 + 0x10) = unaff_r8;
    *(int *)(unaff_r6 + 0x14) = unaff_r10;
    *(BADSPACEBASE **)(unaff_r6 + 0x18) = register0x00000054;
    *(undefined4 *)(unaff_r6 + 0x1c) = 0x827f64c;
    software_interrupt(0xafacaa);
    coprocessor_function(4,0xb,5,in_cr11,in_cr0,in_cr13);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

