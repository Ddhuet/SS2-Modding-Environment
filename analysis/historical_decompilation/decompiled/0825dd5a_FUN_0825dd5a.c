
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0825dd7e) */

void FUN_0825dd5a(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  undefined4 unaff_r7;
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr3;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if ((bool)in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r9 + 0x2c8);
  }
  if (!in_ZR && (bool)in_NG == in_OV) {
    software_interrupt(0xcbc6c1);
  }
  UnsignedSaturate(unaff_r5 >> 0x15,0);
  UnsignedDoesSaturate(unaff_r5 >> 0x15,0);
  coprocessor_loadlong2(1,in_cr15,unaff_r7);
  if (!in_ZR) {
    *(undefined4 *)(param_3 * -0x10000 + 0x825dd72) = param_1;
  }
  if (!in_CY) {
    coprocessor_movefromRt(9,1,0,in_cr3,in_cr15);
  }
  if (in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

