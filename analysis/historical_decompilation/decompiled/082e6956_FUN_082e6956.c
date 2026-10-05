
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e6956(undefined4 param_1,undefined4 param_2,uint param_3,undefined1 *param_4)

{
  uint extraout_r2;
  undefined1 *extraout_r3;
  int unaff_r4;
  uint unaff_r10;
  uint unaff_lr;
  undefined1 in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  if (!(bool)in_NG) {
    unaff_lr = 0x82e695a;
    func_0x082d406e();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if ((bool)in_NG) {
    *param_4 = (char)unaff_r4;
  }
  if ((bool)in_ZR) {
    unaff_r4 = unaff_r4 + (unaff_r4 >> 0x10);
  }
  if (in_NG != in_OV) {
    software_interrupt(0xbdb4e5);
  }
  coprocessor_moveto(3,0,5,unaff_lr,in_cr13,in_cr8);
  if (!(bool)in_NG) {
                    /* WARNING: Could not recover jumptable at 0x082e696e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if ((bool)in_ZR) {
      (*(code *)(param_3 & unaff_lr >> (unaff_r10 & 0xff)))();
      return;
    }
    coprocessor_store2(0xf,in_cr15,unaff_r4 + -0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

