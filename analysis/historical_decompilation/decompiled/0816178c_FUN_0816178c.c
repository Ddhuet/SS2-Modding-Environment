
/* WARNING: Control flow encountered bad instruction data */

void FUN_0816178c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r10;
  undefined4 in_r12;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  coprocessor_function2(5,0xd,5,in_cr11,in_cr10,in_cr0);
  if (!in_CY) {
    coprocessor_moveto2(8,1,param_4,unaff_r4,in_cr15);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(0xe,in_cr15,unaff_lr + 0x88);
  }
  if (in_CY) {
    *param_2 = in_r12;
    param_2[-1] = unaff_r10;
    param_2[-2] = param_4;
    param_2[-3] = param_2;
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

