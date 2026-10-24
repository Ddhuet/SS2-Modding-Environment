
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080ff894) */
/* WARNING: Removing unreachable block (ram,0x080ff8b4) */
/* WARNING: Removing unreachable block (ram,0x080ff8bc) */
/* WARNING: Removing unreachable block (ram,0x080ff8c4) */

void FUN_080ff890(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint *unaff_r4;
  uint *puVar2;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int unaff_r11;
  int in_r12;
  uint uVar3;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr10;
  
  if (!in_ZR) {
    return;
  }
  puVar1 = param_2;
  if (in_NG != in_OV) {
    software_interrupt(0xb5d9ab);
    puVar1 = param_2 + unaff_r11 * 0x40;
    *param_2 = unaff_r9;
  }
  uVar3 = unaff_r5 & ~(param_1 >> 0xd);
  puVar2 = unaff_r4;
  if (in_NG == in_OV) {
    puVar2 = unaff_r4 + param_1 * 0x800;
    uVar3 = *unaff_r4;
  }
  software_interrupt(0xebb89f);
  if (in_NG != in_OV) {
    in_r12 = in_r12 + 0x2d0;
    coprocessor_store(10,in_cr10,in_r12);
  }
  *puVar1 = puVar1;
  puVar1[1] = param_4;
  puVar1[2] = puVar2;
  puVar1[3] = unaff_r6;
  puVar1[4] = unaff_r7;
  puVar1[5] = unaff_r8;
  puVar1[6] = in_r12;
  puVar1[7] = uVar3;
  puVar1[8] = 0x80ff8b8;
  if (in_NG != in_OV) {
    coprocessor_store(9,in_cr10,param_1 + 0x338);
  }
  software_interrupt(0xe2b0b3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

