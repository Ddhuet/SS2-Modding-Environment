
/* WARNING: Control flow encountered bad instruction data */

void FUN_08becbd0(void)

{
  int in_r3;
  int unaff_r7;
  bool in_ZR;
  
  if ((in_ZR && unaff_r7 == in_r3 >> 10) && in_r3 == in_r3 >> 10) {
    func_0x07ad98cc();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

