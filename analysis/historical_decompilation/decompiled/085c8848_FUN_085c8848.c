
/* WARNING: Control flow encountered bad instruction data */

void FUN_085c8848(void)

{
  char *unaff_r5;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (!(bool)in_OV) {
    unaff_lr = 0x85c8850;
    func_0x074a1578();
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x85c8854;
    func_0x073595bc();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(6,in_cr13,unaff_lr + 0x1d4);
    coprocessor_function(6,0xe,3,in_cr8,in_cr15,in_cr7);
  }
  else {
    coprocessor_storelong(0xe,in_cr13,&stack0x00000000);
    coprocessor_storelong(0xe,in_cr14,&stack0x00000000);
    coprocessor_loadlong(0xf,in_cr14,&stack0x00000000);
    coprocessor_loadlong(0xf,in_cr14,unaff_lr + 0x224);
    coprocessor_loadlong(0xd,in_cr15,unaff_lr + 0x1e4);
    coprocessor_loadlong(8,in_cr15,unaff_lr + 0x1dc);
  }
  if (!(bool)in_CY) {
    *unaff_r5 = (char)unaff_r5 + -0x66;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

