
/* WARNING: Control flow encountered bad instruction data */

void FUN_087926fc(char *param_1,undefined4 param_2,uint param_3)

{
  int unaff_r8;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool in_OV;
  undefined4 in_cr2;
  undefined4 in_cr5;
  
  if ((bool)in_NG != in_OV) {
    in_CY = false;
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
                    /* WARNING: Could not recover jumptable at 0x0879270c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)in_ZR && (bool)in_NG == in_OV) {
    if (!(bool)in_ZR && (bool)in_NG == in_OV) {
      if ((bool)in_CY) {
        coprocessor_storelong(5,in_cr2,unaff_r8 + -0x9c);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(&stack0x00000000 + (uint)(byte)in_CY + (0x8792714U >> (param_3 & 0xff))))();
  return;
}

