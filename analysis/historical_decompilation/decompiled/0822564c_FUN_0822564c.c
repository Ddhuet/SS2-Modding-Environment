
/* WARNING: Control flow encountered bad instruction data */

void FUN_0822564c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int unaff_lr;
  char in_NG;
  byte in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    in_OV = SCARRY4(unaff_r4,0x2dc00000) != SCARRY4(unaff_r4 + 0x2dc00000,(uint)in_CY);
    unaff_r11 = unaff_r4 + 0x2dc00000 + (uint)in_CY;
    in_NG = unaff_r11 < 0;
  }
  if (in_NG == in_OV) {
    coprocessor_store(0,in_cr11,unaff_lr + 0x2c4);
    *unaff_r9 = param_3;
    unaff_r9[1] = param_4;
    unaff_r9[2] = unaff_r5;
    unaff_r9[3] = unaff_r7;
    unaff_r9[4] = unaff_r8;
    unaff_r9[5] = unaff_r9;
    unaff_r9[6] = unaff_r11;
    unaff_r9[7] = register0x00000054;
    unaff_r9[8] = 0x822565c;
    *unaff_r5 = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

