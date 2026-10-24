
/* WARNING: Control flow encountered bad instruction data */

void FUN_0889affe(void)

{
  undefined1 *in_r3;
  int unaff_r5;
  undefined1 unaff_r10;
  int unaff_r11;
  int in_r12;
  int extraout_r12;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if ((bool)in_NG) {
    *in_r3 = (char)unaff_r11;
    *(undefined1 *)(unaff_r5 + -0x554) = unaff_r10;
  }
  if (in_NG != in_OV) {
    coprocessor_moveto(5,7,2,unaff_r11,in_cr13,in_cr5);
    coprocessor_function(0xe,0xe,7,in_cr11,in_cr14,in_cr14);
    software_interrupt(0xeeadcc);
    unaff_lr = unaff_lr + 0x330;
    coprocessor_storelong(0xc,in_cr10,unaff_lr);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xc,in_cr11,unaff_lr + 0x330);
  }
  if (in_NG != in_OV) {
    coprocessor_moveto(0xc,7,6,unaff_r11,in_cr13,in_cr12);
    coprocessor_function(0xc,0xe,6,in_cr10,in_cr12,in_cr11);
    func_0x07bca35a();
    in_r12 = extraout_r12;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(8,in_cr5,in_r12 + 0x270);
    coprocessor_loadlong(8,in_cr8,unaff_r11 + 0x234);
    coprocessor_loadlong(8,in_cr8,in_r12 + 0x234);
  }
  else {
    coprocessor_storelong(0xd,in_cr10,in_r12);
    coprocessor_storelong(8,in_cr8,in_r12);
    coprocessor_loadlong(8,in_cr8,in_r12);
    coprocessor_storelong(8,in_cr8,in_r12 + 0x234);
    coprocessor_loadlong(8,in_cr8,&stack0x00000230);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

