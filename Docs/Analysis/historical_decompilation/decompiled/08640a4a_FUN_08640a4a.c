
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08640a5a) */

void FUN_08640a4a(undefined4 *param_1)

{
  undefined4 unaff_r11;
  char in_NG;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  if ((bool)in_NG != in_OV) {
    unaff_r11 = *param_1;
  }
  if (!in_OV) {
    coprocessor_moveto(7,4,0,unaff_r11,in_cr0,in_cr0);
  }
  if (!in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)0xfff3ffff)();
  return;
}

