
/* WARNING: Control flow encountered bad instruction data */

void FUN_0826000c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int unaff_r6;
  int unaff_r7;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool in_OV;
  undefined4 in_cr11;
  
  coprocessor_loadlong(5,in_cr11,param_2);
  if (in_OV) {
    *(char *)(unaff_r6 + unaff_r7 * -0x1000) = (char)param_3;
    param_4 = *(undefined4 *)(param_3 + -0x20);
    param_2 = *(undefined4 *)(param_3 + -0x28);
    param_1 = *(undefined4 *)(param_3 + -0x2c);
    param_3 = param_3 + -0x30;
  }
  if ((bool)in_ZR) {
    func_0x08c31594(param_1,param_2,param_3,param_4);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

