
/* WARNING: Control flow encountered bad instruction data */

void FUN_0870db2a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    uRam0870db5a = 0x870db32;
    uRam0870db32 = param_1;
    uRam0870db36 = param_2;
    uRam0870db3a = param_3;
    uRam0870db3e = param_4;
    uRam0870db42 = unaff_r4;
    uRam0870db46 = unaff_r6;
    uRam0870db4a = unaff_r8;
    uRam0870db4e = unaff_r10;
    uRam0870db52 = in_r12;
    puRam0870db56 = (undefined1 *)register0x00000054;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

