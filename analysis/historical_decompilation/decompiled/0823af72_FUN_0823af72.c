
/* WARNING: Control flow encountered bad instruction data */

void FUN_0823af72(int param_1)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    in_OV = SBORROW4(param_1,0x2ac00000) != SBORROW4(param_1 + -0x2ac00000,(uint)!in_CY);
    in_NG = (int)(param_1 - (!in_CY + 0x2ac00000)) < 0;
  }
  if (in_NG == in_OV) {
    software_interrupt(0xd41350);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

