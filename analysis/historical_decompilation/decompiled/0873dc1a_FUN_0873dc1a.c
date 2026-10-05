
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0873dc2a) */

void FUN_0873dc1a(undefined4 param_1,int param_2)

{
  uint unaff_r7;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr7;
  
  if (!in_ZR && (bool)in_NG == in_OV) {
    in_NG = (int)(unaff_r7 | param_2 >> 0xb) < 0;
  }
  if (!in_OV) {
    coprocessor_store(0xf,in_cr7,param_1);
  }
  if ((bool)in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

