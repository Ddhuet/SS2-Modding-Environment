
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_081f0e62(undefined1 *param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int unaff_r4;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r10;
  int iVar2;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined8 in_d7;
  undefined8 in_d30;
  undefined1 auVar3 [16];
  
  if (in_NG != in_OV) {
    in_OV = SCARRY4(param_4,0x2d800000) != SCARRY4(param_4 + 0x2d800000,(uint)in_CY);
    iVar2 = param_4 + 0x2d800000 + (uint)in_CY;
    in_NG = iVar2 < 0;
    in_ZR = iVar2 == 0;
  }
  if (in_NG != in_OV) {
    param_1 = param_1 + (int)param_2;
    coprocessor_load(9,in_cr11,*(int *)(unaff_r4 + 0x2b1) + 0x2e0);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r6 = param_1;
  unaff_r6[1] = param_2;
  unaff_r6[2] = unaff_r6;
  unaff_r6[3] = unaff_r7;
  unaff_r6[4] = unaff_r10;
  unaff_r6[5] = unaff_lr;
  unaff_r6[6] = 0x81f0e7e;
  software_interrupt(0xcdccca);
  *param_2 = 0;
  uVar1 = VectorGetElement(in_d7,1,4,0);
  auVar3 = VectorDoubleMultiplyLong(in_d30,uVar1,4,0);
  SatQ(auVar3,4,0);
  coprocessor_movefromRt(8,7,7,in_cr11,in_cr4);
  if ((bool)in_ZR) {
    func_0x083b1e9e(param_1,param_2 + 0xedc);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

