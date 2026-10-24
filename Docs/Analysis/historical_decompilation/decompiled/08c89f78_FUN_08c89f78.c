
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c89f78(void)

{
  undefined4 unaff_lr;
  undefined1 in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_storelong(5,in_cr11,unaff_lr);
    func_0x07fab448();
  }
  if (!(bool)in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

