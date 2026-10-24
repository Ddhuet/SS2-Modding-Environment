
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08e5450e) */

undefined4
FUN_08e544fe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 extraout_r3;
  uint unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar3;
  bool bVar4;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r9 = param_2;
    unaff_r9[1] = param_4;
    unaff_r9[2] = unaff_r4;
    unaff_r9[3] = unaff_r8;
    unaff_r9[4] = unaff_r10;
    unaff_r9[5] = in_r12;
    unaff_r9[6] = register0x00000054;
    unaff_r9[7] = 0x8e54506;
    return param_1;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV != '\0') {
    uVar5 = func_0x070e666e();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_load(0xb,in_cr11,unaff_r10);
    coprocessor_storelong(0xc,in_cr13,unaff_r11);
    coprocessor_storelong(0xc,in_cr13,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
  if (in_NG != in_OV) {
    if (in_NG == in_OV) {
      in_CY = false;
      in_NG = (int)(unaff_r4 | 0x290000) < 0;
      in_ZR = (unaff_r4 | 0x290000) == 0;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      *unaff_r5 = (int)((ulonglong)uVar5 >> 0x20);
      unaff_r5[1] = param_4;
      unaff_r5[2] = unaff_r7;
      unaff_r5[3] = unaff_r11;
      unaff_r5[4] = register0x00000054;
      unaff_r5[5] = 0x8e54536;
      if ((bool)in_CY && !(bool)in_ZR) {
        return param_6;
      }
      if (!(bool)in_CY || (bool)in_ZR) {
        uVar5 = func_0x085a2fca();
      }
      uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
      uVar1 = (uint)uVar5;
      bVar3 = false;
      if ((bool)in_ZR) {
        uVar2 = unaff_r4 & unaff_r11 << (uVar2 & 0xff);
        in_NG = (int)uVar2 < 0;
        bVar3 = uVar2 == 0;
      }
      bVar4 = false;
      if (bVar3) {
        uVar1 = unaff_r11 & uVar1;
        in_NG = (int)uVar1 < 0;
        bVar4 = uVar1 == 0;
      }
      bVar3 = false;
      if (bVar4) {
        uVar1 = unaff_r4 & uVar1;
        in_NG = (int)uVar1 < 0;
        bVar3 = uVar1 == 0;
      }
      bVar4 = false;
      if (bVar3) {
        uVar1 = unaff_r11 & uVar1;
        in_NG = (int)uVar1 < 0;
        bVar4 = uVar1 == 0;
      }
      bVar3 = false;
      if (bVar4) {
        uVar1 = unaff_r11 & uVar1;
        in_NG = (int)uVar1 < 0;
        bVar3 = uVar1 == 0;
      }
      bVar4 = false;
      if (bVar3) {
        uVar1 = uVar2 & uVar1;
        in_NG = (int)uVar1 < 0;
        bVar4 = uVar1 == 0;
      }
      if (bVar4) {
        uVar2 = uVar2 & uVar1;
        uVar1 = uVar2;
      }
      else {
        coprocessor_store(0,in_cr0,uVar2);
      }
      if (in_NG != in_OV) {
        func_0x0810b902(uVar1,uVar2);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return (int)uVar5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

