
/* WARNING: Control flow encountered bad instruction data */

void FUN_0826f9bc(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  undefined4 uVar1;
  uint *extraout_r3;
  int unaff_r8;
  uint unaff_r9;
  undefined1 unaff_r11;
  uint in_r12;
  undefined1 *puVar2;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 in_d2;
  undefined8 in_d24;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(5,in_cr12,0x826fce0);
    in_CY = (byte)((param_3 << 1) >> 0x1f);
    puVar2 = (undefined1 *)(unaff_r9 & ~(param_3 >> 0x1f | param_3 << 1));
    in_NG = (int)puVar2 < 0;
    in_ZR = puVar2 == (undefined1 *)0x0;
  }
  else {
    *(undefined1 *)(param_3 + (in_r12 >> 0xb)) = unaff_r11;
    coprocessor_storelong(0,in_cr12,unaff_r9);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_function(1,0xd,6,in_cr13,in_cr5,in_cr14);
  }
  else {
    in_OV = SCARRY4((uint)in_CY,0x5c26f9db);
    in_NG = (int)(in_CY + 0x5c26f9db) < 0;
    in_ZR = in_CY == 0xa3d90625;
  }
  uVar1 = VectorGetElement(in_d2,0,2,0);
  VectorMultiply(in_d24,uVar1,2);
  if (!(bool)in_ZR && in_NG == in_OV) {
    uVar3 = func_0x0782bdd8();
    param_4 = extraout_r3;
  }
  coprocessor_loadlong2(4,in_cr0,unaff_r8 + 0x28U);
  if ((bool)in_ZR) {
    *param_4 = unaff_r9;
    param_4[-1] = unaff_r8 + 0x28U;
    param_4[-2] = (uint)uVar3;
  }
  coprocessor_moveto(10,0,0,(int)((ulonglong)uVar3 >> 0x20),in_cr14,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

