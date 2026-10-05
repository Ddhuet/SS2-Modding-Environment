
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825559a(int param_1,int param_2,uint param_3)

{
  int *unaff_r5;
  int unaff_r10;
  int *unaff_r11;
  bool in_ZR;
  byte in_CY;
  bool bVar1;
  undefined4 in_cr11;
  
  coprocessor_storelong(5,in_cr11,unaff_r11);
  bVar1 = false;
  if (in_ZR) {
    *unaff_r11 = (int)unaff_r11 - param_2;
    unaff_r11[1] = param_2;
    param_1 = unaff_r10 + ((uint)in_CY << 0x1f | param_3 >> 1);
    bVar1 = param_1 == 0;
  }
  if (bVar1) {
    *unaff_r5 = param_1;
    unaff_r5[1] = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

