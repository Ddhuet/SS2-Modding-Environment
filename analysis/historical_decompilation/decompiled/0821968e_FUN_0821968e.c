
/* WARNING: Control flow encountered bad instruction data */

void FUN_0821968e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *unaff_r7;
  undefined4 unaff_r8;
  uint *unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  uint in_r12;
  uint extraout_r12;
  uint extraout_r12_00;
  undefined1 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    unaff_r10 = unaff_r10 + 700;
    coprocessor_load(5,in_cr11,unaff_r10);
    unaff_r11 = *unaff_r9;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    in_CY = 0x53ffffff < unaff_r11;
    in_OV = SCARRY4(unaff_r11,-0x54000000);
    unaff_r10 = unaff_r11 + 0xac000000;
    in_NG = unaff_r10 < 0;
    in_ZR = unaff_r10 == 0;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = unaff_r8;
  if (in_NG == in_OV) {
    unaff_r7 = (int *)((int)unaff_r7 + 0x6a1);
    *unaff_r7 = unaff_r10;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    return;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    unaff_lr = 0xb2;
    uVar1 = func_0x066bc0c6();
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    if (!(bool)in_CY || (bool)in_ZR) {
      coprocessor_load(0,in_cr10,&stack0x00000294);
    }
    if (in_NG != in_OV) {
      unaff_lr = 0xc2;
      func_0x06e43546((int)uVar1,(int)((ulonglong)uVar1 >> 0x20) + 0xba3);
      in_r12 = extraout_r12_00;
    }
    *(undefined1 *)unaff_r7 = unaff_lr;
    if ((undefined1 *)(in_r12 & 0x8ffffff3) == (undefined1 *)0x0 ||
        (int)(in_r12 & 0x8ffffff3) < 0 != (bool)in_OV) {
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

