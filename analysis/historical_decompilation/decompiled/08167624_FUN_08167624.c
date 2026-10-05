
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08167624(undefined4 param_1,undefined4 param_2)

{
  undefined1 unaff_r5;
  undefined1 *unaff_r6;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined1 unaff_r11;
  undefined4 unaff_lr;
  undefined1 in_ZR;
  
  puRam08167620 = unaff_r6;
  if (!(bool)in_ZR) {
    puRam08167620 = unaff_r6 + 0x5b9;
    *unaff_r6 = unaff_r11;
  }
  uRam0816762c = unaff_lr;
  uRam08167628 = unaff_r10;
  _FUN_08167624 = unaff_r8;
  uRam0816761c = param_2;
  if (!(bool)in_ZR) {
    func_0x08dfaf2c();
    func_0x07352d46();
    if (!(bool)in_ZR) {
      *(undefined1 *)(unaff_r7 + -0x134) = unaff_r5;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

