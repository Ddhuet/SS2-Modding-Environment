
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825a00a(void)

{
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    func_0x06dc771e();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

