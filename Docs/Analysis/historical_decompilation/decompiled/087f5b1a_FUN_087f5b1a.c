
/* WARNING: Control flow encountered bad instruction data */

void FUN_087f5b1a(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint extraout_r3;
  uint unaff_r4;
  uint unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined1 *puVar1;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  undefined1 uVar2;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr15;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (!in_CY) {
    unaff_r11 = unaff_r4 ^ 0x19800000;
  }
  if (!(bool)in_ZR) {
    in_CY = false;
    unaff_r6 = param_4 & 0x3200000;
    in_ZR = unaff_r6 == 0;
    in_NG = '\0';
  }
  if (in_CY) {
    in_NG = (int)(unaff_r4 ^ 0xd000000) < 0;
    in_ZR = (unaff_r4 ^ 0xd000000) == 0;
  }
  uVar2 = false;
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_load(2,in_cr2,unaff_lr + 0x48);
    unaff_lr = 0x87f5b2e;
    uVar3 = func_0x07b316ea();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(0xc,in_cr12,&stack0x000002e8);
  }
  coprocessor_function(10,0xf,5,in_cr9,in_cr15,in_cr11);
  coprocessor_storelong(10,in_cr8,unaff_lr + 0x32c);
  if (in_NG != in_OV) {
    puVar1 = &stack0x000002b0;
    register0x00000054 = (BADSPACEBASE *)&stack0x000002b0;
    coprocessor_storelong(10,in_cr8,puVar1);
  }
  if (!(bool)uVar2 || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_storelong(1,in_cr1,register0x00000054);
  if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)uVar2 || (bool)in_ZR) {
    *unaff_r9 = (int)((ulonglong)uVar3 >> 0x20);
    unaff_r9[1] = param_4;
    unaff_r9[2] = unaff_r6;
    unaff_r9[3] = unaff_r7;
    unaff_r9[4] = unaff_r10;
    unaff_r9[5] = unaff_r11;
    unaff_r9[6] = in_r12;
    unaff_r9[7] = unaff_lr + 0x32c;
    unaff_r9[8] = 0x87f5b5a;
    unaff_r9 = unaff_r9 + 9;
  }
  if (!(bool)in_OV) {
    *unaff_r9 = (int)uVar3;
    unaff_r9[1] = param_4;
    unaff_r9[2] = unaff_r4;
    unaff_r9[3] = unaff_r7;
    unaff_r9[4] = unaff_r8;
    unaff_r9[5] = unaff_r9;
    unaff_r9[6] = unaff_r11;
    unaff_r9[7] = in_r12;
    unaff_r9[8] = register0x00000054;
    unaff_r9[9] = 0x87f5b5e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

