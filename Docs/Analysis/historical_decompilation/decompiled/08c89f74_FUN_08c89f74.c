
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c89f74(void)

{
  code *unaff_lr;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined4 in_cr11;
  
  if (!(bool)in_NG) {
    unaff_lr = FUN_08c89f78;
    func_0x08837440();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_storelong(5,in_cr11,unaff_lr);
    func_0x07fab448();
  }
  if (!(bool)in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

