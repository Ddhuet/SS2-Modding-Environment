
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825bf98(undefined4 param_1,int param_2)

{
  undefined2 *unaff_r11;
  undefined4 in_cr15;
  undefined2 in_register_000003de;
  undefined2 in_register_000003e6;
  
  *unaff_r11 = in_register_000003de;
  unaff_r11[1] = in_register_000003e6;
  coprocessor_store2(3,in_cr15,param_2 + -0x38c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

