
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080f87c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_CY;
  undefined8 in_d3;
  undefined8 unaff_d8;
  
  if (in_CY) {
    uRam080f87c4 = 0x80f87c8;
    uRam080f87a0 = param_1;
    uRam080f87a4 = param_3;
    uRam080f87a8 = param_4;
    uRam080f87ac = unaff_r6;
    uRam080f87b0 = unaff_r7;
    uRam080f87b4 = unaff_r8;
    uRam080f87b8 = unaff_r10;
    uRam080f87bc = in_r12;
    _FUN_080f87c0 = (undefined1 *)register0x00000054;
  }
  VectorShiftLeft(in_d3,unaff_d8,1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

