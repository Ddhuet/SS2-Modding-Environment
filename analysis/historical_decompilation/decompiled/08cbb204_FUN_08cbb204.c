
/* WARNING: Control flow encountered bad instruction data */

void FUN_08cbb204(void)

{
  undefined1 in_r3;
  undefined1 extraout_r3;
  undefined1 extraout_r3_00;
  undefined1 *unaff_r4;
  undefined1 *puVar1;
  char *unaff_r5;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x093a86cc();
    in_r3 = extraout_r3;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0a1006d0();
    in_r3 = extraout_r3_00;
  }
  if (in_NG != in_OV) {
    *unaff_r5 = (char)unaff_r5 + -0x30;
  }
  puVar1 = unaff_r4;
  if ((bool)in_NG) {
    puVar1 = unaff_r4 + -0x300;
    *unaff_r4 = (char)puVar1;
  }
  if (!(bool)in_CY) {
    *puVar1 = in_r3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

