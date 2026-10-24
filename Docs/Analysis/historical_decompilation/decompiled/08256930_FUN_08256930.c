
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08256958) */

void FUN_08256930(int param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  undefined4 *unaff_r5;
  int unaff_r6;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr15;
  
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_NG) {
    *(undefined1 *)(unaff_r6 - (param_1 >> 0xf)) = 0;
  }
  if ((bool)in_ZR) {
    func_0x071388c8();
    param_2 = extraout_r1;
  }
  if ((bool)in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_ZR) {
    *unaff_r5 = param_2;
  }
  if ((bool)in_NG) {
    coprocessor_movefromRt(3,2,5,in_cr15,in_cr8);
  }
  if (!(bool)in_ZR) {
    software_interrupt(0x3a4333);
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

