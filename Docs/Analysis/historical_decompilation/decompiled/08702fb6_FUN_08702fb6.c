
/* WARNING: Control flow encountered bad instruction data */

void FUN_08702fb6(undefined4 *param_1)

{
  undefined4 *puVar1;
  int unaff_r7;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  puVar1 = param_1;
  if (in_NG != in_OV) {
    puVar1 = (undefined4 *)((int)param_1 - ((uint)param_1 >> 10));
    *param_1 = unaff_r11;
  }
  if (!in_ZR && in_NG == in_OV) {
    in_OV = SCARRY4(unaff_r7,(int)puVar1) != SCARRY4(unaff_r7 + (int)puVar1,(uint)in_CY);
    in_NG = (int)((int)puVar1 + (uint)in_CY + unaff_r7) < 0;
  }
  if (in_NG != in_OV) {
    puVar1 = (undefined4 *)func_0x087032b2();
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(0xc,in_cr11,puVar1 + 0xe0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

