
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b20392(int param_1)

{
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  bool in_OV;
  bool bVar1;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr6;
  
  bVar1 = false;
  if (in_OV) {
    bVar1 = SBORROW4(0x1dc00000,param_1) != SBORROW4(0x1dc00000 - param_1,(uint)!in_CY);
    in_NG = (int)(-(param_1 + (uint)!in_CY) + 0x1dc00000) < 0;
    in_ZR = -(param_1 + (uint)!in_CY) == -0x1dc00000;
  }
  if ((bool)in_NG != bVar1) {
    coprocessor_movefromRt(0xb,7,2,in_cr0,in_cr6);
  }
  if (!(bool)in_ZR) {
    coprocessor_loadlong(1,in_cr1,param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

