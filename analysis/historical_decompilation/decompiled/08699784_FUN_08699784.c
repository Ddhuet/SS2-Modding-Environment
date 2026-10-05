
/* WARNING: Control flow encountered bad instruction data */

void FUN_08699784(uint param_1,undefined4 param_2,uint param_3)

{
  ushort *unaff_r9;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if ((bool)in_CY) {
    param_3 = (uint)*unaff_r9;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8699794;
    param_1 = func_0x08ec7f98(param_1,param_2,param_3);
  }
  if (in_NG != in_OV) {
    param_1 = param_1 - 0x80;
    coprocessor_store(0xc,in_cr11,param_1);
  }
  if ((bool)in_CY) {
    in_ZR = unaff_lr + (param_1 >> 0x1e) == -1;
  }
  if (!(bool)in_ZR) {
    software_interrupt(0xf020bf);
    software_interrupt(0xf01ff0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

