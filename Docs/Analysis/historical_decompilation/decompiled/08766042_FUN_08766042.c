
/* WARNING: Control flow encountered bad instruction data */

void FUN_08766042(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 unaff_r11;
  bool in_ZR;
  bool in_OV;
  
  if (!in_OV) {
    *(undefined1 *)(param_1 + (param_3 >> 0xb)) = unaff_r11;
  }
  if (in_ZR) {
    software_interrupt(0x305ff0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

