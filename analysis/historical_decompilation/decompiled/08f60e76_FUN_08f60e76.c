
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08f60eae) */

void FUN_08f60e76(uint param_1)

{
  undefined1 *unaff_r9;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  if (in_OV) {
    coprocessor_loadlong(5,in_cr11,unaff_r11 + 0x150);
  }
  if ((bool)in_NG != in_OV) {
    coprocessor_load(8,in_cr13,&stack0x00000150);
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,0x8f60fde);
    coprocessor_loadlong(0xd,in_cr13,0x8f61022);
  }
  if (in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x08f60eaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(param_1 & param_1 >> 0x16))();
    return;
  }
  if (in_OV) {
    *unaff_r9 = (char)param_1;
  }
  coprocessor_loadlong2(0xf,in_cr15,0x8f612be);
  if ((bool)in_NG != in_OV) {
    software_interrupt(0xfbfddf);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

