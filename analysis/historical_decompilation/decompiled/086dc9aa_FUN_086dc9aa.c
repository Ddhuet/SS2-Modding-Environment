
/* WARNING: Control flow encountered bad instruction data */

void FUN_086dc9aa(int param_1,uint param_2)

{
  uint uVar1;
  char in_NG;
  undefined1 in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  if ((bool)in_NG == in_OV) {
    software_interrupt(0xf0b581);
  }
  if (in_OV) {
    uVar1 = param_1 << (param_2 & 0xff);
    in_CY = 0x86dc9b5 < uVar1;
    param_1 = uVar1 + 0xf792364a;
  }
  if (!(bool)in_CY) {
    coprocessor_loadlong(1,in_cr0,param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

