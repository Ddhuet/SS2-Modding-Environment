
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ab14b4(undefined4 param_1,char *param_2)

{
  uint unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    in_CY = 0xd9bfffff < unaff_r11;
  }
  if (in_CY) {
    *param_2 = (char)param_2 + -0x1a;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

