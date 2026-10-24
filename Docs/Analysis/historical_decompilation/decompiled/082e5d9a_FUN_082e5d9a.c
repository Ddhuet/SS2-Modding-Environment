
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e5d9a(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int unaff_r5;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if ((bool)in_NG) {
    software_interrupt(0x23fc04);
  }
  if (in_ZR) {
    iVar1 = unaff_r5 >> 0x20;
    in_OV = SBORROW4(iVar1,param_3) != SBORROW4(iVar1 - param_3,(uint)!in_CY);
    in_NG = (int)(iVar1 - (param_3 + (uint)!in_CY)) < 0;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xbbbdb4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

