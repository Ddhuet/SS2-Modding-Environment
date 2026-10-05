
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827435a(void)

{
  int in_r3;
  uint unaff_r8;
  int in_r12;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr14;
  
  if (!in_ZR && in_NG == in_OV) {
    in_r3 = in_r3 >> 0xb;
    in_OV = SCARRY4(in_r12,in_r3) != SCARRY4(in_r12 + in_r3,(uint)in_CY);
    in_NG = (int)(in_r12 + in_r3 + (uint)in_CY) < 0;
  }
  if (in_NG != in_OV) {
    software_interrupt(0xc6b7bf);
  }
  coprocessor_loadlong(0xe,in_cr14,unaff_r8 & 0xfffffffb);
  coprocessor_movefromRt(6,7,7,in_cr3,in_cr5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

