
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08265a4c) */
/* WARNING: Removing unreachable block (ram,0x08e773bc) */

void FUN_08265a3c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r7;
  int unaff_r9;
  uint unaff_r10;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr11;
  
  if (in_ZR || (bool)in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,unaff_r9 + 0x28c);
  }
  if (!in_CY) {
    unaff_r7 = iRam08265a38;
    unaff_r9 = iRam08265a40;
    unaff_r10 = uRam08265a44;
  }
  if (!in_OV) {
    in_ZR = param_3 >> (unaff_lr & 0xff) == 0x8265a4c;
  }
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x08265a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *(int *)(unaff_r7 + (unaff_r10 >> 3)) = unaff_r9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

