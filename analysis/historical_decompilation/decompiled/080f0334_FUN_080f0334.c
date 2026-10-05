
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080f0334(uint param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint *puVar3;
  int unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined2 in_r12;
  undefined2 *unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar4;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    unaff_r5 = (undefined4 *)((int)unaff_r5 + 0x5ce);
    *unaff_r5 = unaff_r11;
  }
  if (!in_ZR && in_NG == in_OV) {
    *unaff_lr = in_r12;
  }
  if (in_CY && !in_ZR) {
    coprocessor_store(2,in_cr9,unaff_r6);
  }
  if (in_NG == in_OV) {
    return *(undefined4 *)(unaff_r10 + 4);
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR || in_NG != in_OV) {
    if (!in_ZR && in_NG == in_OV) {
      software_interrupt(0x602);
      bVar4 = false;
      if (in_ZR) {
        coprocessor_function(5,0xf,7,in_cr14,in_cr7,in_cr5);
        in_CY = false;
        param_2 = param_1 & 0x1e000;
        bVar4 = param_2 == 0;
        in_NG = false;
      }
      if (in_CY) {
        unaff_r5 = *(undefined4 **)(unaff_r4 + -0xc);
        param_4 = *(uint **)(unaff_r4 + -0x14);
        param_1 = *(uint *)(unaff_r4 + -0x18);
      }
      if (!bVar4) {
        uVar1 = SignedSaturate((short)param_4 - (short)unaff_r5,0x10);
        uVar2 = SignedSaturate((short)((uint)param_4 >> 0x10) + (short)((uint)unaff_r5 >> 0x10),0x10
                              );
        param_3 = CONCAT22(uVar2,uVar1);
      }
      puVar3 = param_4;
      if ((bool)in_NG) {
        puVar3 = param_4 + -900;
        param_2 = *param_4;
      }
      if (in_CY) {
        func_0x08e414a8(param_1,param_2,param_3,puVar3);
      }
      if (!(bool)in_NG) {
        coprocessor_function(9,4,1,in_cr3,in_cr14,in_cr11);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

