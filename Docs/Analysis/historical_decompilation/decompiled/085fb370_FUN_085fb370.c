
/* WARNING: Control flow encountered bad instruction data */

undefined8
FUN_085fb370(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    return *param_2;
  }
  if (in_NG != in_OV) {
    uRam085fb1ad = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

