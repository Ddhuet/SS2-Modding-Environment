
/* WARNING: Control flow encountered bad instruction data */

void FUN_086dd3fe(void)

{
  int in_r3;
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  undefined4 *puVar1;
  undefined4 unaff_r11;
  bool in_NG;
  char in_OV;
  undefined4 in_cr6;
  
  puVar1 = unaff_r5;
  if (in_NG != (bool)in_OV) {
    puVar1 = (undefined4 *)((int)unaff_r5 + -0x5b7);
    *unaff_r5 = unaff_r11;
  }
  if (in_NG) {
    coprocessor_storelong(0xf,in_cr6,puVar1);
  }
  *(undefined4 *)(in_r3 + -0xbe5) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

