
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08807c88) */
/* WARNING: Removing unreachable block (ram,0x08287cbc) */

void FUN_0805a8b0(void)

{
  char cVar1;
  char *unaff_r4;
  char *unaff_r6;
  char *unaff_r7;
  char unaff_r8;
  int in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr10;
  
  if (!in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV) {
    cVar1 = (char)unaff_r7 - (char)((uint)unaff_r7 >> 0xc);
    *unaff_r7 = cVar1;
    *unaff_r6 = cVar1;
  }
  else {
    *unaff_r4 = (char)unaff_r4 + -0x66;
    *unaff_r7 = unaff_r8;
  }
  if (in_OV != true) {
    coprocessor_loadlong(8,in_cr10,in_r12 + 0x2a8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

