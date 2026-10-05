
/* WARNING: Control flow encountered bad instruction data */

void FUN_08173772(undefined4 param_1)

{
  undefined4 unaff_r11;
  undefined4 in_cr3;
  
  coprocessor_moveto2(5,1,unaff_r11,param_1,in_cr3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

