
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df9816(uint param_1,uint param_2,uint *param_3,uint param_4)

{
  undefined4 *puVar1;
  uint *unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  undefined4 *unaff_r8;
  undefined4 *puVar2;
  uint *unaff_r9;
  undefined4 unaff_r10;
  uint *unaff_r11;
  uint in_r12;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar3;
  bool bVar4;
  undefined4 in_cr2;
  undefined4 in_cr7;
  
  puVar2 = unaff_r8;
  if (in_NG != (bool)in_OV) {
    puVar2 = unaff_r8 + param_1 * 0x100;
    *(char *)unaff_r8 = (char)unaff_r11;
    *puVar2 = 0x8df9822;
    puVar2[-1] = register0x00000054;
    puVar2[-2] = in_r12;
    puVar2[-3] = unaff_r10;
    puVar2[-4] = unaff_r9;
    puVar2[-5] = puVar2;
    puVar2[-6] = unaff_r6;
    puVar2[-7] = unaff_r5;
    puVar2[-8] = unaff_r4;
    puVar2[-9] = param_4;
  }
  if (in_NG) {
    param_4 = *unaff_r9;
    unaff_r6 = unaff_r9[1];
    unaff_r9 = unaff_r9 + 2;
  }
  if (!in_CY) {
    param_2 = *unaff_r11;
    param_4 = unaff_r11[1];
    unaff_r4 = (uint *)unaff_r11[2];
    unaff_r5 = unaff_r11[3];
    unaff_r7 = unaff_r11[4];
    unaff_r11 = unaff_r11 + 6;
  }
  if (in_NG != (bool)in_OV) {
    coprocessor_store(8,in_cr2,param_1 - 0x2f0);
    software_interrupt(0x38be28);
  }
  bVar3 = puVar2 == (undefined4 *)0x0;
  if (!in_CY) {
    *param_3 = param_1;
    param_3[1] = unaff_r7;
    param_3[2] = (uint)unaff_r11;
    param_3[3] = in_r12;
  }
  if (in_ZR && bVar3) {
    *unaff_r4 = param_1;
    unaff_r4[1] = param_2;
    unaff_r4[2] = unaff_r7;
    unaff_r4[3] = (uint)unaff_r11;
    unaff_r4[4] = unaff_lr;
  }
  if (in_CY && (!in_ZR || !bVar3)) {
    puVar2 = (undefined4 *)*puVar2;
    *puVar2 = 0x8df9846;
    puVar2[-1] = unaff_r10;
    puVar2[-2] = unaff_r9;
    puVar2[-3] = puVar2;
    puVar2[-4] = unaff_r5;
    puVar2[-5] = param_4;
    puVar2 = puVar2 + -6;
  }
  if (in_CY) {
    *unaff_r9 = param_4;
    unaff_r9[1] = (uint)unaff_r4;
    unaff_r9[2] = unaff_r5;
    unaff_r9[3] = unaff_r6;
  }
  else {
    *unaff_r11 = param_2;
    unaff_r11[1] = param_4;
    unaff_r11[2] = unaff_r7;
    unaff_r11[3] = (uint)unaff_r11;
    unaff_r11[4] = in_r12;
    unaff_r11[5] = (uint)register0x00000054;
    unaff_r11[6] = unaff_lr;
  }
  if (in_CY && (!in_ZR || !bVar3)) {
    coprocessor_store(8,in_cr7,param_1 - 0x230);
    software_interrupt(0x588e78);
  }
  bVar4 = false;
  if (in_ZR && bVar3) {
    puVar1 = (undefined4 *)((int)puVar2 >> (param_1 & 0xff));
    in_CY = puVar1 <= puVar2;
    unaff_r9 = (uint *)((int)puVar2 - (int)puVar1);
    bVar4 = unaff_r9 == (uint *)0x0;
  }
  if (!in_CY) {
    unaff_r4 = (uint *)param_3[1];
  }
  if (!in_CY || bVar4) {
    *puVar2 = unaff_r9;
    return;
  }
  if (!in_CY || bVar4) {
    coprocessor_store(8,in_cr2,*unaff_r4 - 0x270);
    software_interrupt(0x489e38);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

