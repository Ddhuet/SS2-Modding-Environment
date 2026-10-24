
/* WARNING: Control flow encountered bad instruction data */

void FUN_0879d836(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 unaff_r9;
  undefined4 *unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (!(bool)in_OV) {
    unaff_lr = 0x879d83a;
    uVar3 = func_0x0768ad5e();
  }
  if (!(bool)in_OV) {
    unaff_lr = 0x879d83e;
    uVar3 = func_0x07686d62();
  }
  if (!(bool)in_OV) {
    unaff_lr = 0x879d842;
    uVar3 = func_0x0767ed66();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_lr = 0x879d846;
    uVar3 = func_0x0768b56a();
  }
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar1 = (undefined4)uVar3;
  if (in_NG != in_OV) {
    return;
  }
  if (in_NG == in_OV) {
    uVar1 = *unaff_r10;
    unaff_r10 = unaff_r10 + 4;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_r9 = unaff_r10[2];
    uVar2 = unaff_r10[4];
    unaff_r5 = unaff_r10[5];
    unaff_r10 = unaff_r10 + 8;
  }
  if ((bool)in_NG) {
    uVar2 = unaff_r10[4];
    unaff_r5 = unaff_r10[5];
    unaff_r9 = unaff_r10[6];
  }
  if (!(bool)in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *(undefined4 *)(unaff_r6 + 4) = uVar2;
    *(undefined4 *)(unaff_r6 + 8) = unaff_r5;
    *(undefined4 *)(unaff_r6 + 0xc) = unaff_r9;
    *(undefined4 *)(unaff_r6 + 0x10) = unaff_lr;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x0794839a(uVar1);
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_load(4,in_cr4,unaff_r6 + -0x110);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

