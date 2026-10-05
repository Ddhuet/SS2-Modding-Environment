
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_089fa2e4(void)

{
  undefined4 *unaff_r4;
  uint unaff_r6;
  undefined4 unaff_r8;
  undefined1 *unaff_r11;
  undefined1 *puVar1;
  undefined1 in_NG;
  undefined1 in_CY;
  undefined1 uVar2;
  bool in_OV;
  
  puVar1 = unaff_r11;
  if (in_OV) {
    puVar1 = unaff_r11 + -(unaff_r6 >> 10 | unaff_r6 << 0x16);
    *unaff_r11 = (char)puVar1;
    *unaff_r4 = unaff_r8;
    func_0x07724de4();
  }
  if ((bool)in_CY) {
    in_NG = (int)(puVar1 + 0x4b001) < 0;
  }
  uVar2 = (bool)in_CY &&
          ((undefined1 *)0xfffb4fff < puVar1 || (undefined1 *)0xfffffffe < puVar1 + 0x4b000);
  if ((bool)in_NG) {
    func_0x092a4b88();
  }
  func_0x078e91f0();
  if ((bool)uVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

