
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08189e8a(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r4;
  int unaff_r8;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,param_3 + 0x2cc);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_moveto(10,6,6,(uint)*(byte *)(unaff_r4 + 0xdc6),in_cr3,in_cr10);
  }
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined8 *)(unaff_r8 + 4);
}

