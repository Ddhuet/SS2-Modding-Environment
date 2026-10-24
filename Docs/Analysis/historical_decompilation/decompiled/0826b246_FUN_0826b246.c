
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0826b246(undefined4 param_1,undefined4 param_2)

{
  int unaff_r6;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
    return CONCAT44(param_2,param_1);
  }
  if (in_NG != in_OV) {
    return *(undefined8 *)(unaff_r6 + 4);
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xdcd8e6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

