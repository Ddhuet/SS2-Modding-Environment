
/* WARNING: Control flow encountered bad instruction data */

void FUN_082324d2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r9;
  char in_NG;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,param_3);
  }
  coprocessor_function(0xe,0xd,6,in_cr12,in_cr11,in_cr6);
  coprocessor_loadlong2(4,in_cr0,unaff_r9 + 0x48);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

