
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080f87b4(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 extraout_r12;
  char in_NG;
  undefined1 in_CY;
  char in_OV;
  undefined4 extraout_s6;
  undefined4 extraout_s7;
  undefined8 unaff_d8;
  
  uVar1 = func_0x07ae5fa6();
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY) {
    FUN_080f87c0 = 0x80f87c8;
    uRam080f87a0 = uVar1;
    uRam080f87a4 = extraout_r2;
    uRam080f87a8 = extraout_r3;
    uRam080f87ac = unaff_r6;
    uRam080f87b0 = unaff_r7;
    _FUN_080f87b4 = unaff_r8;
    uRam080f87b8 = unaff_r10;
    uRam080f87bc = extraout_r12;
    _FUN_080f87c0 = (undefined1 *)register0x00000054;
  }
  VectorShiftLeft(CONCAT44(extraout_s7,extraout_s6),unaff_d8,1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

