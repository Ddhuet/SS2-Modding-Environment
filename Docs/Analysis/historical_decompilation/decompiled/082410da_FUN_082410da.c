
/* WARNING: Control flow encountered bad instruction data */

void FUN_082410da(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    func_0x06ab05be();
  }
  if ((bool)in_ZR) {
    func_0x09515d1e();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

