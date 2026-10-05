
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08c7ed30(void)

{
  int unaff_r4;
  undefined1 unaff_r8;
  int in_r12;
  int extraout_r12;
  bool in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined4 in_cr5;
  undefined4 in_cr15;
  undefined8 in_stack_00000004;
  
  if (in_NG) {
    if (!(bool)in_CY || (bool)in_ZR) {
      software_interrupt(0xd9555a);
      func_0x0a325494();
      in_r12 = extraout_r12;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      coprocessor_loadlong(10,in_cr5,0x8c7f0a8);
    }
    if (!(bool)in_OV) {
      *(undefined1 *)(unaff_r4 - (in_r12 >> 0x19)) = unaff_r8;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      coprocessor_loadlong(0xf,in_cr15,0x8c7ed50);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return in_stack_00000004;
}

