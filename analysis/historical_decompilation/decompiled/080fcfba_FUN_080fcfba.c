
/* WARNING: Control flow encountered bad instruction data */

void FUN_080fcfba(undefined1 *param_1)

{
  undefined1 *puVar1;
  uint unaff_r9;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  puVar1 = param_1;
  if (in_ZR || in_NG != in_OV) {
    puVar1 = param_1 + 0x5c4;
    *param_1 = unaff_r11;
  }
                    /* WARNING: Could not recover jumptable at 0x080fcfc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (unaff_r9 != !in_CY + 0x340) {
    (*(code *)(unaff_r9 & 0xbc000002))(puVar1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

