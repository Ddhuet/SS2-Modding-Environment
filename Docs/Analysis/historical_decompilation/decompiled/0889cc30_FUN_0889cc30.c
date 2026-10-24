
/* WARNING: Control flow encountered bad instruction data */

void FUN_0889cc30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if ((bool)in_CY && !(bool)in_ZR) {
    uRam0889cc50 = 0x889cc38;
    uRam0889cc38 = param_3;
    uRam0889cc3c = unaff_r6;
    uRam0889cc40 = unaff_r8;
    uRam0889cc44 = unaff_r10;
    uRam0889cc48 = in_r12;
    puRam0889cc4c = (undefined1 *)register0x00000054;
    func_0x06c31d4c();
  }
  if (in_NG == in_OV) {
    func_0x076b1d50();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x075654cc();
  }
  if (in_NG != in_OV) {
    func_0x091294d0();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

