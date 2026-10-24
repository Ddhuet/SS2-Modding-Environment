
/* WARNING: Control flow encountered bad instruction data */

void FUN_080effde(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    uRam080f0012 = 0x80effea;
    uRam080effee = param_1;
    uRam080efff2 = param_3;
    uRam080efff6 = unaff_r4;
    uRam080efffa = unaff_r5;
    uRam080efffe = unaff_r7;
    uRam080f0002 = unaff_r8;
    uRam080f0006 = unaff_r9;
    uRam080f000a = in_r12;
    puRam080f000e = (undefined1 *)register0x00000054;
  }
  if (!in_CY || in_ZR) {
    coprocessor_load(0,in_cr10,in_r12);
    coprocessor_function(0xe,9,5,in_cr9,in_cr14,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

