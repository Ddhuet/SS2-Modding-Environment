
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_086e5334(void)

{
  int in_r3;
  int extraout_r3;
  bool in_ZR;
  undefined1 in_CY;
  
  if ((bool)in_CY && !in_ZR) {
    func_0x06c92b0c();
    in_r3 = extraout_r3;
  }
  if ((bool)in_CY) {
    return *(undefined8 *)(in_r3 + -0x20);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

