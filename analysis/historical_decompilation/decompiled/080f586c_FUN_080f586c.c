
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_080f586c(void)

{
  undefined8 *unaff_r7;
  int unaff_r8;
  undefined2 *unaff_r11;
  undefined2 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    if (in_ZR || in_NG != in_OV) {
      *unaff_r11 = in_r12;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(5,in_cr11,unaff_r8 + 0x2cc);
  return *unaff_r7;
}

