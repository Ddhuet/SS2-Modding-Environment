
/* WARNING: Control flow encountered bad instruction data */

void FUN_08629014(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  byte in_CY;
  char in_OV;
  bool bVar2;
  undefined4 in_cr4;
  
  if (in_NG != (bool)in_OV) {
    param_1 = (undefined4 *)((int)param_1 * -0x3ff);
    *param_1 = 0x8629020;
    param_1[-1] = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r9;
    param_1[-5] = unaff_r8;
    param_1[-6] = unaff_r6;
  }
  bVar2 = false;
  if (in_NG) {
    uVar1 = (uint)param_1 >> 1;
    in_OV = SCARRY4(unaff_r9,uVar1) != SCARRY4(unaff_r9 + uVar1,(uint)in_CY);
    bVar2 = (int)(unaff_r9 + uVar1 + (uint)in_CY) < 0;
  }
  if (bVar2 != (bool)in_OV) {
    coprocessor_store(0,in_cr4,param_4 + -0x2f0);
    software_interrupt(0xbe00);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

