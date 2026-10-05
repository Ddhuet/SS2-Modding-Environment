
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f25e6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (in_NG == in_OV) {
    uRam081f2616 = 0x81f25ee;
    uRam081f25f2 = param_2;
    uRam081f25f6 = param_4;
    uRam081f25fa = unaff_r4;
    uRam081f25fe = unaff_r5;
    uRam081f2602 = unaff_r7;
    iRam081f2606 = unaff_r8;
    uRam081f260a = unaff_r10;
    uRam081f260e = in_r12;
    puRam081f2612 = (undefined1 *)register0x00000054;
  }
  if ((bool)in_CY && !in_ZR) {
    coprocessor_store(2,in_cr9,0x81f2846);
    unaff_r8 = param_1 + 0x81;
    software_interrupt(0x8b8784);
  }
  if (in_NG == in_OV) {
    in_CY = 0xffdaffff < unaff_lr;
    in_OV = SCARRY4(unaff_lr,0x250000);
    in_NG = (int)(unaff_lr + 0x250000) < 0;
    in_ZR = unaff_lr == 0xffdb0000;
  }
  if (in_NG != in_OV) {
    uRam081f260a = unaff_r10;
  }
  if (!in_ZR && in_NG == in_OV) {
    unaff_lr = 0x81f260a;
    uVar3 = func_0x073624f2();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  puVar1 = (undefined4 *)uVar3;
  *puVar1 = uVar2;
  puVar1[1] = unaff_r4;
  puVar1[2] = unaff_r6;
  puVar1[3] = unaff_r7;
  puVar1[4] = unaff_r8;
  puVar1[5] = unaff_r11;
  puVar1[6] = in_r12;
  puVar1[7] = unaff_lr;
  puVar1[8] = 0x81f2612;
  if ((bool)in_CY) {
    puVar1[9] = in_r12;
    puVar1[8] = unaff_r11;
    puVar1[7] = param_4;
    puVar1[6] = param_3;
    puVar1[5] = uVar2;
    puVar1[4] = puVar1 + 9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

