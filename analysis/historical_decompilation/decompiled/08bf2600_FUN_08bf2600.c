
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bf2600(uint param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint unaff_r4;
  int unaff_r5;
  char *unaff_r11;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar1;
  
  if (in_NG) {
    unaff_r11 = (char *)(uint)*(byte *)(unaff_r5 + -0x530);
  }
  bVar1 = false;
  if (in_ZR) {
    param_1 = param_1 & param_4 >> (param_1 & 0xff);
    param_4 = param_4 & unaff_r4 >> 6;
    unaff_r11 = (char *)(unaff_r4 ^ unaff_r5 >> 4);
    in_NG = (int)unaff_r11 < 0;
    bVar1 = unaff_r11 == (char *)0x0;
  }
  if (bVar1) {
    param_3 = param_3 & 0xffff | 0xb4440000;
  }
  if (in_NG) {
    *unaff_r11 = (char)unaff_r11 + -0x30;
  }
  if (in_NG != (bool)in_OV) {
    func_0x07837230(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

