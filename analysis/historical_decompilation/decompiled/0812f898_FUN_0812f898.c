
/* WARNING: Control flow encountered bad instruction data */

void FUN_0812f898(void)

{
  uint in_r3;
  uint extraout_r3;
  int unaff_r8;
  undefined4 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr15;
  
  if (in_NG == in_OV) {
    func_0x0781cec0();
    in_r3 = extraout_r3;
  }
  if (!(bool)in_ZR) {
    *(undefined4 *)(unaff_r8 - (in_r3 >> 0xd)) = unaff_pc;
  }
  if (!(bool)in_OV) {
    software_interrupt(0x7f7f7a);
    software_interrupt(0x7f7f7f);
    software_interrupt(0x7f7f7f);
    software_interrupt(0x7f7f7f);
  }
  if (!(bool)in_CY) {
    coproc_movefrom_Peripheral_System(3,in_cr15,3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

