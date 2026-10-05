
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_080ecc84(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r5;
  int unaff_r6;
  undefined8 *unaff_r8;
  int unaff_r9;
  int iVar1;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr14;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_storelong(2,in_cr14,unaff_r5);
  }
  if (in_NG != in_OV) {
    return *unaff_r8;
  }
  if (!in_ZR && in_NG == in_OV) {
    in_OV = SCARRY4(unaff_r6,0x2e40000) != SCARRY4(unaff_r6 + 0x2e40000,(uint)in_CY);
    iVar1 = unaff_r6 + 0x2e40000 + (uint)in_CY;
    in_NG = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_moveto(0xe,7,6,&stack0x00000000,in_cr4,in_cr3);
  }
  if (in_NG != in_OV) {
    return CONCAT44(param_2,*(undefined4 *)(unaff_r9 + 4));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

