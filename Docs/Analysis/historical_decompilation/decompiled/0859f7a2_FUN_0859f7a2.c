
/* WARNING: Control flow encountered bad instruction data */

void FUN_0859f7a2(void)

{
  undefined1 *unaff_r4;
  undefined1 *puVar1;
  undefined1 *unaff_r5;
  undefined1 unaff_r11;
  undefined1 in_NG;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr11;
  
  puVar1 = unaff_r4;
  if ((bool)in_NG) {
    puVar1 = unaff_r4 + -0x544;
    *unaff_r4 = unaff_r11;
  }
  if (in_NG != in_OV) {
    coprocessor_function(5,5,2,in_cr11,in_cr4,in_cr4);
    software_interrupt(0xfe4445);
  }
  if (!(bool)in_NG) {
    func_0x08170d2e();
  }
  if ((bool)in_NG) {
    *unaff_r5 = (char)puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

