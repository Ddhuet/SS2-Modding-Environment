
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08000e50) */
/* WARNING: Removing unreachable block (ram,0x08000e60) */

void FUN_08000e48(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  bool in_NG;
  bool in_OV;
  undefined8 in_d6;
  
  if (!in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV) {
    *param_3 = in_d6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

