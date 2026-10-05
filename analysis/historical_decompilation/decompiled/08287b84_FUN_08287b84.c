
/* WARNING: Control flow encountered bad instruction data */

void FUN_08287b84(uint param_1,int param_2)

{
  undefined1 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *(undefined1 *)(param_2 + (param_1 >> 0x1b | param_1 << 5)) = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

