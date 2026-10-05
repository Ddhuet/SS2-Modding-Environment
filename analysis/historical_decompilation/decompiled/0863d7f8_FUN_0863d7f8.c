
/* WARNING: Control flow encountered bad instruction data */

void FUN_0863d7f8(int param_1)

{
  int iVar1;
  int unaff_r7;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    iVar1 = unaff_r7 >> 1;
    in_OV = SBORROW4(param_1,iVar1) != SBORROW4(param_1 - iVar1,(uint)!in_CY);
    in_NG = (int)(param_1 - (iVar1 + (uint)!in_CY)) < 0;
    in_ZR = param_1 == iVar1 + (uint)!in_CY;
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

