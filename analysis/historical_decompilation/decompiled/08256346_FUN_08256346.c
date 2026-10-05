
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08256356) */

void FUN_08256346(uint param_1,uint param_2,int *param_3)

{
  undefined1 *unaff_r5;
  int unaff_r11;
  int in_r12;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr14;
  
  if (!in_ZR) {
    *unaff_r5 = (char)unaff_r11;
  }
  coprocessor_loadlong(0xe,in_cr14,in_r12 + 0x24);
  if (in_CY) {
    *param_3 = (int)param_3 - (param_2 >> 0x1c);
  }
                    /* WARNING: Could not recover jumptable at 0x08256352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(param_1 & unaff_r11 << 0x1a))();
  return;
}

