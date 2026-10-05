
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_086607d4(int param_1,int param_2)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG == in_OV) {
    if (in_ZR) {
      software_interrupt(0xf0c031);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_2 = param_2 + param_1 * -0x400;
  return CONCAT44(param_2 + -0x24,*(undefined4 *)(param_2 + -0x20));
}

