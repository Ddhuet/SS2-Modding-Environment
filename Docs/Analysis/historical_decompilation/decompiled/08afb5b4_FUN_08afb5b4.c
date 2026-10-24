
/* WARNING: Control flow encountered bad instruction data */

void FUN_08afb5b4(void)

{
  int unaff_r5;
  int iVar1;
  int iVar2;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr12;
  
  if (!in_NG) {
    coprocessor_moveto(5,7,1,unaff_r11,in_cr12,in_cr6);
  }
  iVar1 = unaff_r5;
  if (in_CY && !in_ZR) {
    iVar1 = unaff_r5 + 0x194;
    coprocessor_load(3,in_cr5,unaff_r5);
  }
  iVar2 = iVar1;
  if (!in_ZR && in_NG == (bool)in_OV) {
    iVar2 = iVar1 + 0x198;
    coprocessor_load(3,in_cr3,iVar1);
  }
  coprocessor_store(3,in_cr3,iVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

