
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x07cac444) */
/* WARNING: Removing unreachable block (ram,0x0837308c) */
/* WARNING: Removing unreachable block (ram,0x083730a4) */
/* WARNING: Removing unreachable block (ram,0x083730a8) */

void FUN_080f0854(void)

{
  int unaff_r7;
  undefined1 *unaff_r10;
  undefined1 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined4 in_cr12;
  undefined1 in_q7 [16];
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_moveto(0xc,7,6,&stack0x00000000,in_cr3,in_cr8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r10 = in_r12;
  coprocessor_function(4,0xc,6,in_cr12,in_cr8,in_cr4);
  VectorShiftLeft(in_q7,0x2f,0x40,1);
  software_interrupt(0xf1f3f7);
                    /* WARNING: Could not recover jumptable at 0x080f0870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_ZR) {
    (*(code *)(0x101e10f - (unaff_r7 + (uint)!in_CY)))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

