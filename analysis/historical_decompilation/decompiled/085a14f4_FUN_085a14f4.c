
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_085a14f4(void)

{
  undefined4 *unaff_r8;
  undefined1 in_ZR;
  undefined1 in_CY;
  
  if (!(bool)in_CY) {
    func_0x0740e9c4();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    return *unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

