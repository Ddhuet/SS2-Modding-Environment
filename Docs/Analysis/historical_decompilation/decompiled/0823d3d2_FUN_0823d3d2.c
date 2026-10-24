
/* WARNING: Control flow encountered bad instruction data */

void FUN_0823d3d2(undefined1 param_1)

{
  int unaff_r6;
  uint unaff_r8;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr8;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    if (!(bool)in_ZR && in_NG == in_OV) {
      param_1 = func_0x06db843a();
      in_r12 = extraout_r12;
    }
    if ((bool)in_NG) {
      in_CY = false;
      in_ZR = (unaff_r8 & 0x11000) == 0;
    }
    if ((bool)in_CY) {
      param_1 = func_0x07cb6c7e();
      in_r12 = extraout_r12_00;
    }
    if ((bool)in_ZR) {
      param_1 = func_0x0833dc22();
      in_r12 = extraout_r12_01;
    }
    if ((bool)in_ZR) {
      coprocessor_function(7,0xe,0,in_cr14,in_cr8,in_cr2);
    }
    *(undefined1 *)(unaff_r6 + 0x94b) = param_1;
    if (!(bool)in_ZR) {
      in_r12 = 0x823d3fa - (!(bool)in_CY + 0xde00000);
    }
    if (!(bool)in_OV) {
      coprocessor_load(3,in_cr13,in_r12);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

