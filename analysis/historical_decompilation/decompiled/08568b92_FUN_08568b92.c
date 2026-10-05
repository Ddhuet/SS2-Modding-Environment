
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08568bba) */
/* WARNING: Removing unreachable block (ram,0x08568ba6) */
/* WARNING: Removing unreachable block (ram,0x08568bbe) */

undefined4 FUN_08568b92(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_r6;
  undefined4 *unaff_r8;
  undefined4 *puVar1;
  undefined4 unaff_r9;
  undefined4 *unaff_r10;
  undefined4 *puVar2;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG) {
    return param_1;
  }
  if (in_OV == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV == '\0') {
    puVar2 = unaff_r10;
    if (in_CY && !in_ZR) {
      *unaff_r6 = 0x8568baa;
      unaff_r6[-1] = register0x00000054;
      unaff_r6[-2] = unaff_r11;
      unaff_r6[-3] = unaff_r6;
      unaff_r6[-4] = param_4;
      unaff_r6[-5] = param_2;
      unaff_r6[-6] = param_1;
      *unaff_r8 = unaff_lr;
      unaff_r8[-1] = unaff_r10;
      unaff_r8[-2] = unaff_r6;
      unaff_r8[-3] = param_3;
      unaff_r8[-4] = param_2;
      puVar2 = unaff_r10 + -0x2a2;
      *(char *)unaff_r10 = (char)unaff_r8;
    }
    puVar1 = unaff_r8;
    if (!in_CY) {
      puVar1 = unaff_r8 + -0x222;
      *(char *)unaff_r8 = (char)puVar2;
    }
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = unaff_r6;
    puVar1[3] = puVar1;
    puVar1[4] = unaff_r9;
    puVar1[5] = in_r12;
    puVar1[6] = register0x00000054;
    puVar1[7] = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *unaff_r10;
}

