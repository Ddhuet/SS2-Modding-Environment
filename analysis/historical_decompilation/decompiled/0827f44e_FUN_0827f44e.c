
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827f44e(undefined4 param_1,undefined4 param_2,uint param_3,undefined1 *param_4)

{
  uint unaff_r8;
  undefined1 unaff_r9;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_store(5,in_cr9,unaff_r8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    coprocessor_store(6,in_cr11,in_r12);
    param_3 = param_3 >> 0xd;
    in_CY = CARRY4(unaff_r8,param_3);
    in_OV = SCARRY4(unaff_r8,param_3);
    in_NG = (int)(unaff_r8 + param_3) < 0;
    in_ZR = unaff_r8 + param_3 == 0;
  }
  if (in_NG == in_OV) {
    *param_4 = unaff_r9;
  }
  else {
    coprocessor_store(6,in_cr10,unaff_r11);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    coprocessor_load(4,in_cr8,unaff_r8 + 0x27c);
    return;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    software_interrupt(0xaaa49c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

