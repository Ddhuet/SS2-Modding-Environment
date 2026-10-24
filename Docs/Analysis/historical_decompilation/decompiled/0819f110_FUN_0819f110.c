
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819f110(void)

{
  undefined1 unaff_r11;
  int in_r12;
  bool in_ZR;
  bool in_CY;
  
  if (in_ZR) {
    *(undefined1 *)(in_r12 + 0x59a) = unaff_r11;
  }
  if (in_CY && !in_ZR) {
    func_0x0670dcc4();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

