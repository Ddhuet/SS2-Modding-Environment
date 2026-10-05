
/* WARNING: Control flow encountered bad instruction data */

void FUN_08be2e94(undefined4 param_1,uint param_2)

{
  uint unaff_r5;
  int unaff_r9;
  uint unaff_r11;
  bool in_ZR;
  bool bVar1;
  
  bVar1 = false;
  if (in_ZR) {
    unaff_r11 = param_2 ^ unaff_r9 << (unaff_r5 & 0xff);
    bVar1 = unaff_r11 == 0;
  }
  if (bVar1 && param_2 * unaff_r9 + unaff_r11 == 0) {
    func_0x09850308();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

