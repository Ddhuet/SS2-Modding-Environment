
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08ab1180(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r7;
  int unaff_r8;
  int iVar5;
  undefined4 *unaff_r9;
  undefined2 *unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar6;
  
  if (in_NG != in_OV) {
    unaff_r11 = (undefined2 *)((int)unaff_r11 + -0x5b);
    *unaff_r11 = (short)unaff_r11;
  }
  if (in_ZR) {
    bVar6 = true;
  }
  else {
    in_NG = (int)(param_1 & param_2) < 0;
    bVar6 = (param_1 & param_2) == 0;
  }
  if (!bVar6) {
    bVar1 = Absolute((char)param_2 - (char)unaff_r8);
    bVar2 = Absolute((char)(param_2 >> 8) - (char)((uint)unaff_r8 >> 8));
    bVar3 = Absolute((char)(param_2 >> 0x10) - (char)((uint)unaff_r8 >> 0x10));
    bVar4 = Absolute((char)(param_2 >> 0x18) - (char)((uint)unaff_r8 >> 0x18));
    param_2 = param_2 + ((uint)bVar4 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar2 << 8 | (uint)bVar1)
    ;
  }
  if (in_CY && !bVar6) {
    iVar5 = unaff_r8;
    if (in_NG == in_OV) {
      param_4 = *(undefined4 *)(unaff_r8 + 4);
      unaff_r4 = *(undefined4 *)(unaff_r8 + 8);
      unaff_r7 = *(undefined4 **)(unaff_r8 + 0xc);
      iVar5 = *(int *)(unaff_r8 + 0x10);
      unaff_r9 = *(undefined4 **)(unaff_r8 + 0x14);
      in_r12 = *(undefined4 *)(unaff_r8 + 0x18);
      register0x00000054 = *(BADSPACEBASE **)(unaff_r8 + 0x1c);
    }
    if (in_CY && !bVar6) {
      if (!in_CY || bVar6) {
        *unaff_r7 = param_3;
        unaff_r7[1] = unaff_r5;
        unaff_r7[2] = unaff_r7;
        unaff_r7[3] = iVar5;
        unaff_r7[4] = unaff_r11;
        unaff_r7[5] = in_r12;
        unaff_r7[6] = register0x00000054;
        unaff_r7[7] = unaff_lr;
      }
      if (in_NG == in_OV) {
        *(uint *)(iVar5 + 4) = param_1;
        *(uint *)(iVar5 + 8) = param_2;
        *(undefined4 *)(iVar5 + 0xc) = param_4;
        *(undefined4 *)(iVar5 + 0x10) = unaff_r4;
        *(undefined4 *)(iVar5 + 0x14) = unaff_r5;
        *(undefined4 **)(iVar5 + 0x18) = unaff_r7;
        *(int *)(iVar5 + 0x1c) = iVar5;
        *(undefined2 **)(iVar5 + 0x20) = unaff_r11;
        *(undefined4 *)(iVar5 + 0x24) = in_r12;
        *(BADSPACEBASE **)(iVar5 + 0x28) = register0x00000054;
        *(undefined4 *)(iVar5 + 0x2c) = unaff_lr;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return *unaff_r9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

