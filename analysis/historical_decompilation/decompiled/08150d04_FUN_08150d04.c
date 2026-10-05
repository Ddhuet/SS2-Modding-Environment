
/* WARNING: Control flow encountered bad instruction data */

void FUN_08150d04(void)

{
  int unaff_r5;
  int unaff_r9;
  undefined1 unaff_r11;
  bool in_CY;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr15;
  
  if (!in_CY) {
    *(undefined1 *)(unaff_r5 + unaff_r9 * 0x400) = unaff_r11;
  }
  *(undefined1 *)(unaff_r9 + 0x91e) = unaff_r11;
  coprocessor_function2(0xe,10,7,in_cr15,in_cr3,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

