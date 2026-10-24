
/* WARNING: Control flow encountered bad instruction data */

void FUN_08542650(undefined1 *param_1,undefined4 param_2,uint param_3,char *param_4)

{
  uint uVar1;
  char *extraout_r3;
  undefined1 *unaff_r8;
  ushort *unaff_r9;
  undefined1 in_r12;
  undefined1 extraout_r12;
  uint unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar2;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if ((bool)in_CY) {
    param_3 = (uint)*unaff_r9;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8542660;
    param_1 = (undefined1 *)func_0x09970e64(param_1,param_2,param_3);
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    coprocessor_load(0xc,in_cr11,param_1);
  }
  bVar2 = in_CY;
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar1 = (uint)param_1 >> ((uint)unaff_r8 & 0xff);
    bVar2 = CARRY4(unaff_lr,uVar1) || CARRY4(unaff_lr + uVar1,(uint)in_CY);
    in_OV = SCARRY4(unaff_lr,uVar1) != SCARRY4(unaff_lr + uVar1,(uint)in_CY);
    param_1 = (undefined1 *)(unaff_lr + uVar1 + (uint)in_CY);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined1 *)0x0;
  }
  if (!(bool)bVar2) {
    software_interrupt(0x1040bf);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    param_1[-0x440] = in_r12;
    coprocessor_movefromRt(0,0xc,in_cr11);
    param_1 = (undefined1 *)coprocessor_movefromRt2(0,0xc,in_cr11);
    coprocessor_function(0xd,1,1,in_cr12,in_cr0,in_cr0);
  }
  if ((bool)in_ZR) {
    unaff_r8 = (undefined1 *)(int)*param_4;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    param_1 = param_1 + -0x410;
    *param_1 = 0;
  }
  if (!(bool)in_NG) {
    in_OV = SBORROW4((int)unaff_r8,(int)param_1) !=
            SBORROW4((int)unaff_r8 - (int)param_1,(uint)!(bool)bVar2);
    in_NG = (int)unaff_r8 - (int)(param_1 + !(bool)bVar2) < 0;
    in_ZR = unaff_r8 == param_1 + !(bool)bVar2;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_movefromRt(0,0xd,in_cr11);
    coprocessor_movefromRt2(0,0xd,in_cr11);
    coprocessor_function(0xd,0xd,0,in_cr13,in_cr0,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

