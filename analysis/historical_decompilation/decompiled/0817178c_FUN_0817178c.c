
/* WARNING: Control flow encountered bad instruction data */

void FUN_0817178c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int iVar2;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    if (!in_CY || in_ZR) {
      uVar1 = unaff_r4 >> 0x1b;
      in_CY = CARRY4(unaff_r7,uVar1);
      in_OV = SCARRY4(unaff_r7,uVar1);
      unaff_r9 = unaff_r7 + uVar1;
      in_NG = unaff_r9 < 0;
      in_ZR = unaff_r9 == 0;
    }
    if (in_CY && !in_ZR) {
      *(undefined4 *)(param_3 + 4) = param_4;
      *(uint *)(param_3 + 8) = unaff_r7;
      *(int *)(param_3 + 0xc) = unaff_r9;
      *(undefined4 *)(param_3 + 0x10) = 0x817179c;
    }
    if (in_NG != in_OV) {
      unaff_r10 = unaff_r10 + 0x60000009 + (uint)in_CY;
    }
    iVar2 = unaff_r7 - (!in_CY + 0xbd000);
    if (iVar2 == 0 ||
        iVar2 < 0 != (SBORROW4(unaff_r7,0xbd000) != SBORROW4(unaff_r7 - 0xbd000,(uint)!in_CY))) {
      *unaff_r8 = param_1;
      unaff_r8[1] = param_4;
      unaff_r8[2] = unaff_r5;
      unaff_r8[3] = unaff_r6;
      unaff_r8[4] = unaff_r7;
      unaff_r8[5] = unaff_r10;
      unaff_r8[6] = unaff_r11;
      unaff_r8[7] = register0x00000054;
      unaff_r8[8] = unaff_lr;
      unaff_r8[9] = 0x81717a8;
    }
    if ((0xbd000 < unaff_r7 || unaff_r7 - 0xbd000 < (uint)in_CY) && iVar2 != 0) {
      *(int *)(unaff_r11 + 4) = param_3;
      *(undefined4 *)(unaff_r11 + 8) = param_4;
      *(uint *)(unaff_r11 + 0xc) = unaff_r4;
      *(undefined4 *)(unaff_r11 + 0x10) = unaff_r5;
      *(uint *)(unaff_r11 + 0x14) = unaff_r7;
      *(int *)(unaff_r11 + 0x18) = unaff_r9;
      *(int *)(unaff_r11 + 0x1c) = unaff_r10;
      *(int *)(unaff_r11 + 0x20) = unaff_r11;
      *(int *)(unaff_r11 + 0x24) = iVar2;
      *(undefined4 *)(unaff_r11 + 0x28) = 0x81717ac;
    }
    coprocessor_movefromRt(0xc,7,6,in_cr2,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

