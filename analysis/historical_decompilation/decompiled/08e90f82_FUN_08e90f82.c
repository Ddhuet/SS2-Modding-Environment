
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e90f82(void)

{
  int in_r3;
  undefined1 unaff_r10;
  bool in_NG;
  char in_OV;
  
  if (!in_NG) {
    *(undefined1 *)(in_r3 + -0xb76) = unaff_r10;
  }
  if (in_NG != (bool)in_OV) {
    func_0x07ca2286();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

