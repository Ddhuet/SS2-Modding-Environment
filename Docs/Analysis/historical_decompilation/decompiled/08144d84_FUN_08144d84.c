
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08dd2680) */
/* WARNING: Removing unreachable block (ram,0x08dd2690) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08144d84(undefined4 param_1)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY) {
    software_interrupt(0x2f211c);
    if (!in_OV) {
      _Reset = param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG == in_OV) {
    func_0x074798f4();
  }
  else {
    software_interrupt(0xecfe15);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

