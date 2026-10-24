
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x074bd614) */
/* WARNING: Removing unreachable block (ram,0x08e52d28) */

void FUN_08e52d18(void)

{
  undefined4 unaff_r5;
  undefined4 *unaff_r11;
  undefined1 in_ZR;
  
  if (!(bool)in_ZR) {
    func_0x07d4040c();
  }
  if ((bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r11 = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

