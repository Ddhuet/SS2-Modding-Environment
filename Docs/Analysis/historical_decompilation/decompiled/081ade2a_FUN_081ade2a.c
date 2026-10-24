
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x085aaa0a) */
/* WARNING: Removing unreachable block (ram,0x085aaa3e) */

undefined4 FUN_081ade2a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r4;
  undefined4 *unaff_r5;
  int unaff_r6;
  undefined4 unaff_r8;
  undefined4 in_r12;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_CY) {
    coprocessor_function(5,1,5,in_cr11,in_cr7,in_cr4);
  }
  if (in_ZR) {
    unaff_r8 = *(undefined4 *)(unaff_r6 + 0x10);
    in_r12 = *(undefined4 *)(unaff_r6 + 0x18);
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(0,in_cr15,unaff_r4 + 0x3c4);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_function(2,0,7,in_cr1,in_cr8,in_cr3);
  }
  if (!in_ZR) {
    if (in_NG == in_OV) {
      coprocessor_function(5,0xe,4,in_cr5,in_cr14,in_cr9);
      coprocessor_function(5,0xe,4,in_cr5,in_cr14,in_cr9);
      coprocessor_storelong(5,in_cr3,unaff_lr + 0x164);
      coprocessor_storelong(3,in_cr3,unaff_lr + 0x288);
      coprocessor_storelong(3,in_cr1,unaff_lr + 1000);
      coprocessor_function(1,0xe,2,in_cr1,in_cr14,in_cr7);
      coprocessor_storelong(3,in_cr1,unaff_lr + 0x4c8);
    }
    else {
      coprocessor_function(0,0xe,0,in_cr0,in_cr14,in_cr0);
    }
    if (in_CY) {
      return unaff_r5[-0xd];
    }
    *unaff_r5 = param_1;
    unaff_r5[1] = param_4;
    unaff_r5[2] = unaff_r4;
    unaff_r5[3] = unaff_r5;
    unaff_r5[4] = unaff_r8;
    unaff_r5[5] = in_r12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

