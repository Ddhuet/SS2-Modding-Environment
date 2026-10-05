
/* WARNING: Control flow encountered bad instruction data */

void FUN_080eda46(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int unaff_r4;
  undefined1 *puVar1;
  undefined4 *unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  uint uVar2;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  uint unaff_r11;
  undefined4 in_r12;
  undefined1 *puVar3;
  uint unaff_lr;
  char in_NG;
  char in_OV;
  bool bVar4;
  undefined4 in_cr5;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  uVar2 = unaff_r7;
  if (in_NG != in_OV) {
    uVar2 = unaff_r7 + 0x2d0;
    coprocessor_load(5,in_cr11,unaff_r7);
  }
  puVar3 = (undefined1 *)(unaff_lr & ~(unaff_r6 >> 7));
  bVar4 = (int)puVar3 < 0;
  if (bVar4 != (bool)in_OV) {
    coprocessor_moveto(0xe,6,6,in_r12,in_cr5,in_cr9);
    unaff_r11 = (uVar2 >> 0x10) << 0x18 | (uVar2 >> 0x18) << 0x10 | (uVar2 & 0xff) << 8 |
                uVar2 >> 8 & 0xff;
  }
  puVar1 = (undefined1 *)(unaff_r4 + ((int)param_4 >> 0xd));
  *puVar1 = (char)puVar3;
  if (bVar4 != (bool)in_OV) {
    coprocessor_storelong(0xe,in_cr12,param_3);
  }
  if (puVar3 != (undefined1 *)0x0 && bVar4 == (bool)in_OV) {
    *param_4 = param_2;
    param_4[1] = param_4;
    param_4[2] = puVar1;
    param_4[3] = unaff_r5;
    param_4[4] = uVar2;
    param_4[5] = unaff_r8;
    param_4[6] = unaff_r9;
    param_4[7] = unaff_r10;
    param_4[8] = unaff_r11;
    param_4[9] = in_r12;
    param_4[10] = puVar3;
    param_4[0xb] = 0x80eda66;
  }
  if (puVar3 == (undefined1 *)0x0) {
    software_interrupt(0xdf8d8);
    *unaff_r5 = param_1;
    func_0x082f02aa(param_1,param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

