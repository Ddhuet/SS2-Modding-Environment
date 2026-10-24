
/* WARNING: Control flow encountered bad instruction data */

void FUN_08189f92(void)

{
  int unaff_r6;
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr5;
  
  if (in_NG == in_OV) {
    coprocessor_movefromRt(5,5,5,in_cr2,in_cr5);
  }
  else {
    in_OV = SCARRY4(unaff_r6,0xac0000) != SCARRY4(unaff_r6 + 0xac0000,(uint)in_CY);
    iVar1 = unaff_r6 + 0xac0000 + (uint)in_CY;
    in_NG = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    software_interrupt(0xd4bcc1);
  }
  if (in_NG != in_OV) {
    func_0x072382b2();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

