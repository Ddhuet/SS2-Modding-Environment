
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e4608(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 unaff_r4;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_ZR) {
    coprocessor_function(5,0xe,6,in_cr11,in_cr10,in_cr0);
  }
  puVar1 = param_1;
  if ((bool)in_NG) {
    puVar1 = param_1 + -0x840;
    *param_1 = unaff_r4;
  }
  if (in_ZR) {
    in_OV = SBORROW4(0x44000000,param_2) != SBORROW4(0x44000000 - param_2,(uint)!in_CY);
    param_4 = 0x44000000 - (param_2 + (uint)!in_CY);
    in_NG = param_4 < 0;
  }
  if (in_NG != in_OV) {
    *(char *)(param_4 + 0x2f9) = (char)puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

