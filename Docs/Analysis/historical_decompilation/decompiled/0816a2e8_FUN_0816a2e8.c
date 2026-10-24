
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0816a2e8(void)

{
  undefined1 unaff_r4;
  int unaff_r5;
  int in_r12;
  bool in_CY;
  
  if (!in_CY) {
    return *(undefined4 *)(unaff_r5 + -0x20);
  }
  *(undefined1 *)(in_r12 + -0x932) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

