
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a1357a) */

void FUN_08a13566(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint *extraout_r2;
  uint *puVar1;
  uint *unaff_r4;
  int unaff_r6;
  uint unaff_r10;
  char *unaff_r11;
  undefined1 unaff_pc;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 in_d18;
  
  if ((bool)in_NG) {
    *unaff_r11 = (char)unaff_r11 + -100;
  }
  if ((bool)in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    param_3 = (uint *)((uint)param_3 ^ 0x20000002);
  }
  if ((bool)in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV != '\0') {
    func_0x09b53472();
    param_3 = extraout_r2;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_r10 = unaff_r10 ^ 0x20000002;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_r4 = param_3;
  }
  puVar1 = param_3;
  if (in_NG != in_OV) {
    puVar1 = (uint *)((int)param_3 + 0x8bb);
    *param_3 = unaff_r10;
  }
  if ((bool)in_NG) {
    unaff_r6 = *(int *)(unaff_r6 + -8);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *(char *)(unaff_r6 + (int)unaff_r4 * -0x20) = (char)puVar1;
  }
  if (!(bool)in_OV) {
    uRam08a135a6 = unaff_pc;
  }
  if (in_NG != in_OV) {
    VectorPairwiseMax(in_d18,in_d18,4,0);
    if ((bool)in_ZR) {
      software_interrupt(0xf22222);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

