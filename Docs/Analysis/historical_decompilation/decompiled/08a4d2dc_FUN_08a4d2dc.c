
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a4d2dc(undefined4 param_1)

{
  undefined1 *unaff_r11;
  undefined1 *puVar1;
  bool in_ZR;
  bool bVar2;
  bool in_CY;
  bool in_OV;
  
  puVar1 = unaff_r11;
  if (!in_OV) {
    puVar1 = unaff_r11 + -0x46fdd6cc;
    *unaff_r11 = (char)puVar1;
  }
  bVar2 = in_ZR && puVar1 + !in_CY == (undefined1 *)0x11;
  if (bVar2) {
    software_interrupt(0xfbb665);
  }
  func_0x0794489e(param_1);
  if (bVar2) {
    software_interrupt(0xfdbbcd);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

