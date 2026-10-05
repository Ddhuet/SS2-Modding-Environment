
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x077cc09a) */

undefined4 FUN_088b20ea(void)

{
  undefined1 in_r3;
  undefined1 extraout_r3;
  undefined1 *unaff_r5;
  int unaff_r9;
  bool in_NG;
  undefined1 in_CY;
  bool in_OV;
  
  if (in_OV) {
    if (in_NG) {
      func_0x08888012();
      in_r3 = extraout_r3;
    }
    if (!(bool)in_CY) {
      *unaff_r5 = in_r3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined4 *)(unaff_r9 + -0x20);
}

