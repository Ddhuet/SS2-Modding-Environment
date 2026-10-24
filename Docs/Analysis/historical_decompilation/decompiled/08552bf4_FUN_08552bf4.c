
/* WARNING: Control flow encountered bad instruction data */

void FUN_08552bf4(void)

{
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    coprocessor_moveto(5,5,7,unaff_r11,in_cr6,in_cr12);
    coprocessor_function(0xe,0xc,5,in_cr11,in_cr0,in_cr6);
    coprocessor_moveto(6,6,5,unaff_r10,in_cr0,in_cr14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

