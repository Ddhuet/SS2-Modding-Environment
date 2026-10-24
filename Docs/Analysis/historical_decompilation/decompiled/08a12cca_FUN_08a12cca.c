
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a12cca(undefined4 param_1,uint param_2)

{
  uint unaff_r4;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    param_2 = unaff_r4 ^ 0x5c00;
  }
  if (!(bool)in_NG) {
    func_0x09dec672(param_1,param_2);
  }
  if (in_NG != in_OV) {
    func_0x0a9fb57a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

