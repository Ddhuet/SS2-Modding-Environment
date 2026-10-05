
/* WARNING: Control flow encountered bad instruction data */

void FUN_0872a876(void)

{
  int in_r3;
  int extraout_r3;
  undefined1 in_OV;
  undefined4 in_cr7;
  
  if (!(bool)in_OV) {
    func_0x0880b67a();
    in_r3 = extraout_r3;
  }
  if (!(bool)in_OV) {
    coprocessor_store(0xc,in_cr7,in_r3 + 0x20c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

