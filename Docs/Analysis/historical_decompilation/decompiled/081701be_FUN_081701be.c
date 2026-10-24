
/* WARNING: Control flow encountered bad instruction data */

void FUN_081701be(void)

{
  int in_r3;
  undefined2 unaff_r11;
  undefined4 in_cr12;
  
  *(undefined2 *)(in_r3 + 0x58) = unaff_r11;
  coprocessor_storelong(5,in_cr12,0x81701ca);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

