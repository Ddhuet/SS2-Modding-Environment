
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08278c98(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *unaff_r9;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    return CONCAT44(*unaff_r9,param_1);
  }
  if (in_ZR) {
    return CONCAT44(param_2 + 0xc,*param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

