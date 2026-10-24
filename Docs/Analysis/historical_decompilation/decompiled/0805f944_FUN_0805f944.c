
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0805f944(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  
  if (in_NG) {
    uRam0805f94c = 0x805f94c;
    uRam0805f938 = unaff_r4;
    uRam0805f93c = unaff_r8;
    uRam0805f940 = unaff_r10;
    _FUN_0805f944 = in_r12;
    puRam0805f948 = (undefined1 *)register0x00000054;
  }
  func_0x08a1d7ec();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

