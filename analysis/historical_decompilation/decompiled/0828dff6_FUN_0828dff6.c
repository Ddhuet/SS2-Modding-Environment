
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828dff6(undefined4 param_1)

{
  int unaff_r9;
  int unaff_r10;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_load(5,in_cr11,param_1);
  }
  else {
    coprocessor_store(10,in_cr10,0x828e28e);
  }
  if (in_ZR) {
    *(undefined1 *)(unaff_r10 + (unaff_r9 >> 0xb)) = 0;
  }
  coprocessor_loadlong2(0xd,in_cr0,unaff_lr + 0x90);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

