
/* WARNING: Control flow encountered bad instruction data */

void FUN_08747344(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 unaff_r6;
  uint unaff_r7;
  undefined4 unaff_r8;
  undefined1 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  bool bVar2;
  byte in_CY;
  byte bVar3;
  char in_OV;
  undefined4 in_cr0;
  
  puVar1 = param_3;
  if (in_NG != (bool)in_OV) {
    puVar1 = (undefined4 *)((int)param_3 - (unaff_r7 >> 10 | unaff_r7 << 0x16));
    *(char *)param_3 = (char)unaff_r11;
    *puVar1 = 0x8747350;
    puVar1[-1] = register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r10;
    puVar1[-4] = unaff_r9;
    puVar1[-5] = unaff_r8;
    puVar1[-6] = unaff_r6;
    puVar1[-7] = param_2;
  }
  bVar3 = in_CY;
  if (in_NG) {
    bVar3 = CARRY4((uint)unaff_r9,(uint)in_CY);
    in_OV = SCARRY4((int)unaff_r9,(uint)in_CY);
  }
  bVar2 = in_NG && (int)(unaff_r9 + in_CY) < 0;
  if (bVar2) {
    in_OV = SCARRY4(unaff_r11,-0x5ffffff5) != SCARRY4(unaff_r11 + -0x5ffffff5,(uint)bVar3);
  }
  if ((bVar2 && (int)(unaff_r11 + -0x5ffffff5 + (uint)bVar3) < 0) != (bool)in_OV) {
    coprocessor_storelong(1,in_cr0,puVar1 + -0xbc);
    software_interrupt(0x42be42);
  }
  if ((bool)in_OV) {
    *unaff_r9 = (char)unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

