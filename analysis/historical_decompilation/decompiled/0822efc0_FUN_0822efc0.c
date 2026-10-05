
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0822efc0(undefined4 param_1,undefined4 param_2)

{
  undefined8 *unaff_r7;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return *unaff_r7;
  }
  return CONCAT44(param_2,param_1);
}

