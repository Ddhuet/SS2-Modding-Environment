
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_080cf35e(undefined4 param_1,undefined8 *param_2)

{
  undefined4 unaff_r10;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_storelong(6,in_cr12,unaff_r10);
  return *param_2;
}

