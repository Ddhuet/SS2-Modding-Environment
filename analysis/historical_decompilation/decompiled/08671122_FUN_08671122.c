
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0867113a) */

void FUN_08671122(undefined1 *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  bool in_ZR;
  undefined1 in_CY;
  undefined4 in_cr5;
  
  puVar2 = param_1;
  if (!(bool)in_CY) {
    puVar2 = param_1 + ((int)param_1 >> 0xb);
    *param_1 = (char)unaff_r11;
    *param_3 = param_2;
    param_3[1] = unaff_r4;
    param_3[2] = unaff_r5;
    param_3[3] = unaff_r7;
    param_3[4] = unaff_r8;
    param_3[5] = unaff_r9;
    param_3[6] = unaff_r10;
    param_3[7] = in_r12;
    param_3[8] = register0x00000054;
  }
  if (!in_ZR) {
    uVar1 = unaff_r8 << ((uint)param_3 & 0xff);
    in_CY = CARRY4(unaff_r4,uVar1);
    unaff_r11 = unaff_r4 + uVar1;
  }
  if (!(bool)in_CY) {
    func_0x09a8bd76(puVar2);
  }
  if ((bool)in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(0,in_cr5,unaff_r11 + -0xbc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

