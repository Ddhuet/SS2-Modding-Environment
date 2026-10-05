
/* WARNING: Control flow encountered bad instruction data */

void FUN_0808e434(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined1 auStack_c0 [192];
  
  if (in_NG) {
    coprocessor_store(5,in_cr11,auStack_c0);
  }
  puVar1 = param_1;
  if (in_ZR) {
    puVar1 = param_1 + -0x318;
    *param_1 = param_2;
  }
  if (in_CY) {
    coprocessor_loadlong(0xc,in_cr0,0x808e444);
    *puVar1 = register0x00000054;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

