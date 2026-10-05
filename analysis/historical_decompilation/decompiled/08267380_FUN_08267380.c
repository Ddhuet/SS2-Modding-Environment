
/* WARNING: Control flow encountered bad instruction data */

void FUN_08267380(void)

{
  undefined4 *unaff_r8;
  undefined4 unaff_pc;
  undefined1 in_CY;
  undefined4 in_cr1;
  undefined4 in_cr15;
  
  func_0x08c7c39a();
  *unaff_r8 = unaff_pc;
  if (!(bool)in_CY) {
    coprocessor_moveto(3,1,0,0x8267388,in_cr15,in_cr1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

