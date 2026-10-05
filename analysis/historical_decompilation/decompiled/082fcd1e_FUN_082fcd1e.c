
/* WARNING: Control flow encountered bad instruction data */

void FUN_082fcd1e(void)

{
  undefined4 *unaff_r5;
  undefined4 unaff_r10;
  undefined1 in_ZR;
  undefined1 in_CY;
  
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x06a2a476();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r5 = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

