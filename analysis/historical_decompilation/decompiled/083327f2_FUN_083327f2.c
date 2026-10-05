
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08332802) */
/* WARNING: Removing unreachable block (ram,0x08332816) */

undefined8 FUN_083327f2(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_r7;
  undefined4 *unaff_r9;
  undefined4 *unaff_r10;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_ZR) {
    return CONCAT44(*(undefined4 *)(unaff_r7 + 4),param_1);
  }
  if (!in_NG) {
    *unaff_r9 = param_2;
  }
  coprocessor_moveto(10,0,2,param_3,in_cr13,in_cr5);
  if (in_NG == (bool)in_OV) {
    unaff_r10 = unaff_r10 + 0xcc;
    coprocessor_load(5,in_cr11,unaff_r10);
  }
  if (!in_CY) {
    param_3 = param_3 + -0xe00;
  }
  uVar1 = coprocessor_movefromRt(7,7,0,in_cr7,in_cr15);
  if (in_NG != (bool)in_OV) {
    coprocessor_store(4,in_cr1,param_3 + -0x3b0);
    coprocessor_storelong(0xb,in_cr14,uVar1);
    coprocessor_moveto(0xe,7,6,unaff_r11,in_cr5,in_cr8);
    if (in_CY) {
      coprocessor_store(4,in_cr2,unaff_r10 + -0x2e);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return CONCAT44(param_2,*unaff_r10);
}

