
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08c6e394) */

void FUN_08c6e37c(void)

{
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  int in_r12;
  int extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr11;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(5,in_cr11,unaff_r9);
    coprocessor_storelong(5,in_cr5,unaff_r11);
    func_0x0735d6bc();
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    *(char *)(in_r12 + 0xccc) = (char)in_r12;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *(char *)(in_r12 + 0xccc) = (char)in_r12;
  }
  if ((bool)in_NG) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

