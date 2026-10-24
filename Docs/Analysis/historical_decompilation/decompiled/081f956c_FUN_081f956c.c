
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x081f9580) */

void FUN_081f956c(undefined4 param_1)

{
  undefined4 unaff_r5;
  int unaff_r8;
  int unaff_r9;
  undefined4 *unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r9 + 0x2c4);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(4,in_cr12,unaff_r8 + 0x300);
  }
  coprocessor_loadlong2(0xf,in_cr14,unaff_r5);
  if ((undefined1 *)((uint)&stack0x00000000 & 0xfcb7ffff) != (undefined1 *)0x0) {
    *unaff_lr = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

