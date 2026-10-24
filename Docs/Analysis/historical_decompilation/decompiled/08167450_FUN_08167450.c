
/* WARNING: Control flow encountered bad instruction data */

undefined8
FUN_08167450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  undefined8 *extraout_r3;
  undefined8 *extraout_r3_00;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr9;
  undefined4 in_cr13;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if ((bool)in_ZR) {
    unaff_lr = 0x8167454;
    uVar2 = func_0x07594bc8();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (!(bool)in_CY) {
    unaff_r6 = unaff_r6 + -0xcc;
    coprocessor_store(1,in_cr2,unaff_r6);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_ZR) {
    *(char *)((int)uVar2 + 0x7cd) = (char)in_r12;
  }
  if (!(bool)in_CY) {
    coprocessor_function(7,3,1,in_cr2,in_cr0,in_cr9);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_lr = 0x8167468;
    func_0x0761e8e4();
    uVar1 = extraout_r1;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_CY) {
    (&stack0x00000000)[(int)&stack0x00000000 >> 0x1b] = (char)unaff_r11;
  }
  else {
    coprocessor_store(2,in_cr2,0x8167474);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(7,in_cr13,in_r12);
  }
  if ((bool)in_CY) {
    *unaff_r8 = 0x816747c;
    unaff_r8[-1] = unaff_lr;
    unaff_r8[-2] = in_r12;
    unaff_r8[-3] = unaff_r11;
    unaff_r8[-4] = unaff_r9;
    unaff_r8[-5] = unaff_r8;
    unaff_r8[-6] = unaff_r7;
    unaff_r8[-7] = unaff_r6;
    unaff_r8[-8] = uVar1;
    coprocessor_moveto2(3,2,param_4,unaff_r7,in_cr5);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    if ((bool)in_CY) {
      func_0x08823b98();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *param_4;
}

