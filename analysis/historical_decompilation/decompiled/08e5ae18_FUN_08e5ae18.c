
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x074c5714) */
/* WARNING: Removing unreachable block (ram,0x08e5ae28) */

void FUN_08e5ae18(void)

{
  undefined4 unaff_r5;
  undefined4 *unaff_r11;
  undefined1 in_ZR;
  
  if (!(bool)in_ZR) {
    func_0x07d4850c();
  }
  if ((bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r11 = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

