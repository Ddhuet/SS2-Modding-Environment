
/* WARNING: Control flow encountered bad instruction data */

void FUN_087c801a(void)

{
  int in_r3;
  uint unaff_r7;
  undefined1 unaff_r11;
  bool in_OV;
  
  if (!in_OV) {
    *(undefined1 *)(in_r3 - (unaff_r7 >> 0xb)) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

