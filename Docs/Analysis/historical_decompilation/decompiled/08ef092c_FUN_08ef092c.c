
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ef092c(void)

{
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    unaff_lr = 0x8ef0930;
    func_0x0825de94();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_moveto(5,7,2,unaff_lr,in_cr15,in_cr12);
    coprocessor_moveto(5,7,2,&stack0x00000000,in_cr15,in_cr13);
  }
  else {
    coprocessor_loadlong(5,in_cr12,unaff_lr);
    coprocessor_storelong(5,in_cr13,unaff_lr + 0x170);
  }
  coprocessor_movefromRt(0xf,7,7,in_cr14,in_cr14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

