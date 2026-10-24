
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f83f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    uRam081f8424 = 0x81f83fc;
    uRam081f8400 = param_3;
    uRam081f8404 = param_4;
    uRam081f8408 = unaff_r4;
    uRam081f840c = unaff_r5;
    uRam081f8410 = unaff_r7;
    uRam081f8414 = unaff_r8;
    uRam081f8418 = unaff_r10;
    uRam081f841c = in_r12;
    puRam081f8420 = (undefined1 *)register0x00000054;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

