
/* WARNING: Control flow encountered bad instruction data */

void FUN_086cd7a4(char *param_1,undefined4 param_2,uint param_3)

{
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  bool in_OV;
  undefined4 in_cr5;
  
  if ((bool)in_NG != in_OV) {
    in_CY = 0;
    in_NG = true;
    in_ZR = false;
  }
  if ((bool)in_ZR) {
    *(char **)(param_1 + -0x10) = param_1;
    *(undefined4 *)(param_1 + -0xc) = param_2;
  }
  if (!(bool)in_NG) {
    param_3 = param_3 + 0x3c8;
    coprocessor_loadlong(0xd,in_cr5,param_3);
  }
  if (!in_OV) {
    *param_1 = (char)param_1 + -0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x086cd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)in_ZR && (bool)in_NG == in_OV) {
    if (!(bool)in_ZR && (bool)in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(&stack0x00000000 + (uint)in_CY + (0x86cd7bcU >> (param_3 & 0xff))))();
  return;
}

