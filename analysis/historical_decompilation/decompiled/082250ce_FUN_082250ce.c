
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_082250ce(int param_1)

{
  undefined1 *unaff_r5;
  int unaff_r9;
  undefined2 unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    if (in_NG != in_OV) {
      in_r12 = in_r12 + 0x2e8;
      coprocessor_load(0xb,in_cr11,in_r12);
    }
    if (!in_ZR && in_NG == in_OV) {
      *(undefined2 *)(param_1 + 0xfe) = unaff_r11;
      *unaff_r5 = (char)in_r12;
      func_0x074d7406();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined8 *)(unaff_r9 + 4);
}

