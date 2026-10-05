
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08282368(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined1 in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr4;
  
  if (in_ZR) {
    return *param_3;
  }
  if (in_OV) {
    func_0x08d3bab0();
  }
  if (!(bool)in_NG) {
    coprocessor_loadlong(0,in_cr4,0x828227c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

