
/* WARNING: Control flow encountered bad instruction data */

void FUN_087f315c(void)

{
  char *unaff_r6;
  char *pcVar1;
  undefined4 unaff_r8;
  uint unaff_r9;
  int unaff_r11;
  char *unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (!in_NG) {
    unaff_r11 = *(int *)(unaff_r11 + 0x56a);
  }
  coprocessor_function(0xc,0xe,3,in_cr14,in_cr14,in_cr9);
  pcVar1 = unaff_r6;
  if (in_OV) {
    pcVar1 = unaff_r6 + -(unaff_r9 >> 0xc | unaff_r9 << 0x14);
    *unaff_r6 = (char)pcVar1;
  }
  if (!in_CY || in_ZR) {
    coprocessor_loadlong(0xc,in_cr12,unaff_lr);
    coprocessor_store(0xe,in_cr14,0x87f3174);
    coprocessor_store(0xf,in_cr15,unaff_r8);
    coprocessor_load(5,in_cr5,unaff_r8);
    coprocessor_load(5,in_cr8,unaff_r11);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV) {
    *unaff_lr = (char)unaff_lr + ((byte)((uint)unaff_lr >> 0x1d) | (byte)((int)unaff_lr << 3));
    *pcVar1 = (char)pcVar1 - (char)((uint)pcVar1 >> 0xc);
  }
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

