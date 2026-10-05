
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x07c5c114) */
/* WARNING: Removing unreachable block (ram,0x0856eeac) */

undefined4 FUN_0856ee94(void)

{
  int unaff_r11;
  undefined1 in_ZR;
  undefined1 in_CY;
  
  if (!(bool)in_CY) {
    func_0x07cdc3f0();
  }
  if ((bool)in_CY) {
    func_0x07cd4904();
  }
  if (!(bool)in_ZR) {
    func_0x07cdc910();
  }
  if (!(bool)in_ZR) {
    func_0x07cdc90c();
  }
  if ((bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined4 *)(unaff_r11 + 4);
}

