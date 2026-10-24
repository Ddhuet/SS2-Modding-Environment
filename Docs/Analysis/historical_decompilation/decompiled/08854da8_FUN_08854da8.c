
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x08854fc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x08854dc4) */
/* WARNING: Removing unreachable block (ram,0x08854dc8) */

void FUN_08854da8(char param_1,undefined4 param_2,undefined4 param_3,code *UNRECOVERED_JUMPTABLE)

{
  char *unaff_r11;
  char in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_CY) {
                    /* WARNING: Could not recover jumptable at 0x08854dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (in_ZR) {
    param_1 = '\0';
  }
  if (((bool)in_NG == in_OV) && (in_OV)) {
    in_r12 = in_r12 + param_1;
  }
  if (in_ZR) {
    *unaff_r11 = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

