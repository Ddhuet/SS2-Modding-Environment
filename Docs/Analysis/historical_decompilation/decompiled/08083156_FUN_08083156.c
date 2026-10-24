
/* WARNING: Control flow encountered bad instruction data */

void FUN_08083156(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *unaff_r4;
  uint *puVar1;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 in_NG;
  bool in_OV;
  undefined4 in_cr15;
  
  coprocessor_store2(7,in_cr15,unaff_r5);
  if (in_OV) {
    unaff_r6 = (undefined4 *)((uint)unaff_r6 & 0xffff | 0x88290000);
  }
  coprocessor_load2(7,in_cr15,unaff_r9);
  puVar1 = unaff_r4;
  if (in_OV) {
    in_NG = param_1 < 0;
    puVar1 = unaff_r4 + -0xe5;
    unaff_r6 = (undefined4 *)*unaff_r4;
  }
  if ((bool)in_NG) {
    *unaff_r6 = unaff_lr;
    unaff_r6[-1] = register0x00000054;
    unaff_r6[-2] = unaff_r10;
    unaff_r6[-3] = unaff_r6;
    unaff_r6[-4] = puVar1;
    unaff_r6[-5] = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

