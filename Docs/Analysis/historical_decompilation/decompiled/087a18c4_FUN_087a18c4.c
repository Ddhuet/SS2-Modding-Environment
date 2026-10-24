
/* WARNING: Control flow encountered bad instruction data */

void FUN_087a18c4(void)

{
  char *unaff_r6;
  char *pcVar1;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (!in_ZR && (bool)in_NG == in_OV) {
    coprocessor_loadlong(5,in_cr11,&stack0x00000154);
  }
  if (in_CY && !in_ZR) {
    register0x00000054 = *(BADSPACEBASE **)(unaff_r6 + -4);
    unaff_r6 = unaff_r6 + -0x20;
  }
  if (in_OV) {
    pcVar1 = unaff_r6 + -((uint)unaff_r6 >> 0xc | (int)unaff_r6 << 0x14);
    *unaff_r6 = (char)pcVar1;
    *pcVar1 = (char)pcVar1 - (char)((uint)pcVar1 >> 0xc);
  }
  coprocessor_function(7,0xe,3,in_cr10,in_cr13,in_cr6);
  coprocessor_loadlong(6,in_cr7,(undefined1 *)((int)register0x00000054 + 0x198));
  coprocessor_function(6,0xd,3,in_cr7,in_cr12,in_cr5);
  if (in_ZR || (bool)in_NG != in_OV) {
    coprocessor_loadlong(6,in_cr6,register0x00000054);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

