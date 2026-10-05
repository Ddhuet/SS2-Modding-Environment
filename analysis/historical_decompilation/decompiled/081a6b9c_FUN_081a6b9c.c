
/* WARNING: Control flow encountered bad instruction data */

void FUN_081a6b9c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  undefined4 unaff_r11;
  int in_r12;
  int *unaff_lr;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr3;
  undefined4 in_cr8;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  *unaff_lr = (int)param_3;
  unaff_lr[1] = param_4;
  unaff_lr[2] = unaff_r4;
  unaff_lr[3] = unaff_r8;
  unaff_lr[4] = unaff_r10;
  unaff_lr[5] = in_r12;
  unaff_lr[6] = (int)register0x00000054;
  unaff_lr[7] = 0x81a6ba4;
  if (!in_CY || in_ZR) {
    coprocessor_load(0xc,in_cr3,unaff_r6 + 0x188);
  }
  if (!in_ZR) {
    param_3 = (undefined4 *)(0x900000 - unaff_r4);
    coprocessor_function(0xd,10,6,in_cr12,in_cr8,in_cr14);
  }
  if (!in_OV) {
    unaff_r5 = unaff_r5 + -0x104;
    coprocessor_load(5,in_cr15,unaff_r5);
  }
  if (!in_CY || in_ZR) {
    *param_3 = param_1;
    param_3[1] = unaff_r5;
    param_3[2] = unaff_r6;
    param_3[3] = unaff_r7;
    param_3[4] = unaff_r8;
    param_3[5] = unaff_r9;
    param_3[6] = unaff_r10;
    param_3[7] = unaff_r11;
    param_3[8] = register0x00000054;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

