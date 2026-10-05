
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c3fc6(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r4;
  int unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  int unaff_r11;
  int iVar1;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
    unaff_r11 = unaff_lr + 0x31400000 + (uint)in_CY;
  }
  if (in_CY && !in_ZR) {
    iVar1 = unaff_r11;
    if (!in_CY || in_ZR) {
      iVar1 = unaff_r11 + 0x278;
      coprocessor_load(9,in_cr10,unaff_r11);
    }
    if (in_NG == in_OV) {
      *(int *)param_3 = param_3;
      *(undefined4 *)(param_3 + 4) = unaff_r4;
      *(int *)(param_3 + 8) = unaff_r7;
      *(undefined4 *)(param_3 + 0xc) = unaff_r8;
      *(int *)(param_3 + 0x10) = iVar1;
      *(BADSPACEBASE **)(param_3 + 0x14) = register0x00000054;
      *(undefined4 *)(param_3 + 0x18) = 0x81c3fde;
    }
    if (in_ZR || in_NG != in_OV) {
      in_OV = SCARRY4((uint)in_CY,0x81ef3e2);
      in_ZR = in_CY == 0xf7e10c1e;
      in_NG = '\0';
    }
    if (in_ZR || in_NG != in_OV) {
      coprocessor_storelong(0,in_cr12,unaff_r7 + 0x33c);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_store(0xc,in_cr10,unaff_r9 + 0x278);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

