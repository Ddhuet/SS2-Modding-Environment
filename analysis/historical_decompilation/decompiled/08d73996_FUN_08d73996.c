
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d73996(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int unaff_r11;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr12;
  
  piVar1 = param_2;
  if (in_NG != in_OV) {
    piVar1 = (int *)((int)param_2 - (unaff_r11 >> 0xb));
    *param_2 = unaff_r11;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xc,in_cr12,unaff_lr + 0x16c);
  }
  else {
    func_0x0a7c8f16(param_1,piVar1);
  }
  if ((bool)in_ZR) {
    software_interrupt(0x6fbbc6);
    software_interrupt(0x610000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

