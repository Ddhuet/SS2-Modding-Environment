
/* WARNING: Control flow encountered bad instruction data */

void FUN_081ea146(undefined4 param_1,int param_2)

{
  int iVar1;
  int unaff_r6;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0xc6b5aa);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = unaff_r6 >> 0xb;
  if ((int)(param_2 - (iVar1 + (uint)!in_CY)) < 0 !=
      (SBORROW4(param_2,iVar1) != SBORROW4(param_2 - iVar1,(uint)!in_CY))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

