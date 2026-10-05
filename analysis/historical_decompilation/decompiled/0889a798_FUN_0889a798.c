
/* WARNING: Control flow encountered bad instruction data */

void FUN_0889a798(void)

{
  undefined4 unaff_r11;
  undefined1 *puVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07807c68();
  }
  puVar1 = (undefined1 *)register0x00000054;
  if (!(bool)in_ZR && in_NG == in_OV) {
    puVar1 = &stack0x000002f4;
    coprocessor_load(0xb,in_cr11,&stack0x00000000);
    coprocessor_loadlong(0xd,in_cr13,unaff_r11);
  }
  coprocessor_storelong2(0xb,in_cr11,puVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

