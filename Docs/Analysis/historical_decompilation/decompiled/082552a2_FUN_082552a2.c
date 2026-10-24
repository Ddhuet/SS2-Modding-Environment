
/* WARNING: Control flow encountered bad instruction data */

void FUN_082552a2(void)

{
  char in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (!in_ZR && (bool)in_NG == in_OV) {
    software_interrupt(0xaeb5fe);
  }
  if (in_OV) {
    func_0x08e5ae5e();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

