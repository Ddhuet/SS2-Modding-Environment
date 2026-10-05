
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828e780(void)

{
  undefined4 unaff_r11;
  int in_r12;
  int extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x06e7bf48();
    in_r12 = extraout_r12;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(undefined4 *)(in_r12 + 0xcf9) = unaff_r11;
  }
  if (in_NG != in_OV) {
    coprocessor_function(0xf,10,0,in_cr11,in_cr13,in_cr3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

