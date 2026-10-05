
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0827dd0a(undefined4 param_1,undefined1 *param_2)

{
  int unaff_r7;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
    return *(undefined8 *)(unaff_r7 + 4);
  }
  if (in_ZR || in_NG != in_OV) {
    return CONCAT44(param_2,param_1);
  }
  coprocessor_function(8,0xc,6,in_cr12,in_cr11,in_cr6);
  *param_2 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

