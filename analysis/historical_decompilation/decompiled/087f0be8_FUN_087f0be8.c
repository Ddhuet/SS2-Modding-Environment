
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0a181d08) */

undefined8 FUN_087f0be8(void)

{
  char in_NG;
  bool in_OV;
  undefined8 in_stack_00000004;
  
  if ((bool)in_NG != in_OV) {
    return in_stack_00000004;
  }
  if (in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

