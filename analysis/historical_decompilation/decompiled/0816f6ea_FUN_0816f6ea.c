
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0816f6ea(undefined4 param_1,uint param_2,int param_3)

{
  undefined8 *unaff_r4;
  int *unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar1;
  byte bVar2;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 unaff_s16;
  undefined4 unaff_s17;
  undefined4 unaff_s18;
  undefined4 unaff_s19;
  undefined4 unaff_s20;
  undefined4 unaff_s21;
  undefined4 unaff_s22;
  undefined4 unaff_s23;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  undefined8 in_d26;
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  
  bVar1 = in_CY;
  if (in_NG != in_OV) {
    bVar1 = (undefined8 *)0xd2ffffff < unaff_r4 || CARRY4((uint)(unaff_r4 + 0x5a00000),(uint)in_CY);
    in_OV = SCARRY4((int)unaff_r4,0x2d000000) != SCARRY4((int)(unaff_r4 + 0x5a00000),(uint)in_CY);
    unaff_r11 = (undefined4 *)((int)unaff_r4 + in_CY + 0x2d000000);
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == (undefined4 *)0x0;
  }
  bVar2 = bVar1;
  if (in_NG != in_OV) {
    bVar2 = 0xffffff4f < param_2 || CARRY4(param_2 + 0xb0,(uint)bVar1);
    in_OV = SCARRY4(param_2,0xb0) != SCARRY4(param_2 + 0xb0,(uint)bVar1);
    unaff_r11 = (undefined4 *)(param_2 + 0xb0 + (uint)bVar1);
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == (undefined4 *)0x0;
  }
  if (in_NG == in_OV) {
    unaff_lr = unaff_lr + 0x2c4;
    coprocessor_store(0,in_cr11,unaff_lr);
    unaff_r11 = (undefined4 *)((int)unaff_r11 + ((uint)&stack0x00000000 >> 0x1b));
    *unaff_r11 = unaff_r10;
    param_3 = param_3 + 0x208;
    coprocessor_store(1,in_cr9,param_3);
  }
  if (!(bool)bVar2 || (bool)in_ZR) {
    coprocessor_store(0xb,in_cr10,unaff_r4 + 0x58);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)bVar2 || (bool)in_ZR) {
    *unaff_r4 = CONCAT44(unaff_s21,unaff_s20);
    unaff_r4[1] = CONCAT44(unaff_s23,unaff_s22);
    unaff_r4[2] = unaff_d12;
    unaff_r4[3] = unaff_d13;
    unaff_r4[4] = unaff_d14;
    unaff_r4[5] = unaff_d15;
    unaff_r4[6] = in_d16;
    unaff_r4[7] = in_d17;
    unaff_r4[8] = in_d18;
    unaff_r4[9] = in_d19;
    unaff_r4[10] = in_d20;
    unaff_r4[0xb] = in_d21;
    unaff_r4[0xc] = in_d22;
    unaff_r4[0xd] = in_d23;
    unaff_r4[0xe] = in_d24;
    unaff_r4[0xf] = in_d25;
    unaff_r4[0x10] = in_d26;
    unaff_r4[0x11] = in_d27;
    unaff_r4[0x12] = in_d28;
    unaff_r4[0x13] = in_d29;
    unaff_r4[0x14] = in_d30;
    uRam0816f726 = unaff_r8;
    if ((bool)bVar2 && !(bool)in_ZR) {
      *unaff_r11 = unaff_s16;
      unaff_r11[1] = unaff_s17;
      unaff_r11[2] = unaff_s18;
      unaff_r11[3] = unaff_s19;
      unaff_r11[4] = unaff_s20;
      unaff_r11[5] = unaff_s21;
      unaff_r11[6] = unaff_s22;
    }
    else {
      func_0x06653582(param_1,param_2,param_3);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_store(0,in_cr9,unaff_lr);
  *unaff_r7 = param_2 + 0x22400000;
  return *(undefined8 *)(param_2 + 4);
}

