
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08186a02(void)

{
  int in_r3;
  bool in_ZR;
  
  if (!in_ZR) {
    return *(undefined8 *)(in_r3 + -0x24);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

