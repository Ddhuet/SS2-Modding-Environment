
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_082e7a10(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  uint unaff_r11;
  bool in_NG;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr10;
  
  pbVar1 = param_2;
  if (!in_CY) {
    pbVar1 = param_2 + 0x5af;
    unaff_r11 = (uint)*param_2;
    coprocessor_movefromRt(0xb,2,2,in_cr3,in_cr10);
  }
  if (in_NG != (bool)in_OV) {
    if (!in_NG) {
      unaff_r8[-1] = unaff_r11;
      unaff_r8[-2] = unaff_r10;
      unaff_r8[-3] = unaff_r9;
      unaff_r8[-4] = unaff_r8;
      unaff_r8[-5] = unaff_r7;
      unaff_r8[-6] = unaff_r6;
      unaff_r8[-7] = unaff_r5;
      unaff_r8[-8] = pbVar1;
      unaff_r8[-9] = param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *unaff_r8;
}

