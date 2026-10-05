
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x087ded8c) */

void FUN_087ded74(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_NG) {
    *unaff_r11 = param_2;
    unaff_r11[1] = param_3;
    unaff_r11[2] = unaff_r5;
    unaff_r11[3] = unaff_r6;
    unaff_r11[4] = unaff_r8;
    unaff_r11[5] = unaff_r9;
    unaff_r11[6] = unaff_r11;
    unaff_r11[7] = in_r12;
    unaff_r11[8] = unaff_lr;
    unaff_r11[9] = 0x87ded80;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    func_0x0694dba0();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != '\0') {
    func_0x076a9844();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

