
/* WARNING: Control flow encountered bad instruction data */

void FUN_086fccb8(undefined4 param_1,int *param_2)

{
  undefined1 *unaff_r4;
  undefined1 *puVar1;
  int *unaff_r8;
  int *unaff_r10;
  undefined1 unaff_r11;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr10;
  
  puVar1 = unaff_r4;
  if (in_NG != (bool)in_OV) {
    puVar1 = unaff_r4 + -0x544;
    *unaff_r4 = unaff_r11;
  }
  if (in_NG) {
    puVar1 = (undefined1 *)*param_2;
  }
  if (in_NG == (bool)in_OV) {
    software_interrupt(0x24b0);
    coprocessor_storelong(0xe,in_cr10,puVar1 + -0x110);
  }
  if (in_ZR) {
    unaff_r10 = (int *)(puVar1 + -((int)puVar1 >> 0x18));
  }
  if (in_NG) {
    *unaff_r10 = (int)puVar1;
    *unaff_r8 = (int)puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

