
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08e0c3ac) */

void FUN_08e0c3a8(void)

{
  undefined1 in_r3;
  undefined1 *unaff_r5;
  undefined1 *unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR && in_NG == '\0') {
    coprocessor_storelong(0xd,in_cr13,in_r12 + 0x32c);
    if (in_NG == '\0') {
      *unaff_r9 = (char)unaff_r10;
    }
    if (!in_CY) {
      *(undefined1 **)(unaff_r10 + 0x235) = unaff_r5;
      *unaff_r5 = in_r3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(0xc,in_cr12,unaff_r11 + 0x330);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

