
/* WARNING: Control flow encountered bad instruction data */

void FUN_081943cc(void)

{
  undefined4 unaff_r8;
  undefined4 *unaff_r10;
  undefined1 in_ZR;
  undefined1 in_CY;
  
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x06477e18();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r10 = unaff_r8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

