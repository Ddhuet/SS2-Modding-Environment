
/* WARNING: Control flow encountered bad instruction data */

void FUN_08225b3c(undefined4 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int unaff_r4;
  undefined4 unaff_r11;
  char in_NG;
  bool in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  puVar1 = param_2;
  if (in_NG != in_OV) {
    puVar1 = param_2 + 0x5ab;
    *param_2 = (char)unaff_r11;
    coprocessor_function(2,10,5,in_cr11,in_cr8,in_cr13);
  }
  if (in_CY) {
    func_0x0815f678(param_1,puVar1);
  }
  if (!(bool)in_NG) {
    coprocessor_storelong(0xf,in_cr5,unaff_r4 + -0x138);
  }
  if (!(bool)in_OV) {
    coprocessor_loadlong(8,in_cr6,unaff_r11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

