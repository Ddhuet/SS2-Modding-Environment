
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x087c7ee4) */

void FUN_087c7edc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int extraout_r3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr11;
  
  if (!(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0x7111ef);
  coprocessor_moveto(1,7,4,param_2,in_cr2,in_cr11);
  uVar1 = coprocessor_movefromRt(1,6,0,in_cr2,in_cr3);
  if (in_NG != in_OV) {
    func_0x0a44c340(param_1,uVar1);
    param_4 = extraout_r3;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x09c4c348(*(undefined4 *)(param_4 + -0x10));
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0940c34c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

