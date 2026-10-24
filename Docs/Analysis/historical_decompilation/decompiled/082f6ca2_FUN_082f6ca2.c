
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f6ca2(uint param_1,int param_2)

{
  undefined4 unaff_r10;
  int in_r12;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined4 in_cr13;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_movefromRt(5,6,5,in_cr4,in_cr0);
  }
  if (in_NG == in_OV) {
    coprocessor_load(1,in_cr13,in_r12 + 0x390);
    in_CY = 0xf7d0934d < param_1 >> 0x17;
    in_OV = SCARRY4(param_1 >> 0x17,0x82f6cb2);
    in_NG = '\0';
  }
  if (in_NG == in_OV) {
    coprocessor_load(5,in_cr8,param_2 + 0x254);
  }
  if ((bool)in_CY) {
    coprocessor_store(2,in_cr2,unaff_r10);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

