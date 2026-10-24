
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_081cac6c(int param_1)

{
  int unaff_r5;
  char in_NG;
  byte in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    in_OV = SCARRY4(param_1,0x2e000000) != SCARRY4(param_1 + 0x2e000000,(uint)in_CY);
    in_NG = (int)(param_1 + 0x2e000000 + (uint)in_CY) < 0;
  }
  if (in_NG != in_OV) {
    return *(undefined4 *)(unaff_r5 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

