
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_082e3fa0(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 in_stack_00000004;
  
  if (in_NG != in_OV) {
    return in_stack_00000004;
  }
  if (in_NG != in_OV) {
    coprocessor_movefromRt(0xc,5,5,in_cr13,in_cr12);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

